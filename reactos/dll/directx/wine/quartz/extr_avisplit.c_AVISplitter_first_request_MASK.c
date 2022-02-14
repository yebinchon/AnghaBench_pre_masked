
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct thread_args {int stream; TYPE_4__* This; } ;
struct TYPE_11__ {int cStreams; TYPE_1__* pInputPin; } ;
struct TYPE_13__ {TYPE_3__* streams; TYPE_2__ Parser; } ;
struct TYPE_12__ {scalar_t__ index_next; scalar_t__ index; scalar_t__ entries; int * thread; scalar_t__ stdindex; int seek; int pos; int pos_next; int packet_queued; } ;
struct TYPE_10__ {int pReader; } ;
typedef TYPE_3__ StreamData ;
typedef TYPE_4__* LPVOID ;
typedef int IMediaSample ;
typedef int HRESULT ;
typedef int DWORD_PTR ;
typedef int DWORD ;
typedef int BOOL ;
typedef TYPE_4__ AVISplitterImpl ;


 int FUNC_0 (TYPE_4__*,int *,int ) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int VAR_0 ;
 struct thread_args* FUNC_3 (int) ;
 int * FUNC_4 (int *,int ,int ,struct thread_args*,int ,int*) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 (int ,int,int **,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (int) ;

__attribute__((used)) static HRESULT FUNC_13(LPVOID VAR_6)
{
    AVISplitterImpl *VAR_7 = VAR_6;
    HRESULT VAR_8 = VAR_3;
    DWORD VAR_9;
    IMediaSample *VAR_10 = ((void*)0);
    BOOL VAR_11 = VAR_1;

    FUNC_11("(%p)->()\n", VAR_7);

    for (VAR_9 = 0; VAR_9 < VAR_7->Parser.cStreams; ++VAR_9)
    {
        StreamData *VAR_12 = VAR_7->streams + VAR_9;


        FUNC_12(!VAR_12->thread);

        FUNC_12(!VAR_10);


        FUNC_9(VAR_12->packet_queued);

        VAR_12->pos_next = VAR_12->pos;
        VAR_12->index_next = VAR_12->index;


        VAR_12->seek = VAR_4;
        if (VAR_11)
        {
            DWORD_PTR VAR_13 = ~0;
            VAR_8 = FUNC_7(VAR_7->Parser.pInputPin->pReader, 10000, &VAR_10, &VAR_13);
            FUNC_12(VAR_8 == VAR_3);
            FUNC_12(*VAR_10);

            FUNC_0(VAR_6, VAR_10, VAR_13);
            FUNC_8(VAR_10);
        }

        VAR_8 = FUNC_2(VAR_7, VAR_9);
        FUNC_11("-->%08x\n", VAR_8);


        VAR_11 = (VAR_8 == VAR_3);
        if (VAR_8 == VAR_2)
            FUNC_1(VAR_7, VAR_9);

        if (FUNC_6(VAR_8) && VAR_8 != VAR_5)
            break;
        VAR_8 = VAR_3;
    }


    for (VAR_9 = 0; VAR_9 < VAR_7->Parser.cStreams && FUNC_10(VAR_8); ++VAR_9)
    {
        struct thread_args *VAR_14;
        DWORD VAR_15;

        if ((VAR_7->streams[VAR_9].stdindex && VAR_7->streams[VAR_9].index_next >= VAR_7->streams[VAR_9].entries) ||
            (!VAR_7->streams[VAR_9].stdindex && VAR_7->streams[VAR_9].index_next))
        {
            VAR_7->streams[VAR_9].thread = ((void*)0);
            continue;
        }

        VAR_14 = FUNC_3(sizeof(*VAR_14));
        VAR_14->This = VAR_7;
        VAR_14->stream = VAR_9;
        VAR_7->streams[VAR_9].thread = FUNC_4(((void*)0), 0, VAR_0, VAR_14, 0, &VAR_15);
        FUNC_11("Created stream %u thread 0x%08x\n", VAR_9, VAR_15);
    }

    if (FUNC_6(VAR_8))
        FUNC_5("Horsemen of the apocalypse came to bring error 0x%08x\n", VAR_8);

    return VAR_8;
}

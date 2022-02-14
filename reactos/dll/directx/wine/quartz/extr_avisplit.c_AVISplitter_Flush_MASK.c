
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_7__ {scalar_t__ cStreams; } ;
struct TYPE_9__ {TYPE_2__* streams; TYPE_1__ Parser; } ;
struct TYPE_8__ {int thread; int packet_queued; int * sample; } ;
typedef TYPE_2__ StreamData ;
typedef TYPE_3__* LPVOID ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef TYPE_3__ AVISplitterImpl ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,TYPE_3__*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static HRESULT FUNC_4(LPVOID VAR_1)
{
    AVISplitterImpl *VAR_2 = VAR_1;
    DWORD VAR_3;
    ULONG VAR_4;

    FUNC_2("(%p)->()\n", VAR_2);

    for (VAR_3 = 0; VAR_3 < VAR_2->Parser.cStreams; ++VAR_3)
    {
        StreamData *VAR_5 = VAR_2->streams + VAR_3;

        if (VAR_5->sample)
        {
            VAR_4 = FUNC_0(VAR_5->sample);
            FUNC_3(VAR_4 == 0);
        }
        VAR_5->sample = ((void*)0);

        FUNC_1(VAR_5->packet_queued);
        FUNC_3(!VAR_5->thread);
    }

    return VAR_0;
}

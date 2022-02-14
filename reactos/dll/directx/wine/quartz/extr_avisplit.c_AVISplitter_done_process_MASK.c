
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {scalar_t__ cStreams; } ;
struct TYPE_8__ {TYPE_2__* streams; TYPE_1__ Parser; } ;
struct TYPE_7__ {int packet_queued; int * sample; int * thread; } ;
typedef TYPE_2__ StreamData ;
typedef TYPE_3__* LPVOID ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef TYPE_3__ AVISplitterImpl ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static HRESULT FUNC_7(LPVOID VAR_2)
{
    AVISplitterImpl *VAR_3 = VAR_2;
    DWORD VAR_4;
    ULONG VAR_5;

    for (VAR_4 = 0; VAR_4 < VAR_3->Parser.cStreams; ++VAR_4)
    {
        StreamData *VAR_6 = VAR_3->streams + VAR_4;

        FUNC_4("Waiting for %u to terminate\n", VAR_4);

        FUNC_3(VAR_6->packet_queued);
        FUNC_6(FUNC_5(VAR_6->thread, 100000) != VAR_1);
        FUNC_0(VAR_6->thread);
        VAR_6->thread = ((void*)0);

        if (VAR_6->sample)
        {
            VAR_5 = FUNC_1(VAR_6->sample);
            FUNC_6(VAR_5 == 0);
        }
        VAR_6->sample = ((void*)0);

        FUNC_2(VAR_6->packet_queued);
    }
    FUNC_4("All threads are now terminated\n");

    return VAR_0;
}

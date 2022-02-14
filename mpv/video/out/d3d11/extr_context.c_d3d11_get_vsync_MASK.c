
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vo_vsync_info {void* last_queue_display_time; void* vsync_duration; scalar_t__ skipped_vsyncs; } ;
struct ra_swapchain {struct priv* priv; } ;
struct priv {unsigned int last_sync_refresh_count; unsigned int last_sync_qpc_time; unsigned int vsync_duration_qpc; int last_submit_qpc; int swapchain; TYPE_1__* opts; } ;
typedef int int64_t ;
typedef unsigned int UINT ;
struct TYPE_6__ {unsigned int QuadPart; } ;
struct TYPE_7__ {unsigned int SyncRefreshCount; unsigned int PresentCount; unsigned int PresentRefreshCount; TYPE_2__ SyncQPCTime; } ;
struct TYPE_5__ {int sync_interval; } ;
typedef scalar_t__ HRESULT ;
typedef TYPE_3__ DXGI_FRAME_STATISTICS ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,unsigned int*) ;
 void* FUNC_3 () ;
 void* FUNC_4 (struct ra_swapchain*,int) ;
 void* FUNC_5 (struct ra_swapchain*) ;

__attribute__((used)) static void FUNC_6(struct ra_swapchain *VAR_1, struct vo_vsync_info *VAR_2)
{
    struct priv *VAR_3 = VAR_1->priv;
    HRESULT VAR_4;


    if (VAR_3->opts->sync_interval != 1)
        return;



    UINT VAR_5;
    VAR_4 = FUNC_2(VAR_3->swapchain, &VAR_5);
    if (FUNC_0(VAR_4))
        return;






    DXGI_FRAME_STATISTICS VAR_6;
    VAR_4 = FUNC_1(VAR_3->swapchain, &VAR_6);
    if (VAR_4 == VAR_0) {
        VAR_3->last_sync_refresh_count = 0;
        VAR_3->last_sync_qpc_time = 0;
    }
    if (FUNC_0(VAR_4))
        return;


    VAR_2->skipped_vsyncs = 0;




    unsigned VAR_7 = 0;
    if (VAR_6.SyncRefreshCount && VAR_3->last_sync_refresh_count)
        VAR_7 = VAR_6.SyncRefreshCount - VAR_3->last_sync_refresh_count;
    VAR_3->last_sync_refresh_count = VAR_6.SyncRefreshCount;


    unsigned VAR_8 = 0;
    if (VAR_6.SyncQPCTime.QuadPart && VAR_3->last_sync_qpc_time)
        VAR_8 = VAR_6.SyncQPCTime.QuadPart - VAR_3->last_sync_qpc_time;
    VAR_3->last_sync_qpc_time = VAR_6.SyncQPCTime.QuadPart;


    if (VAR_7 && VAR_8)
        VAR_3->vsync_duration_qpc = VAR_8 / VAR_7;
    if (VAR_3->vsync_duration_qpc)
        VAR_2->vsync_duration = FUNC_4(VAR_1, VAR_3->vsync_duration_qpc);



    if (VAR_3->vsync_duration_qpc && VAR_6.PresentCount &&
        VAR_6.PresentRefreshCount && VAR_6.SyncRefreshCount &&
        VAR_6.SyncQPCTime.QuadPart)
    {




        unsigned VAR_9 = VAR_6.PresentCount +
            (VAR_6.SyncRefreshCount - VAR_6.PresentRefreshCount);



        int VAR_10 = VAR_5 - VAR_9;
        int64_t VAR_11 = VAR_6.SyncQPCTime.QuadPart +
            VAR_10 * VAR_3->vsync_duration_qpc;



        if (VAR_11 >= VAR_3->last_submit_qpc) {
            VAR_2->last_queue_display_time = FUNC_3() +
                (FUNC_4(VAR_1, VAR_11) - FUNC_5(VAR_1));
        }
    }
}

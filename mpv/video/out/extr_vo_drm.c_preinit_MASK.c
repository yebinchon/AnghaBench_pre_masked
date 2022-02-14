
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct vo {double monitor_par; int log; TYPE_4__* opts; int global; struct priv* priv; } ;
struct TYPE_13__ {int skipped_vsyncs; int last_queue_display_time; scalar_t__ vsync_duration; } ;
struct TYPE_9__ {int * page_flip_handler; int version; } ;
struct priv {int depth; double screen_w; TYPE_5__ vsync_info; scalar_t__ screen_h; TYPE_3__* bufs; TYPE_8__* kms; scalar_t__ swapchain_depth; scalar_t__ buf_count; int imgfmt; int vt_switcher; scalar_t__ vt_switcher_active; TYPE_1__ ev; TYPE_6__* sws; } ;
struct TYPE_15__ {int card_no; int fd; } ;
struct TYPE_14__ {int log; } ;
struct TYPE_12__ {double force_monitor_aspect; int monitor_pixel_aspect; scalar_t__ swapchain_depth; TYPE_2__* drm_opts; } ;
struct TYPE_11__ {double width; scalar_t__ height; } ;
struct TYPE_10__ {scalar_t__ drm_format; int drm_mode_spec; int drm_connector_spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vo*,char*,...) ;
 int FUNC_1 (struct vo*,char*) ;
 int VAR_5 ;
 int FUNC_2 (struct vo*) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct vo*) ;
 TYPE_8__* FUNC_5 (int ,int ,int ,int ,int ,int) ;
 int FUNC_6 (int ) ;
 TYPE_6__* FUNC_7 (struct vo*) ;
 int FUNC_8 (TYPE_6__*,int ) ;
 int FUNC_9 (int ,char*,int) ;
 int VAR_8 ;
 int FUNC_10 (struct vo*) ;
 int FUNC_11 (int *,int ,struct vo*) ;
 scalar_t__ FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ,struct vo*) ;

__attribute__((used)) static int FUNC_14(struct vo *VAR_9)
{
    struct priv *VAR_10 = VAR_9->priv;
    VAR_10->sws = FUNC_7(VAR_9);
    VAR_10->sws->log = VAR_9->log;
    FUNC_8(VAR_10->sws, VAR_9->global);
    VAR_10->ev.version = VAR_1;
    VAR_10->ev.page_flip_handler = &VAR_6;

    VAR_10->vt_switcher_active = FUNC_12(&VAR_10->vt_switcher, VAR_9->log);
    if (VAR_10->vt_switcher_active) {
        FUNC_11(&VAR_10->vt_switcher, VAR_5, VAR_9);
        FUNC_13(&VAR_10->vt_switcher, VAR_8, VAR_9);
    } else {
        FUNC_1(VAR_9, "Failed to set up VT switcher. Terminal switching will be unavailable.\n");
    }

    VAR_10->kms = FUNC_5(VAR_9->log,
                        VAR_9->opts->drm_opts->drm_connector_spec,
                        VAR_9->opts->drm_opts->drm_mode_spec,
                        0, 0, 0);
    if (!VAR_10->kms) {
        FUNC_0(VAR_9, "Failed to create KMS.\n");
        goto err;
    }

    if (VAR_9->opts->drm_opts->drm_format == VAR_2) {
        VAR_10->depth = 30;
        VAR_10->imgfmt = VAR_3;
    } else {
        VAR_10->depth = 24;
        VAR_10->imgfmt = VAR_4;
    }

    VAR_10->swapchain_depth = VAR_9->opts->swapchain_depth;
    VAR_10->buf_count = VAR_10->swapchain_depth + 1;
    if (!FUNC_4(VAR_9)) {
        FUNC_0(VAR_9, "Failed to set up buffers.\n");
        goto err;
    }

    uint64_t VAR_11;
    if (FUNC_3(VAR_10->kms->fd, VAR_0, &VAR_11) < 0) {
        FUNC_0(VAR_9, "Card \"%d\" does not support dumb buffers.\n",
               VAR_10->kms->card_no);
        goto err;
    }

    VAR_10->screen_w = VAR_10->bufs[0].width;
    VAR_10->screen_h = VAR_10->bufs[0].height;

    if (!FUNC_2(VAR_9)) {
        FUNC_0(VAR_9, "Cannot set CRTC: %s\n", FUNC_6(VAR_7));
        goto err;
    }

    if (VAR_9->opts->force_monitor_aspect != 0.0) {
        VAR_9->monitor_par = VAR_10->screen_w / (double) VAR_10->screen_h /
                          VAR_9->opts->force_monitor_aspect;
    } else {
        VAR_9->monitor_par = 1 / VAR_9->opts->monitor_pixel_aspect;
    }
    FUNC_9(VAR_9->log, "Monitor pixel aspect: %g\n", VAR_9->monitor_par);

    VAR_10->vsync_info.vsync_duration = 0;
    VAR_10->vsync_info.skipped_vsyncs = -1;
    VAR_10->vsync_info.last_queue_display_time = -1;

    return 0;

err:
    FUNC_10(VAR_9);
    return -1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_hwdec_driver {char* name; } ;
struct mp_hwdec_devices {int dummy; } ;
struct TYPE_2__ {char* hwdec_interop; } ;
struct gl_video {int hwdec_interop_loading_done; TYPE_1__ opts; } ;


 int FUNC_0 (struct gl_video*,struct mp_hwdec_devices*) ;
 int FUNC_1 (struct gl_video*,struct mp_hwdec_devices*,struct ra_hwdec_driver const*,int) ;
 struct ra_hwdec_driver** VAR_0 ;
 scalar_t__ FUNC_2 (char*,char*) ;

void FUNC_3(struct gl_video *VAR_1, struct mp_hwdec_devices *VAR_2,
                          bool VAR_3)
{
    char *VAR_4 = VAR_1->opts.hwdec_interop;
    if (!VAR_4 || !VAR_4[0] || FUNC_2(VAR_4, "auto") == 0) {
        if (!VAR_3)
            return;
        VAR_4 = "all";
    }
    if (FUNC_2(VAR_4, "no") == 0) {

    } else if (FUNC_2(VAR_4, "all") == 0) {
        FUNC_0(VAR_1, VAR_2);
    } else {
        for (int VAR_5 = 0; VAR_0[VAR_5]; VAR_5++) {
            const struct ra_hwdec_driver *VAR_6 = VAR_0[VAR_5];
            if (FUNC_2(VAR_4, VAR_6->name) == 0) {
                FUNC_1(VAR_1, VAR_2, VAR_6, 0);
                break;
            }
        }
    }
    VAR_1->hwdec_interop_loading_done = 1;
}

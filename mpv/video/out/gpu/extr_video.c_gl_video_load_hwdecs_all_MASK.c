
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_hwdec_devices {int dummy; } ;
struct gl_video {int hwdec_interop_loading_done; } ;


 int FUNC_0 (struct gl_video*,struct mp_hwdec_devices*,scalar_t__,int) ;
 scalar_t__* VAR_0 ;

void FUNC_1(struct gl_video *VAR_1, struct mp_hwdec_devices *VAR_2)
{
    if (!VAR_1->hwdec_interop_loading_done) {
        for (int VAR_3 = 0; VAR_0[VAR_3]; VAR_3++)
            FUNC_0(VAR_1, VAR_2, VAR_0[VAR_3], 1);
        VAR_1->hwdec_interop_loading_done = 1;
    }
}

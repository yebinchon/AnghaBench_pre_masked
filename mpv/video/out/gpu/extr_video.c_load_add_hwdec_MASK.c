
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_hwdec_driver {int dummy; } ;
struct ra_hwdec {int dummy; } ;
struct mp_hwdec_devices {int dummy; } ;
struct gl_video {int num_hwdecs; int hwdecs; int global; int log; int ra; } ;


 int FUNC_0 (struct gl_video*,int ,int ,struct ra_hwdec*) ;
 struct ra_hwdec* FUNC_1 (int ,int ,int ,struct mp_hwdec_devices*,struct ra_hwdec_driver const*,int) ;

__attribute__((used)) static void FUNC_2(struct gl_video *VAR_0, struct mp_hwdec_devices *VAR_1,
                           const struct ra_hwdec_driver *VAR_2, bool VAR_3)
{
    struct ra_hwdec *VAR_4 =
        FUNC_1(VAR_0->ra, VAR_0->log, VAR_0->global, VAR_1, VAR_2, VAR_3);
    if (VAR_4)
        FUNC_0(VAR_0, VAR_0->hwdecs, VAR_0->num_hwdecs, VAR_4);
}

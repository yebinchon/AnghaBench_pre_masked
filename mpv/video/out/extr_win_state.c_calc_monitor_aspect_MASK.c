
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_vo_opts {double monitor_pixel_aspect; int force_monitor_aspect; } ;



__attribute__((used)) static void FUNC_0(struct mp_vo_opts *VAR_0, int VAR_1, int VAR_2,
                                double *VAR_3, int *VAR_4, int *VAR_5)
{
    *VAR_3 = 1.0 / VAR_0->monitor_pixel_aspect;

    if (VAR_1 > 0 && VAR_2 > 0 && VAR_0->force_monitor_aspect)
        *VAR_3 = 1.0 / (VAR_0->force_monitor_aspect * VAR_2 / VAR_1);

    if (*VAR_3 < 1) {
        *VAR_5 /= *VAR_3;
    } else {
        *VAR_4 *= *VAR_3;
    }
}

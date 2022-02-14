
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int hdisplay; unsigned int vdisplay; } ;
typedef TYPE_1__ drmModeModeInfo ;


 scalar_t__ FUNC_0 (double) ;
 double FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (double const) ;

__attribute__((used)) static bool FUNC_3(const drmModeModeInfo *VAR_0,
                       unsigned int VAR_1,
                       unsigned int VAR_2,
                       double VAR_3)
{
    if (FUNC_0(VAR_3)) {
        return
            (VAR_0->hdisplay == VAR_1) &&
            (VAR_0->vdisplay == VAR_2);
    } else {
        const double VAR_4 = FUNC_1(VAR_0);
        return
            (VAR_0->hdisplay == VAR_1) &&
            (VAR_0->vdisplay == VAR_2) &&
            ((int)FUNC_2(VAR_3*100) == (int)FUNC_2(VAR_4*100));
    }
}

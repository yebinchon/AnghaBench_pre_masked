
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_osd_res {double w; double h; int display_par; } ;
typedef int js_State ;
struct TYPE_4__ {TYPE_1__* mpctx; } ;
struct TYPE_3__ {int osd; } ;


 double FUNC_0 (double,int) ;
 TYPE_2__* FUNC_1 (int *) ;
 struct mp_osd_res FUNC_2 (int ) ;
 int FUNC_3 (int *,char const* const*,double const*) ;

__attribute__((used)) static void FUNC_4(js_State *VAR_0)
{
    struct mp_osd_res VAR_1 = FUNC_2(FUNC_1(VAR_0)->mpctx->osd);
    double VAR_2 = 1.0 * VAR_1.w / FUNC_0(VAR_1.h, 1) / (VAR_1.display_par ? VAR_1.display_par : 1);
    const char * const VAR_3[] = {"width", "height", "aspect", ((void*)0)};
    const double VAR_4[] = {VAR_1.w, VAR_1.h, VAR_2};
    FUNC_3(VAR_0, VAR_3, VAR_4);
}

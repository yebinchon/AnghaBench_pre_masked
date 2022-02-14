
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_osd_res {double const ml; double const mt; double const mr; double const mb; } ;
typedef int js_State ;
struct TYPE_4__ {TYPE_1__* mpctx; } ;
struct TYPE_3__ {int osd; } ;


 TYPE_2__* FUNC_0 (int *) ;
 struct mp_osd_res FUNC_1 (int ) ;
 int FUNC_2 (int *,char const* const*,double const*) ;

__attribute__((used)) static void FUNC_3(js_State *VAR_0)
{
    struct mp_osd_res VAR_1 = FUNC_1(FUNC_0(VAR_0)->mpctx->osd);
    const char * const VAR_2[] = {"left", "top", "right", "bottom", ((void*)0)};
    const double VAR_3[] = {VAR_1.ml, VAR_1.mt, VAR_1.mr, VAR_1.mb};
    FUNC_2(VAR_0, VAR_2, VAR_3);
}

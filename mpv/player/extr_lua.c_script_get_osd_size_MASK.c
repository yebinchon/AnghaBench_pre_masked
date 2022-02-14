
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_osd_res {double w; double h; int display_par; } ;
struct MPContext {int osd; } ;
typedef int lua_State ;


 double FUNC_0 (double,int) ;
 struct MPContext* FUNC_1 (int *) ;
 int FUNC_2 (int *,double) ;
 struct mp_osd_res FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(lua_State *VAR_0)
{
    struct MPContext *VAR_1 = FUNC_1(VAR_0);
    struct mp_osd_res VAR_2 = FUNC_3(VAR_1->osd);
    double VAR_3 = 1.0 * VAR_2.w / FUNC_0(VAR_2.h, 1) /
                    (VAR_2.display_par ? VAR_2.display_par : 1);
    FUNC_2(VAR_0, VAR_2.w);
    FUNC_2(VAR_0, VAR_2.h);
    FUNC_2(VAR_0, VAR_3);
    return 3;
}

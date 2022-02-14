
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_osd_res {int mb; int mr; int mt; int ml; } ;
struct MPContext {int osd; } ;
typedef int lua_State ;


 struct MPContext* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct mp_osd_res FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(lua_State *VAR_0)
{
    struct MPContext *VAR_1 = FUNC_0(VAR_0);
    struct mp_osd_res VAR_2 = FUNC_2(VAR_1->osd);
    FUNC_1(VAR_0, VAR_2.ml);
    FUNC_1(VAR_0, VAR_2.mt);
    FUNC_1(VAR_0, VAR_2.mr);
    FUNC_1(VAR_0, VAR_2.mb);
    return 4;
}

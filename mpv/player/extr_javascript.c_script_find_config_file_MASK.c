
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_4__ {TYPE_1__* mpctx; } ;
struct TYPE_3__ {int global; } ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,int) ;
 char* FUNC_3 (void*,int ,char const*) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static void FUNC_5(js_State *VAR_0, void *VAR_1)
{
    const char *VAR_2 = FUNC_2(VAR_0, 1);
    char *VAR_3 = FUNC_3(VAR_1, FUNC_0(VAR_0)->mpctx->global, VAR_2);
    if (VAR_3) {
        FUNC_1(VAR_0, VAR_3);
    } else {
        FUNC_4(VAR_0, "not found");
    }
}

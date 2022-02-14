
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * v; int owned; } ;
typedef TYPE_1__ variant_val_t ;
typedef int exec_ctx_t ;
typedef int VARIANT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(exec_ctx_t *VAR_4, variant_val_t *VAR_5)
{
    VARIANT *VAR_6;

    VAR_6 = FUNC_2(VAR_4);
    if(FUNC_1(VAR_6) == (VAR_2|VAR_3)) {
        VAR_5->owned = VAR_0;
        VAR_5->v = FUNC_0(VAR_6);
    }else {
        VAR_5->owned = VAR_1;
        VAR_5->v = VAR_6;
    }
}

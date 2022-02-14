
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int disp; } ;
struct TYPE_6__ {TYPE_1__ idref; int val; } ;
struct TYPE_7__ {int type; TYPE_2__ u; } ;
typedef TYPE_3__ exprval_t ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(exprval_t *VAR_0)
{
    switch(VAR_0->type) {
    case 129:
        FUNC_1(VAR_0->u.val);
        return;
    case 131:
        if(VAR_0->u.idref.disp)
            FUNC_0(VAR_0->u.idref.disp);
        return;
    case 128:
    case 130:
        return;
    }
}

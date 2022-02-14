
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int jsstr_t ;
struct TYPE_4__ {int right; int left; } ;
typedef TYPE_1__ jsstr_rope_t ;
struct TYPE_5__ {int * buf; } ;





 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(jsstr_t *VAR_0)
{
    switch(FUNC_4(VAR_0)) {
    case 130:
        FUNC_0(FUNC_1(VAR_0)->buf);
        break;
    case 128: {
        jsstr_rope_t *VAR_1 = FUNC_2(VAR_0);
        FUNC_3(VAR_1->left);
        FUNC_3(VAR_1->right);
        break;
    }
    case 129:
        break;
    }

    FUNC_0(VAR_0);
}

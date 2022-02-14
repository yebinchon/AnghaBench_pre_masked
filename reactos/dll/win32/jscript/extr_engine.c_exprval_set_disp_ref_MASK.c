
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; int * disp; } ;
struct TYPE_6__ {TYPE_1__ idref; } ;
struct TYPE_7__ {TYPE_2__ u; int type; } ;
typedef TYPE_3__ exprval_t ;
typedef int IDispatch ;
typedef int DISPID ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(exprval_t *VAR_1, IDispatch *VAR_2, DISPID VAR_3)
{
    VAR_1->type = VAR_0;




    FUNC_0(VAR_1->u.idref.disp = VAR_2);

    VAR_1->u.idref.id = VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsval_t ;
struct TYPE_6__ {int disp; } ;
struct TYPE_7__ {TYPE_1__ idref; int val; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__ u; } ;
typedef TYPE_3__ exprval_t ;
typedef int HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_3__*,int *) ;

__attribute__((used)) static HRESULT FUNC_2(script_ctx_t *VAR_3, exprval_t *VAR_4, jsval_t *VAR_5)
{
    HRESULT VAR_6;

    if(VAR_4->type == VAR_1) {
        *VAR_5 = VAR_4->u.val;
        return VAR_2;
    }

    VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);

    if(VAR_4->type == VAR_0)
        FUNC_0(VAR_4->u.idref.disp);
    return VAR_6;
}

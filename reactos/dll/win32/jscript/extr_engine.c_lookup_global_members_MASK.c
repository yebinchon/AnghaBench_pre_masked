
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* named_items; } ;
typedef TYPE_1__ script_ctx_t ;
struct TYPE_6__ {int flags; int disp; struct TYPE_6__* next; } ;
typedef TYPE_2__ named_item_t ;
typedef int exprval_t ;
typedef int HRESULT ;
typedef int DISPID ;
typedef int BSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int ,int *) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static BOOL FUNC_3(script_ctx_t *VAR_3, BSTR VAR_4, exprval_t *VAR_5)
{
    named_item_t *VAR_6;
    DISPID VAR_7;
    HRESULT VAR_8;

    for(VAR_6 = VAR_3->named_items; VAR_6; VAR_6 = VAR_6->next) {
        if(VAR_6->flags & VAR_1) {
            VAR_8 = FUNC_1(VAR_3, VAR_6->disp, VAR_4, VAR_4, 0, &VAR_7);
            if(FUNC_0(VAR_8)) {
                if(VAR_5)
                    FUNC_2(VAR_5, VAR_6->disp, VAR_7);
                return VAR_2;
            }
        }
    }

    return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int global; } ;
typedef TYPE_1__ script_ctx_t ;
struct TYPE_12__ {scalar_t__ type; } ;
typedef TYPE_2__ exprval_t ;
typedef int HRESULT ;
typedef int DISPID ;
typedef int BSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 unsigned int VAR_3 ;
 int FUNC_5 (TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_6 (int ,int ,unsigned int,int *) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static HRESULT FUNC_9(script_ctx_t *VAR_4, BSTR VAR_5, unsigned VAR_6)
{
    exprval_t VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_5(VAR_4, VAR_5, &VAR_7);
    if(FUNC_0(VAR_8))
        return VAR_8;

    if(VAR_7.type == VAR_0 && (VAR_6 & VAR_3)) {
        DISPID VAR_9;

        VAR_8 = FUNC_6(VAR_4->global, VAR_5, VAR_3, &VAR_9);
        if(FUNC_0(VAR_8))
            return VAR_8;

        FUNC_3(&VAR_7, FUNC_8(VAR_4->global), VAR_9);
    }

    if(VAR_7.type == VAR_1 || VAR_7.type == VAR_0) {
        FUNC_1("invalid ref\n");
        FUNC_2(&VAR_7);
        FUNC_4(&VAR_7, VAR_2);
    }

    return FUNC_7(VAR_4, &VAR_7);
}

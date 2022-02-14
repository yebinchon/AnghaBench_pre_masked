
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int jsval_t ;
struct TYPE_9__ {int ctx; TYPE_2__* builtin_info; } ;
typedef TYPE_3__ jsdisp_t ;
typedef int WORD ;
struct TYPE_7__ {int (* invoke ) (int ,int *,int,unsigned int,int *,int *) ;} ;
struct TYPE_8__ {TYPE_1__ value_prop; } ;
typedef int IDispatch ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int *,int,unsigned int,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int *,int,unsigned int,int *,int *) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int *) ;

HRESULT FUNC_8(jsdisp_t *VAR_5, IDispatch *VAR_6, WORD VAR_7, unsigned VAR_8, jsval_t *VAR_9, jsval_t *VAR_10)
{
    HRESULT VAR_11;

    FUNC_2(!(VAR_7 & ~(VAR_2|VAR_0|VAR_1)));

    if(FUNC_3(VAR_5, VAR_3)) {
        VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
    }else {
        vdisp_t VAR_12;

        if(!VAR_5->builtin_info->value_prop.invoke) {
            FUNC_1("Not a function\n");
            return FUNC_6(VAR_5->ctx, VAR_4, ((void*)0));
        }

        FUNC_4(&VAR_12, VAR_6);
        VAR_7 &= ~VAR_1;
        VAR_11 = VAR_5->builtin_info->value_prop.invoke(VAR_5->ctx, &VAR_12, VAR_7, VAR_8, VAR_9, VAR_10);
        FUNC_7(&VAR_12);
    }
    return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ type; } ;
typedef TYPE_4__ ref_t ;
struct TYPE_16__ {TYPE_1__* func; TYPE_3__* instr; } ;
typedef TYPE_5__ exec_ctx_t ;
typedef int VARIANT ;
struct TYPE_13__ {int bstr; } ;
struct TYPE_14__ {TYPE_2__ arg1; } ;
struct TYPE_12__ {scalar_t__ type; } ;
typedef int HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_5__*,int ,int ,int **) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_5__*,int ,int ,TYPE_4__*) ;
 int FUNC_7 (TYPE_5__*,int ) ;
 int * FUNC_8 (TYPE_5__*) ;

__attribute__((used)) static HRESULT FUNC_9(exec_ctx_t *VAR_6)
{
    BSTR VAR_7 = VAR_6->instr->arg1.bstr;
    VARIANT *VAR_8;
    ref_t VAR_9;
    HRESULT VAR_10;

    FUNC_2("%s\n", FUNC_5(VAR_7));

    FUNC_4(VAR_6->func->type == VAR_1);

    VAR_10 = FUNC_6(VAR_6, VAR_7, VAR_5, &VAR_9);
    if(FUNC_0(VAR_10))
        return VAR_10;

    if(VAR_9.type != VAR_2) {
        FUNC_1("%s already defined\n", FUNC_5(VAR_7));
        return VAR_0;
    }

    VAR_10 = FUNC_7(VAR_6, 0);
    if(FUNC_0(VAR_10))
        return VAR_10;

    VAR_10 = FUNC_3(VAR_6, VAR_7, VAR_4, &VAR_8);
    if(FUNC_0(VAR_10))
        return VAR_10;

    *VAR_8 = *FUNC_8(VAR_6);
    return VAR_3;
}

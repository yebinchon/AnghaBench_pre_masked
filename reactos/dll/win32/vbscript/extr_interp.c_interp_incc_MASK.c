
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int * v; } ;
struct TYPE_13__ {scalar_t__ type; TYPE_1__ u; } ;
typedef TYPE_4__ ref_t ;
struct TYPE_14__ {TYPE_3__* instr; } ;
typedef TYPE_5__ exec_ctx_t ;
typedef int VARIANT ;
struct TYPE_11__ {int bstr; } ;
struct TYPE_12__ {TYPE_2__ arg1; } ;
typedef int HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*,int const,int ,TYPE_4__*) ;
 int FUNC_6 (TYPE_5__*,int ) ;

__attribute__((used)) static HRESULT FUNC_7(exec_ctx_t *VAR_4)
{
    const BSTR VAR_5 = VAR_4->instr->arg1.bstr;
    VARIANT VAR_6;
    ref_t VAR_7;
    HRESULT VAR_8;

    FUNC_2("\n");

    VAR_8 = FUNC_5(VAR_4, VAR_5, VAR_3, &VAR_7);
    if(FUNC_0(VAR_8))
        return VAR_8;

    if(VAR_7.type != VAR_1) {
        FUNC_1("ref.type is not REF_VAR\n");
        return VAR_0;
    }

    VAR_8 = FUNC_3(FUNC_6(VAR_4, 0), VAR_7.u.v, &VAR_6);
    if(FUNC_0(VAR_8))
        return VAR_8;

    FUNC_4(VAR_7.u.v);
    *VAR_7.u.v = VAR_6;
    return VAR_2;
}

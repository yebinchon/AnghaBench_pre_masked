
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int acc; } ;
typedef TYPE_2__ script_ctx_t ;
struct TYPE_14__ {int hres; } ;
struct TYPE_16__ {TYPE_1__ u; } ;
typedef TYPE_3__ exprval_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned int const,int const) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int,unsigned int const,int ,int *) ;
 int FUNC_3 (TYPE_2__*,int) ;
 unsigned int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,unsigned int const) ;
 int FUNC_6 (TYPE_2__*,unsigned int const,TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_8(script_ctx_t *VAR_2)
{
    const unsigned VAR_3 = FUNC_4(VAR_2, 0);
    const int VAR_4 = FUNC_3(VAR_2, 1);
    exprval_t VAR_5;

    FUNC_0("%d %d\n", VAR_3, VAR_4);

    if(!FUNC_6(VAR_2, VAR_3, &VAR_5))
        return FUNC_7(VAR_2, VAR_5.u.hres, ((void*)0));

    FUNC_1(VAR_2);
    return FUNC_2(VAR_2, &VAR_5, VAR_1 | VAR_0,
            VAR_3, FUNC_5(VAR_2, VAR_3), VAR_4 ? &VAR_2->acc : ((void*)0));
}

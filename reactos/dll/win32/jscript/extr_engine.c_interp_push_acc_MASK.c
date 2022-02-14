
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int acc; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static HRESULT FUNC_4(script_ctx_t *VAR_0)
{
    HRESULT VAR_1;

    FUNC_1("\n");

    VAR_1 = FUNC_3(VAR_0, VAR_0->acc);
    if(FUNC_0(VAR_1))
        VAR_0->acc = FUNC_2();
    return VAR_1;
}

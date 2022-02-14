
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int func_end_label; } ;
typedef TYPE_1__ compile_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static HRESULT FUNC_2(compile_ctx_t *VAR_1)
{
    if(!VAR_1->func_end_label) {
        FUNC_0("Exit Function outside Function?\n");
        return VAR_0;
    }

    return FUNC_1(VAR_1, VAR_1->func_end_label);
}

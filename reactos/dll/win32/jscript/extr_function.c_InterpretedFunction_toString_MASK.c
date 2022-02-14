
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int jsstr_t ;
struct TYPE_4__ {TYPE_1__* func_code; } ;
struct TYPE_3__ {int source_len; int source; } ;
typedef TYPE_2__ InterpretedFunction ;
typedef int HRESULT ;
typedef int FunctionInstance ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ) ;

__attribute__((used)) static HRESULT FUNC_1(FunctionInstance *VAR_2, jsstr_t **VAR_3)
{
    InterpretedFunction *VAR_4 = (InterpretedFunction*)VAR_2;

    *VAR_3 = FUNC_0(VAR_4->func_code->source, VAR_4->func_code->source_len);
    return *VAR_3 ? VAR_1 : VAR_0;
}

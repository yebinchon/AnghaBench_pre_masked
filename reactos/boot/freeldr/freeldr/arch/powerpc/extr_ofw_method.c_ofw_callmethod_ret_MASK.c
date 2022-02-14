
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* call_method; int nargs; int nrets; char const* method_name; int handle; int* args_rets; int member_0; } ;
typedef TYPE_1__ ofw_method_call ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(const char *VAR_0, int VAR_1, int VAR_2, int *VAR_3, int VAR_4)
{
    ofw_method_call VAR_5 = { 0 };
    VAR_5.call_method = "call-method";
    VAR_5.nargs = VAR_2 + 2;
    VAR_5.nrets = VAR_4+1;
    VAR_5.method_name = VAR_0;
    VAR_5.handle = VAR_1;
    FUNC_0(VAR_5.args_rets, VAR_3, sizeof(int)*VAR_2);
    FUNC_1(&VAR_5);
    return VAR_5.args_rets[VAR_2+VAR_4];
}

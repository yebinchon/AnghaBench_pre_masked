
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int start; } ;
typedef TYPE_1__ bstr ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static void FUNC_2(char **VAR_0, int *VAR_1, bstr VAR_2)
{
    FUNC_0(((void*)0), *VAR_0, *VAR_1 + VAR_2.len);
    if (VAR_2.len)
        FUNC_1(*VAR_0 + *VAR_1, VAR_2.start, VAR_2.len);
    *VAR_1 = *VAR_1 + VAR_2.len;
}

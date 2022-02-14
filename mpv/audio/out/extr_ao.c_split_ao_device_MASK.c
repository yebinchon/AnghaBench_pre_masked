
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; } ;
typedef TYPE_1__ bstr ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,TYPE_1__*,TYPE_1__*) ;
 char* FUNC_2 (void*,TYPE_1__) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, char *VAR_1, char **VAR_2, char **VAR_3)
{
    *VAR_2 = ((void*)0);
    *VAR_3 = ((void*)0);
    if (!VAR_1)
        return;
    if (!VAR_1[0] || FUNC_3(VAR_1, "auto") == 0)
        return;

    bstr VAR_4, VAR_5;
    FUNC_1(FUNC_0(VAR_1), "/", &VAR_5, &VAR_4);
    if (VAR_4.len > 0)
        *VAR_3 = FUNC_2(VAR_0, VAR_4);
    *VAR_2 = FUNC_2(VAR_0, VAR_5);
}

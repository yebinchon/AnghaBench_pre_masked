
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {int dummy; } ;


 struct bstr FUNC_0 (struct bstr,int) ;
 struct bstr FUNC_1 (struct bstr) ;
 struct bstr FUNC_2 (struct bstr,int ,int) ;
 int FUNC_3 (struct bstr,char) ;
 char* FUNC_4 (void*,struct bstr) ;
 int FUNC_5 (struct bstr*,char) ;

__attribute__((used)) static char *FUNC_6(void *VAR_0, struct bstr *VAR_1)
{
    *VAR_1 = FUNC_1(*VAR_1);
    if (!FUNC_5(VAR_1, '"'))
        return ((void*)0);
    int VAR_2 = FUNC_3(*VAR_1, '"');
    if (VAR_2 < 0)
        return ((void*)0);
    struct bstr VAR_3 = FUNC_2(*VAR_1, 0, VAR_2);
    *VAR_1 = FUNC_0(*VAR_1, VAR_2 + 1);
    return FUNC_4(VAR_0, VAR_3);
}

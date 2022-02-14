
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {int len; } ;


 struct bstr FUNC_0 (struct bstr,int) ;
 struct bstr FUNC_1 (struct bstr,int ,int) ;
 int FUNC_2 (struct bstr,char const) ;

struct bstr FUNC_3(struct bstr VAR_0, struct bstr *VAR_1, const char VAR_2)
{
    int VAR_3 = FUNC_2(VAR_0, VAR_2);
    if (VAR_3 < 0)
        VAR_3 = VAR_0.len;
    if (VAR_1)
        *VAR_1 = FUNC_0(VAR_0, VAR_3 + 1);
    return FUNC_1(VAR_0, 0, VAR_3 + 1);
}

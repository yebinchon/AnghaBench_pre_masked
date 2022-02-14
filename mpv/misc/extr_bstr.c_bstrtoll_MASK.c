
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {int start; int len; } ;


 int FUNC_0 (int ,int) ;
 struct bstr FUNC_1 (struct bstr,int) ;
 struct bstr FUNC_2 (struct bstr) ;
 int FUNC_3 (char*,int ,int) ;
 long long FUNC_4 (char*,char**,int) ;

long long FUNC_5(struct bstr VAR_0, struct bstr *VAR_1, int VAR_2)
{
    VAR_0 = FUNC_2(VAR_0);
    char VAR_3[51];
    int VAR_4 = FUNC_0(VAR_0.len, 50);
    FUNC_3(VAR_3, VAR_0.start, VAR_4);
    VAR_3[VAR_4] = 0;
    char *VAR_5;
    long long VAR_6 = FUNC_4(VAR_3, &VAR_5, VAR_2);
    if (VAR_1)
        *VAR_1 = FUNC_1(VAR_0, VAR_5 - VAR_3);
    return VAR_6;
}

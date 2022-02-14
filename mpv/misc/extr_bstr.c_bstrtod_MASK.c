
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {int start; int len; } ;


 int FUNC_0 (int ,int) ;
 struct bstr FUNC_1 (struct bstr,int) ;
 struct bstr FUNC_2 (struct bstr) ;
 int FUNC_3 (char*,int ,int) ;
 double FUNC_4 (char*,char**) ;

double FUNC_5(struct bstr VAR_0, struct bstr *VAR_1)
{
    VAR_0 = FUNC_2(VAR_0);
    char VAR_2[101];
    int VAR_3 = FUNC_0(VAR_0.len, 100);
    FUNC_3(VAR_2, VAR_0.start, VAR_3);
    VAR_2[VAR_3] = 0;
    char *VAR_4;
    double VAR_5 = FUNC_4(VAR_2, &VAR_4);
    if (VAR_1)
        *VAR_1 = FUNC_1(VAR_0, VAR_4 - VAR_2);
    return VAR_5;
}

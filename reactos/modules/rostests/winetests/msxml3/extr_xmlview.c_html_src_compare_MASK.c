
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int LPCWSTR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,char*,int,int *,int *) ;
 scalar_t__ FUNC_1 (char const) ;

__attribute__((used)) static int FUNC_2(LPCWSTR VAR_1, const char *VAR_2)
{
    char VAR_3[2048], *VAR_4;
    const char *VAR_5;

    FUNC_0(VAR_0, 0, VAR_1, -1, VAR_3, sizeof(VAR_3), ((void*)0), ((void*)0));

    VAR_4 = VAR_3;
    VAR_5 = VAR_2;
    while(1) {
        while(*VAR_4=='\r' || *VAR_4=='\n' || *VAR_4=='\"') VAR_4++;
        while(*VAR_5=='\r' || *VAR_5=='\n') VAR_5++;

        if(!*VAR_4 || !*VAR_5 || FUNC_1(*VAR_4)!=FUNC_1(*VAR_5))
            break;

        VAR_4++;
        VAR_5++;
    }

    return *VAR_4 != *VAR_5;
}

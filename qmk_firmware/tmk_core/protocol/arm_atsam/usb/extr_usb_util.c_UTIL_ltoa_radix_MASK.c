
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int buf ;


 char FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*,int) ;

int FUNC_2(int64_t VAR_0, char *VAR_1, int VAR_2) {
    int64_t VAR_3 = VAR_0;
    char VAR_4[25] = "";
    int VAR_5 = sizeof(VAR_4) - 1;
    int VAR_6 = VAR_5;
    int VAR_7;
    int VAR_8;

    if (VAR_0 < 0)
        VAR_0 = -VAR_0;

    do
    {
        VAR_7 = (VAR_0 % VAR_2);
        VAR_4[--VAR_5] = FUNC_0(VAR_7, VAR_2);
        VAR_0 /= VAR_2;
    } while (VAR_0);

    if (VAR_3 < 0) VAR_4[--VAR_5] = '-';

    VAR_8 = VAR_6 - VAR_5 + 1;
    FUNC_1(VAR_1, &VAR_4[VAR_5], VAR_6 - VAR_5 + 1);

    return (VAR_8 - 1);
}

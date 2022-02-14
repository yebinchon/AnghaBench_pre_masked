
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0, char *VAR_1, int VAR_2, int VAR_3)
{
    char *VAR_4;
    int VAR_5;
    int VAR_6;

    VAR_5 = FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_2, VAR_3));
    if ((VAR_5 != 0) || (VAR_2 == VAR_3)) {
        return VAR_5;
    }
    if (VAR_3 > VAR_2) {
        VAR_4 = VAR_1 + VAR_2;
        VAR_5 = -1;
        VAR_6 = VAR_3 - VAR_2;
    }
    else {
        VAR_4 = VAR_0 + VAR_3;
        VAR_5 = 1;
        VAR_6 = VAR_2 - VAR_3;
    }
    while (VAR_6--) {
        if (*VAR_4 != 0) {
            return VAR_5;
        }
        VAR_4++;
    }
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,char*,double) ;

int FUNC_2(char *VAR_2, double VAR_3, int VAR_4)
{
    char VAR_5[VAR_0];
    char VAR_6[6];
    int VAR_7;
    char *VAR_8;

    FUNC_0(VAR_6, VAR_4);


    if (VAR_1 == '.')
        return FUNC_1(VAR_2, VAR_0, VAR_6, VAR_3);


    VAR_7 = FUNC_1(VAR_5, VAR_0, VAR_6, VAR_3);


    VAR_8 = VAR_5;
    do {
        *VAR_2++ = (*VAR_8 == VAR_1 ? '.' : *VAR_8);
    } while(*VAR_8++);

    return VAR_7;
}

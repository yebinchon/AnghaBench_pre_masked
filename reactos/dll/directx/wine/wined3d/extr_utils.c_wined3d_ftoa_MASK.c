
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float,float) ;
 scalar_t__ FUNC_1 (float) ;
 int FUNC_2 (char*,char*,float) ;

void FUNC_3(float VAR_0, char *VAR_1)
{
    int VAR_2 = 1;

    if (FUNC_0(1.0f, VAR_0) < 0.0f)
        ++VAR_2;




    FUNC_2(VAR_1, "%.8e", VAR_0);
    if (FUNC_1(VAR_0))
        VAR_1[VAR_2] = '.';
}

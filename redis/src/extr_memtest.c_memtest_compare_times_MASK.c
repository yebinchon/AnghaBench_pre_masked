
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned long*,size_t,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;

int FUNC_3(unsigned long *VAR_0, size_t VAR_1, int VAR_2, int VAR_3,
                          int VAR_4)
{
    int VAR_5;
    int VAR_6 = 0;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        if (VAR_4) FUNC_2("Compare",VAR_2);
        VAR_6 += FUNC_0(VAR_0,VAR_1,VAR_4);
        if (VAR_4) FUNC_1();
    }
    return VAR_6;
}

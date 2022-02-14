
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

int FUNC_2(const unsigned char *VAR_3, int VAR_4)
{
    int VAR_5;
    int VAR_6 = 0;
    int VAR_7 = 0;

    if (VAR_4 <= 0)
        VAR_4 = -1;
    if (VAR_3 == ((void*)0))
        return VAR_1;

    while ((*VAR_3) && (VAR_4-- != 0)) {
        VAR_5 = *(VAR_3++);
        if (!FUNC_1(VAR_5))
            VAR_6 = 1;
        if (!FUNC_0(VAR_5))
            VAR_7 = 1;
    }
    if (VAR_7)
        return VAR_2;
    if (VAR_6)
        return VAR_0;
    return VAR_1;
}

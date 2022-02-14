
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,...) ;
 int FUNC_2 (char*) ;

int FUNC_3(char *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;

    VAR_6 = FUNC_2(VAR_4);
    if (VAR_6 < 0)
        return -1;

    VAR_7 = FUNC_1(VAR_6, VAR_1);
    if (VAR_7 < 0)
        goto out;

    if (VAR_5 & VAR_3)
        VAR_7 |= VAR_0;

    if (FUNC_1(VAR_6, VAR_2, VAR_7) < 0)
        goto out;

    return VAR_6;

out:
    FUNC_0(VAR_6);
    return -1;
}

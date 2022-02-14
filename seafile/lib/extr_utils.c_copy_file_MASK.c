
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char const*,int,int) ;

int FUNC_3 (const char *VAR_7, const char *VAR_8, int VAR_9)
{
    int VAR_10, VAR_11, VAR_12;

    if ((VAR_10 = FUNC_2 (VAR_8, VAR_4 | VAR_1, 0)) < 0)
        return VAR_10;

    VAR_11 = FUNC_2 (VAR_7, VAR_5 | VAR_2 | VAR_3 | VAR_1, VAR_9);
    if (VAR_11 < 0 && VAR_6 == VAR_0) {
        FUNC_0 (VAR_10);
        return 0;
    } else if (VAR_11 < 0){
        FUNC_0 (VAR_10);
        return -1;
    }

    VAR_12 = FUNC_1 (VAR_10, VAR_11);
    if (FUNC_0 (VAR_11) != 0)
        return -1;

    return VAR_12;
}

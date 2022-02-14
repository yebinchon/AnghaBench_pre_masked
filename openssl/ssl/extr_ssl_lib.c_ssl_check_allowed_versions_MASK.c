
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_1(int VAR_9, int VAR_10)
{
    int VAR_11 = 0, VAR_12 = 0;


    if (VAR_9 == VAR_1
        || VAR_9 >> 8 == VAR_3)
        VAR_11 = 1;
    if (VAR_10 == VAR_1
        || VAR_10 >> 8 == VAR_3)
        VAR_12 = 1;

    if ((VAR_11 && !VAR_12 && VAR_10 != 0)
        || (VAR_12 && !VAR_11 && VAR_9 != 0)) {

        return 0;
    }

    if (VAR_11 || VAR_12) {

        if (VAR_9 == 0)

            VAR_9 = VAR_2;
        if (VAR_10 == 0)
            VAR_10 = VAR_0;
        if (0
            )
            return 0;
    } else {

        if (VAR_9 == 0)
            VAR_9 = VAR_4;
        if (VAR_10 == 0)
            VAR_10 = VAR_7;
        if (0
            )
            return 0;
    }
    return 1;
}

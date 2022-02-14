
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 unsigned int* VAR_10 ;
 int* VAR_11 ;
 unsigned int VAR_12 ;

int FUNC_3(int VAR_13, unsigned int VAR_14)
{
    int VAR_15;
    if (!(FUNC_2(VAR_13) || FUNC_1(VAR_13))) {
        FUNC_0(VAR_7, VAR_9);
        return 0;
    }

    if ((VAR_14 & ~VAR_12) != 0) {
        FUNC_0(VAR_7, VAR_8);
        return 0;
    }

    VAR_15 = ((VAR_14 & VAR_3) == 0);
    if (VAR_15 || (VAR_14 & VAR_0) != 0) {
        VAR_11[VAR_4] = VAR_13;
        VAR_10[VAR_4] = VAR_14 | VAR_0;
    }
    if (VAR_15 || (VAR_14 & VAR_2) != 0) {
        VAR_11[VAR_6] = VAR_13;
        VAR_10[VAR_6] = VAR_14 | VAR_2;
    }
    if (VAR_15 || (VAR_14 & VAR_1) != 0) {
        VAR_11[VAR_5] = VAR_13;
        VAR_10[VAR_5] = VAR_14 | VAR_1;
    }
    return 1;
}

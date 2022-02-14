
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPJ_UINT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(OPJ_UINT32 VAR_9)
{
    int VAR_10, VAR_11, VAR_12;
    VAR_12 = 0;

    VAR_10 = FUNC_0(((VAR_9 & (VAR_5 | VAR_1)) ==
                      VAR_5) + ((VAR_9 & (VAR_8 | VAR_4)) == VAR_8),
                     1) - FUNC_0(((VAR_9 & (VAR_5 | VAR_1)) ==
                                       (VAR_5 | VAR_1)) +
                                      ((VAR_9 & (VAR_8 | VAR_4)) ==
                                       (VAR_8 | VAR_4)), 1);

    VAR_11 = FUNC_0(((VAR_9 & (VAR_6 | VAR_2)) ==
                      VAR_6) + ((VAR_9 & (VAR_7 | VAR_3)) == VAR_7),
                     1) - FUNC_0(((VAR_9 & (VAR_6 | VAR_2)) ==
                                       (VAR_6 | VAR_2)) +
                                      ((VAR_9 & (VAR_7 | VAR_3)) ==
                                       (VAR_7 | VAR_3)), 1);

    if (VAR_10 < 0) {
        VAR_10 = -VAR_10;
        VAR_11 = -VAR_11;
    }
    if (!VAR_10) {
        if (VAR_11 == -1) {
            VAR_12 = 1;
        } else if (!VAR_11) {
            VAR_12 = 0;
        } else {
            VAR_12 = 1;
        }
    } else if (VAR_10 == 1) {
        if (VAR_11 == -1) {
            VAR_12 = 2;
        } else if (!VAR_11) {
            VAR_12 = 3;
        } else {
            VAR_12 = 4;
        }
    }

    return (VAR_0 + VAR_12);
}

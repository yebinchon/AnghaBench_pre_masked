
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 double VAR_8 ;
 double FUNC_1 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

void FUNC_2(void) {
    uint16_t VAR_12;

    if (VAR_11 == VAR_6)
        VAR_12 = FUNC_1(VAR_1);
    else if (VAR_11 == VAR_7)
        VAR_12 = FUNC_1(VAR_0);
    else
        return;

    VAR_8 = VAR_8 * 0.9 + VAR_12 * 0.1;


    if (VAR_10 == VAR_4) {

        if (VAR_8 > VAR_2) VAR_10 = VAR_3;

        return;
    }

    if (VAR_9) {
        if (VAR_10 == VAR_3) FUNC_0(VAR_5);

        return;
    }


    if (VAR_10 == VAR_3 && VAR_8 < VAR_2)
        FUNC_0(VAR_5);
    else if (VAR_10 == VAR_5 && VAR_8 > VAR_2)
        FUNC_0(VAR_3);
}

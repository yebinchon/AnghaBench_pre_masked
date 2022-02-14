
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usec_t ;
typedef int clockid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

usec_t FUNC_4(usec_t VAR_1, clockid_t VAR_2, clockid_t VAR_3) {
        usec_t VAR_4, VAR_5;

        if (VAR_1 == VAR_0)
                return VAR_0;
        if (FUNC_0(VAR_2) == FUNC_0(VAR_3))
                return VAR_1;

        VAR_4 = FUNC_1(VAR_2);
        VAR_5 = FUNC_1(VAR_3);

        if (VAR_1 > VAR_4)

                return FUNC_2(VAR_5, FUNC_3(VAR_1, VAR_4));
        else

                return FUNC_3(VAR_5, FUNC_3(VAR_4, VAR_1));
}

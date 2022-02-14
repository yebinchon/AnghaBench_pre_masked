
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (int,int ,int ) ;
 scalar_t__ FUNC_3 (int,int const*,size_t) ;

int FUNC_4(int VAR_8, const void *VAR_9, size_t VAR_10, bool VAR_11) {
        const uint8_t *VAR_12 = VAR_9;

        FUNC_1(VAR_8 >= 0);
        FUNC_1(VAR_9);

        if (FUNC_0(VAR_10 > (size_t) VAR_5))
                return -VAR_2;

        do {
                ssize_t VAR_13;

                VAR_13 = FUNC_3(VAR_8, VAR_12, VAR_10);
                if (VAR_13 < 0) {
                        if (VAR_7 == VAR_1)
                                continue;

                        if (VAR_7 == VAR_0 && VAR_11) {




                                (void) FUNC_2(VAR_8, VAR_4, VAR_6);
                                continue;
                        }

                        return -VAR_7;
                }

                if (FUNC_0(VAR_10 > 0 && VAR_13 == 0))
                        return -VAR_3;

                FUNC_1((size_t) VAR_13 <= VAR_10);

                VAR_12 += VAR_13;
                VAR_10 -= VAR_13;
        } while (VAR_10 > 0);

        return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,int ,int ) ;
 scalar_t__ FUNC_2 (int,int *,size_t) ;

ssize_t FUNC_3(int VAR_7, void *VAR_8, size_t VAR_9, bool VAR_10) {
        uint8_t *VAR_11 = VAR_8;
        ssize_t VAR_12 = 0;

        FUNC_0(VAR_7 >= 0);
        FUNC_0(VAR_8);




        if (VAR_9 > (size_t) VAR_4)
                return -VAR_2;

        do {
                ssize_t VAR_13;

                VAR_13 = FUNC_2(VAR_7, VAR_11, VAR_9);
                if (VAR_13 < 0) {
                        if (VAR_6 == VAR_1)
                                continue;

                        if (VAR_6 == VAR_0 && VAR_10) {





                                (void) FUNC_1(VAR_7, VAR_3, VAR_5);
                                continue;
                        }

                        return VAR_12 > 0 ? VAR_12 : -VAR_6;
                }

                if (VAR_13 == 0)
                        return VAR_12;

                FUNC_0((size_t) VAR_13 <= VAR_9);

                VAR_11 += VAR_13;
                VAR_9 -= VAR_13;
                VAR_12 += VAR_13;
        } while (VAR_9 > 0);

        return VAR_12;
}

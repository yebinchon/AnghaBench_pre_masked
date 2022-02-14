
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void uint8_t ;
typedef int ssize_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,size_t,int ) ;
 size_t FUNC_1 (void const*,int) ;
 int FUNC_2 (int,void const*,int) ;

ssize_t FUNC_3(int VAR_3, const void *VAR_4, size_t VAR_5, size_t VAR_6) {
        const uint8_t *VAR_7, *VAR_8, *VAR_9;
        ssize_t VAR_10;

        VAR_7 = VAR_8 = VAR_4;
        VAR_9 = VAR_7 + VAR_5;
        while (VAR_7 < VAR_9) {
                size_t VAR_11;

                VAR_11 = FUNC_1(VAR_7, VAR_9 - VAR_7);




                if ((VAR_11 > VAR_6) ||
                    (VAR_11 > 0 && VAR_7 == VAR_4) ||
                    (VAR_11 > 0 && VAR_7 + VAR_11 >= VAR_9)) {
                        if (VAR_7 > VAR_8) {
                                VAR_10 = FUNC_2(VAR_3, VAR_8, VAR_7 - VAR_8);
                                if (VAR_10 < 0)
                                        return -VAR_2;
                                if (VAR_10 != VAR_7 -VAR_8)
                                        return -VAR_0;
                        }

                        if (FUNC_0(VAR_3, VAR_11, VAR_1) == (off_t) -1)
                                return -VAR_2;

                        VAR_7 += VAR_11;
                        VAR_8 = VAR_7;
                } else if (VAR_11 > 0)
                        VAR_7 += VAR_11;
                else
                        VAR_7++;
        }

        if (VAR_7 > VAR_8) {
                VAR_10 = FUNC_2(VAR_3, VAR_8, VAR_7 - VAR_8);
                if (VAR_10 < 0)
                        return -VAR_2;
                if (VAR_10 != VAR_7 - VAR_8)
                        return -VAR_0;
        }

        return VAR_7 - (const uint8_t*) VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ rlim_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_3, rlim_t *VAR_4) {
        uint64_t VAR_5;
        int VAR_6;
        if (VAR_3[0] == '+') {


                VAR_6 = FUNC_0(VAR_3 + 1, &VAR_5);
                if (VAR_6 < 0)
                        return VAR_6;

                if (VAR_5 >= VAR_1)
                        return -VAR_0;

                VAR_5 = 20 - VAR_5;

        } else if (VAR_3[0] == '-') {


                VAR_6 = FUNC_0(VAR_3 + 1, &VAR_5);
                if (VAR_6 < 0)
                        return VAR_6;

                if (VAR_5 > (uint64_t) (-VAR_2))
                        return -VAR_0;

                VAR_5 = 20 + VAR_5;
        } else {


                VAR_6 = FUNC_0(VAR_3, &VAR_5);
                if (VAR_6 < 0)
                        return VAR_6;

                if (VAR_5 > (uint64_t) (20 - VAR_2))
                        return -VAR_0;
        }

        *VAR_4 = (rlim_t) VAR_5;
        return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,size_t) ;

size_t FUNC_1(const char *VAR_0) {
        size_t VAR_1 = 0;



        while (*VAR_0 != 0) {
                int VAR_2;

                VAR_2 = FUNC_0(VAR_0, (size_t) -1);
                if (VAR_2 < 0)
                        return (size_t) -1;

                VAR_0 += VAR_2;
                VAR_1++;
        }

        return VAR_1;
}

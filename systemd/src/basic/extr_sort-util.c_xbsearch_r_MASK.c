
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int (* __compar_d_fn_t ) (void const*,void const*,void*) ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t,size_t) ;

void *FUNC_2(const void *VAR_0, const void *VAR_1, size_t VAR_2, size_t VAR_3,
                 __compar_d_fn_t VAR_4, void *VAR_5) {
        size_t VAR_6, VAR_7, VAR_8;
        const void *VAR_9;
        int VAR_10;

        FUNC_0(!FUNC_1(VAR_2, VAR_3));

        VAR_6 = 0;
        VAR_7 = VAR_2;
        while (VAR_6 < VAR_7) {
                VAR_8 = (VAR_6 + VAR_7) / 2;
                VAR_9 = (const uint8_t*) VAR_1 + VAR_8 * VAR_3;
                VAR_10 = VAR_4(VAR_0, VAR_9, VAR_5);
                if (VAR_10 < 0)
                        VAR_7 = VAR_8;
                else if (VAR_10 > 0)
                        VAR_6 = VAR_8 + 1;
                else
                        return (void *)VAR_9;
        }
        return ((void*)0);
}

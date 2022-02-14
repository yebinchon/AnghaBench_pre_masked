
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_obj_type_t ;
typedef scalar_t__ mp_obj_t ;
typedef scalar_t__ mp_int_t ;
typedef int byte ;


 int FUNC_0 (scalar_t__ const,int const*,int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int const*,char const*,size_t) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__ const) ;
 int const* FUNC_4 (scalar_t__ const) ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int const*,int const*,int) ;
 char* FUNC_8 (scalar_t__,size_t*) ;
 int FUNC_9 (char*) ;
 int const* VAR_2 ;
 scalar_t__ FUNC_10 (int const) ;

mp_obj_t FUNC_11(size_t VAR_3, const mp_obj_t *VAR_4) {
    const mp_obj_type_t *VAR_5 = FUNC_4(VAR_4[0]);
    mp_int_t VAR_6 = -1;
    mp_obj_t VAR_7 = VAR_1;
    if (VAR_3 > 1) {
        VAR_7 = VAR_4[1];
        if (VAR_3 > 2) {
            VAR_6 = FUNC_3(VAR_4[2]);
        }
    }

    mp_obj_t VAR_8 = FUNC_6(0, ((void*)0));
    FUNC_0(VAR_4[0], VAR_2, VAR_0);
    const byte *VAR_9 = VAR_2 + VAR_0;

    if (VAR_7 == VAR_1) {



        while (VAR_2 < VAR_9 && FUNC_10(*VAR_2)) VAR_2++;
        while (VAR_2 < VAR_9 && VAR_6 != 0) {
            const byte *VAR_10 = VAR_2;
            while (VAR_2 < VAR_9 && !FUNC_10(*VAR_2)) VAR_2++;
            FUNC_5(VAR_8, FUNC_7(VAR_5, VAR_10, VAR_2 - VAR_10));
            if (VAR_2 >= VAR_9) {
                break;
            }
            while (VAR_2 < VAR_9 && FUNC_10(*VAR_2)) VAR_2++;
            if (VAR_6 > 0) {
                VAR_6--;
            }
        }

        if (VAR_2 < VAR_9) {
            FUNC_5(VAR_8, FUNC_7(VAR_5, VAR_2, VAR_9 - VAR_2));
        }

    } else {

        if (FUNC_4(VAR_7) != VAR_5) {
            FUNC_1(VAR_7);
        }

        size_t VAR_11;
        const char *VAR_12 = FUNC_8(VAR_7, &VAR_11);

        if (VAR_11 == 0) {
            FUNC_9("empty separator");
        }

        for (;;) {
            const byte *VAR_13 = VAR_2;
            for (;;) {
                if (VAR_6 == 0 || VAR_2 + VAR_11 > VAR_9) {
                    VAR_2 = VAR_9;
                    break;
                } else if (FUNC_2(VAR_2, VAR_12, VAR_11) == 0) {
                    break;
                }
                VAR_2++;
            }
            FUNC_5(VAR_8, FUNC_7(VAR_5, VAR_13, VAR_2 - VAR_13));
            if (VAR_2 >= VAR_9) {
                break;
            }
            VAR_2 += VAR_11;
            if (VAR_6 > 0) {
                VAR_6--;
            }
        }
    }

    return VAR_8;
}

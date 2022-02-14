
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t qstr ;
typedef int mp_print_t ;
typedef int mp_obj_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,size_t*,size_t**) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int const*,int ,int ) ;
 int FUNC_4 (int const*,char*) ;
 int FUNC_5 (int const*,char*,size_t,...) ;

void FUNC_6(const mp_print_t *VAR_2, mp_obj_t VAR_3) {
    if (FUNC_2(VAR_3)) {
        size_t VAR_4, *VAR_5;
        FUNC_1(VAR_3, &VAR_4, &VAR_5);
        if (VAR_4 > 0) {
            FUNC_0(VAR_4 % 3 == 0);
            FUNC_4(VAR_2, "Traceback (most recent call last):\n");
            for (int VAR_6 = VAR_4 - 3; VAR_6 >= 0; VAR_6 -= 3) {



                FUNC_5(VAR_2, "  File \"%q\"", VAR_5[VAR_6]);


                qstr VAR_7 = VAR_5[VAR_6 + 2];
                if (VAR_7 == VAR_0) {
                    FUNC_4(VAR_2, "\n");
                } else {
                    FUNC_5(VAR_2, ", in %q\n", VAR_7);
                }
            }
        }
    }
    FUNC_3(VAR_2, VAR_3, VAR_1);
    FUNC_4(VAR_2, "\n");
}

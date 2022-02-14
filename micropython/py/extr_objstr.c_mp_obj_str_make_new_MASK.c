
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vstr_t ;
typedef int qstr ;
typedef int mp_print_t ;
typedef int mp_obj_type_t ;
typedef int mp_obj_t ;
struct TYPE_6__ {int hash; scalar_t__ data; } ;
typedef TYPE_1__ mp_obj_str_t ;
struct TYPE_7__ {int len; scalar_t__ buf; } ;
typedef TYPE_2__ mp_buffer_info_t ;


 int FUNC_0 (int const,scalar_t__,int ) ;
 int FUNC_1 (int const,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (size_t,size_t,int ,int,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int const,TYPE_2__*,int ) ;
 int FUNC_8 (int const,int *) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (int const*,int *,int ) ;
 int FUNC_11 (int const*,int *) ;
 int FUNC_12 (int *,int const,int ) ;
 int FUNC_13 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (char const*,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_16 (scalar_t__,int ) ;
 int FUNC_17 (int *,int,int *) ;

mp_obj_t FUNC_18(const mp_obj_type_t *VAR_9, size_t VAR_10, size_t VAR_11, const mp_obj_t *VAR_12) {






    FUNC_5(VAR_10, VAR_11, 0, 3, 0);

    switch (VAR_10) {
        case 0:
            return FUNC_3(VAR_1);

        case 1: {
            vstr_t VAR_13;
            mp_print_t VAR_14;
            FUNC_17(&VAR_13, 16, &VAR_14);
            FUNC_12(&VAR_14, VAR_12[0], VAR_3);
            return FUNC_11(VAR_9, &VAR_13);
        }

        default:

            if (FUNC_8(VAR_12[0], &VAR_5)) {
                FUNC_0(VAR_12[0], VAR_6, VAR_8);
                FUNC_1(VAR_12[0], VAR_7);
                if (VAR_7 == 0) {
                    VAR_7 = FUNC_14(VAR_6, VAR_8);
                }







                qstr VAR_15 = FUNC_15((const char*)VAR_6, VAR_8);
                if (VAR_15 != VAR_2) {
                    return FUNC_3(VAR_15);
                }

                mp_obj_str_t *VAR_16 = FUNC_4(FUNC_10(VAR_9, ((void*)0), VAR_8));
                VAR_16->data = VAR_6;
                VAR_16->hash = VAR_7;
                return FUNC_2(VAR_16);
            } else {
                mp_buffer_info_t VAR_17;
                FUNC_7(VAR_12[0], &VAR_17, VAR_0);





                return FUNC_9(VAR_17.buf, VAR_17.len);
            }
    }
}

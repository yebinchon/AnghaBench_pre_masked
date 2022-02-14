
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int mp_vm_return_kind_t ;
struct TYPE_7__ {scalar_t__ (* iternext ) (scalar_t__) ;} ;
typedef TYPE_1__ mp_obj_type_t ;
typedef scalar_t__ mp_obj_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ,scalar_t__*) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (scalar_t__,int ,scalar_t__*) ;
 int FUNC_4 (scalar_t__,int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__*) ;
 TYPE_1__* FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int *,char*) ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 TYPE_1__ VAR_12 ;
 TYPE_1__ VAR_13 ;
 scalar_t__ FUNC_11 (scalar_t__) ;

mp_vm_return_kind_t FUNC_12(mp_obj_t VAR_14, mp_obj_t VAR_15, mp_obj_t VAR_16, mp_obj_t *VAR_17) {
    FUNC_1((VAR_15 != VAR_0) ^ (VAR_16 != VAR_0));
    mp_obj_type_t *VAR_18 = FUNC_8(VAR_14);

    if (VAR_18 == &VAR_13) {
        return FUNC_7(VAR_14, VAR_15, VAR_16, VAR_17);
    }

    if (VAR_18->iternext != ((void*)0) && VAR_15 == VAR_9) {
        mp_obj_t VAR_19 = VAR_18->iternext(VAR_14);
        *VAR_17 = VAR_19;
        if (VAR_19 != VAR_1) {
            return VAR_8;
        } else {


            return VAR_7;
        }
    }

    mp_obj_t VAR_20[3];


    if (VAR_15 == VAR_9) {
        FUNC_4(VAR_14, VAR_2, VAR_20);
        if (VAR_20[0] != VAR_0) {
            *VAR_17 = FUNC_2(0, 0, VAR_20);
            return VAR_8;
        }
    }



    if (VAR_15 != VAR_0) {
        FUNC_3(VAR_14, VAR_4, VAR_20);
        VAR_20[2] = VAR_15;
        *VAR_17 = FUNC_2(1, 0, VAR_20);
        return VAR_8;
    }

    FUNC_1(VAR_16 != VAR_0);
    {
        if (FUNC_9(FUNC_0(FUNC_8(VAR_16)), FUNC_0(&VAR_10))) {
            FUNC_4(VAR_14, VAR_3, VAR_20);
            if (VAR_20[0] != VAR_0) {


                *VAR_17 = FUNC_2(0, 0, VAR_20);

                return VAR_7;
            }
        } else {
            FUNC_4(VAR_14, VAR_5, VAR_20);
            if (VAR_20[0] != VAR_0) {
                VAR_20[2] = VAR_16;
                *VAR_17 = FUNC_2(1, 0, VAR_20);


                return VAR_8;
            }
        }





        if (FUNC_6(VAR_16, FUNC_0(&VAR_12))) {

            *VAR_17 = FUNC_10(&VAR_11, "generator raised StopIteration");
        } else {
            *VAR_17 = FUNC_5(VAR_16);
        }
        return VAR_6;
    }
}

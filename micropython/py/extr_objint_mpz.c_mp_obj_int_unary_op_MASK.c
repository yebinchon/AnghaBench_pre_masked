
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int mp_unary_op_t ;
typedef int mp_obj_t ;
struct TYPE_14__ {int neg; } ;
struct TYPE_13__ {TYPE_2__ mpz; } ;
typedef TYPE_1__ mp_obj_int_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int ) ;






 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_2__*) ;

mp_obj_t FUNC_10(mp_unary_op_t VAR_1, mp_obj_t VAR_2) {
    mp_obj_int_t *VAR_3 = FUNC_2(VAR_2);
    switch (VAR_1) {
        case 132: return FUNC_4(!FUNC_7(&VAR_3->mpz));
        case 131: return FUNC_1(FUNC_6(&VAR_3->mpz));
        case 128: return VAR_2;
        case 129: { mp_obj_int_t *VAR_4 = FUNC_3(); FUNC_8(&VAR_4->mpz, &VAR_3->mpz); return FUNC_0(VAR_4); }
        case 130: { mp_obj_int_t *VAR_5 = FUNC_3(); FUNC_9(&VAR_5->mpz, &VAR_3->mpz); return FUNC_0(VAR_5); }
        case 133: {
            mp_obj_int_t *VAR_6 = FUNC_2(VAR_2);
            if (VAR_6->mpz.neg == 0) {
                return VAR_2;
            }
            mp_obj_int_t *VAR_7 = FUNC_3();
            FUNC_5(&VAR_7->mpz, &VAR_6->mpz);
            return FUNC_0(VAR_7);
        }
        default: return VAR_0;
    }
}

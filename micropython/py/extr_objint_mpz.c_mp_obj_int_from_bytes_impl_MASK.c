
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mp_obj_t ;
struct TYPE_4__ {int mpz; } ;
typedef TYPE_1__ mp_obj_int_t ;
typedef int byte ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int *,int,size_t,int const*) ;

mp_obj_t FUNC_3(bool VAR_0, size_t VAR_1, const byte *VAR_2) {
    mp_obj_int_t *VAR_3 = FUNC_1();
    FUNC_2(&VAR_3->mpz, VAR_0, VAR_1, VAR_2);
    return FUNC_0(VAR_3);
}

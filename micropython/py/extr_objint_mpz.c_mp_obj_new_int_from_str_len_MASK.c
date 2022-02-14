
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mp_obj_t ;
struct TYPE_4__ {int mpz; } ;
typedef TYPE_1__ mp_obj_int_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 size_t FUNC_2 (int *,char const*,size_t,int,unsigned int) ;

mp_obj_t FUNC_3(const char **VAR_0, size_t VAR_1, bool VAR_2, unsigned int VAR_3) {
    mp_obj_int_t *VAR_4 = FUNC_1();
    size_t VAR_5 = FUNC_2(&VAR_4->mpz, *VAR_0, VAR_1, VAR_2, VAR_3);
    *VAR_0 += VAR_5;
    return FUNC_0(VAR_4);
}

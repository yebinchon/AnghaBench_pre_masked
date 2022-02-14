
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* mp_obj_t ;
struct TYPE_5__ {long long val; } ;
typedef TYPE_1__ mp_obj_int_t ;
typedef long long byte ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int VAR_0 ;

void FUNC_2(mp_obj_t VAR_1, bool VAR_2, size_t VAR_3, byte *VAR_4) {
    FUNC_0(FUNC_1(VAR_1, &VAR_0));
    mp_obj_int_t *VAR_5 = VAR_1;
    long long VAR_6 = VAR_5->val;
    if (VAR_2) {
        byte *VAR_7 = VAR_4 + VAR_3;
        while (VAR_7 > VAR_4) {
            *--VAR_7 = VAR_6;
            VAR_6 >>= 8;
        }
    } else {
        for (; VAR_3 > 0; --VAR_3) {
            *VAR_4++ = VAR_6;
            VAR_6 >>= 8;
        }
    }
}

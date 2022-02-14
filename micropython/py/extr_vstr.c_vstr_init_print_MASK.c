
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vstr_t ;
struct TYPE_3__ {scalar_t__ print_strn; int * data; } ;
typedef TYPE_1__ mp_print_t ;
typedef scalar_t__ mp_print_strn_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,size_t) ;

void FUNC_1(vstr_t *VAR_1, size_t VAR_2, mp_print_t *VAR_3) {
    FUNC_0(VAR_1, VAR_2);
    VAR_3->data = VAR_1;
    VAR_3->print_strn = (mp_print_strn_t)VAR_0;
}

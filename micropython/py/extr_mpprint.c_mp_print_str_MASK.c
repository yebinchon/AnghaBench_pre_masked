
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; int (* print_strn ) (int ,char const*,size_t) ;} ;
typedef TYPE_1__ mp_print_t ;


 size_t FUNC_0 (char const*) ;
 int FUNC_1 (int ,char const*,size_t) ;

int FUNC_2(const mp_print_t *VAR_0, const char *VAR_1) {
    size_t VAR_2 = FUNC_0(VAR_1);
    if (VAR_2) {
        VAR_0->print_strn(VAR_0->data, VAR_1, VAR_2);
    }
    return VAR_2;
}

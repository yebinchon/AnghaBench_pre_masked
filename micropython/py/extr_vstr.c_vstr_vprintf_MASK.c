
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vstr_t ;
typedef int va_list ;
struct TYPE_3__ {int member_1; int * member_0; } ;
typedef TYPE_1__ mp_print_t ;
typedef int mp_print_strn_t ;


 int FUNC_0 (TYPE_1__*,char const*,int ) ;
 int VAR_0 ;

void FUNC_1(vstr_t *VAR_1, const char *VAR_2, va_list VAR_3) {
    mp_print_t VAR_4 = {*VAR_1, (mp_print_strn_t)VAR_0};
    FUNC_0(&VAR_4, VAR_2, VAR_3);
}

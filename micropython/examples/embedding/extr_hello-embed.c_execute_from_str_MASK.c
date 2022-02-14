
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qstr ;
struct TYPE_3__ {int ret_val; } ;
typedef TYPE_1__ nlr_buf_t ;
typedef int mp_parse_tree_t ;
typedef int mp_obj_t ;
typedef int mp_lexer_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int) ;
 int * FUNC_2 (int,char const*,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char const*) ;

mp_obj_t FUNC_7(const char *VAR_1) {
    nlr_buf_t VAR_2;
    if (FUNC_5(&VAR_2) == 0) {
        qstr VAR_3 = 1 ;
        mp_lexer_t *VAR_4 = FUNC_2(VAR_3, VAR_1, FUNC_6(VAR_1), 0);
        mp_parse_tree_t VAR_5 = FUNC_3(VAR_4, VAR_0);
        mp_obj_t VAR_6 = FUNC_1(&VAR_5, VAR_3, 0);
        FUNC_0(VAR_6);
        FUNC_4();
        return 0;
    } else {

        return (mp_obj_t)VAR_2.ret_val;
    }
}

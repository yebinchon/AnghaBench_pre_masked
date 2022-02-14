
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int qstr ;
struct TYPE_6__ {scalar_t__ ret_val; } ;
typedef TYPE_1__ nlr_buf_t ;
typedef int mp_parse_tree_t ;
typedef int mp_parse_input_kind_t ;
typedef int mp_obj_t ;
struct TYPE_7__ {int source_name; } ;
typedef TYPE_2__ mp_lexer_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 TYPE_2__* FUNC_2 (int ,char const*,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char const*) ;

void FUNC_9(const char *VAR_2, mp_parse_input_kind_t VAR_3) {
    mp_lexer_t *VAR_4 = FUNC_2(VAR_0, VAR_2, FUNC_8(VAR_2), 0);
    if (VAR_4 == ((void*)0)) {
        FUNC_7("MemoryError: lexer could not allocate memory\n");
        return;
    }

    nlr_buf_t VAR_5;
    if (FUNC_6(&VAR_5) == 0) {
        qstr VAR_6 = VAR_4->source_name;
        mp_parse_tree_t VAR_7 = FUNC_4(VAR_4, VAR_3);
        mp_obj_t VAR_8 = FUNC_1(&VAR_7, VAR_6, 1);
        FUNC_0(VAR_8);
        FUNC_5();
    } else {

        FUNC_3(&VAR_1, (mp_obj_t)VAR_5.ret_val);
    }
}

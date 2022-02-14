
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int qstr ;
struct TYPE_6__ {int ret_val; } ;
typedef TYPE_1__ nlr_buf_t ;
typedef int mp_parse_tree_t ;
typedef int mp_obj_t ;
struct TYPE_7__ {int source_name; } ;
typedef TYPE_2__ mp_lexer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_2__* FUNC_5 (int ,char const*,int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 () ;

void FUNC_18(const char *VAR_8) {


    FUNC_0(VAR_3, VAR_2);
    FUNC_4();
    FUNC_8(VAR_6, 0);
    FUNC_8(VAR_5, 0);

    nlr_buf_t VAR_9;
    if (FUNC_12(&VAR_9) == 0) {
        mp_lexer_t *VAR_10 = FUNC_5(VAR_1, VAR_8, FUNC_13(VAR_8), 0);
        qstr VAR_11 = VAR_10->source_name;
        mp_parse_tree_t VAR_12 = FUNC_10(VAR_10, VAR_0);
        mp_obj_t VAR_13 = FUNC_2(&VAR_12, VAR_11, 0);
        FUNC_1(VAR_13);
        FUNC_11();
    } else {
        mp_obj_t VAR_14 = (mp_obj_t)VAR_9.ret_val;
        if (FUNC_7(FUNC_6(VAR_14), &VAR_7)) {



            FUNC_15();
            goto end;
        }
        FUNC_9(&VAR_4, VAR_14);
        FUNC_16("Uncaught exception\n");
    }

    if (FUNC_17()) {
        FUNC_14();
    }

end:
    FUNC_3();
}

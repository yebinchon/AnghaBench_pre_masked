
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct rewriteConfigState {int has_tail; int * lines; int option_to_line; } ;
typedef int sds ;
struct TYPE_4__ {scalar_t__ value; } ;
typedef TYPE_1__ listNode ;
typedef int list ;


 char const* VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct rewriteConfigState*,int ) ;
 int FUNC_6 (struct rewriteConfigState*,char const*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char const*) ;

void FUNC_9(struct rewriteConfigState *VAR_1, const char *VAR_2, sds VAR_3, int VAR_4) {
    sds VAR_5 = FUNC_8(VAR_2);
    list *VAR_6 = FUNC_1(VAR_1->option_to_line,VAR_5);

    FUNC_6(VAR_1,VAR_2);

    if (!VAR_6 && !VAR_4) {

        FUNC_7(VAR_3);
        FUNC_7(VAR_5);
        return;
    }

    if (VAR_6) {
        listNode *VAR_7 = FUNC_3(VAR_6);
        int VAR_8 = (long) VAR_7->value;



        FUNC_2(VAR_6,VAR_7);
        if (FUNC_4(VAR_6) == 0) FUNC_0(VAR_1->option_to_line,VAR_5);
        FUNC_7(VAR_1->lines[VAR_8]);
        VAR_1->lines[VAR_8] = VAR_3;
    } else {

        if (!VAR_1->has_tail) {
            FUNC_5(VAR_1,
                FUNC_8(VAR_0));
            VAR_1->has_tail = 1;
        }
        FUNC_5(VAR_1,VAR_3);
    }
    FUNC_7(VAR_5);
}

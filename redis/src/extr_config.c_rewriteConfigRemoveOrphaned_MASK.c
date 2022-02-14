
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct rewriteConfigState {int * lines; int rewritten; int option_to_line; } ;
typedef int sds ;
struct TYPE_4__ {scalar_t__ value; } ;
typedef TYPE_1__ listNode ;
typedef int list ;
typedef int dictIterator ;
typedef int dictEntry ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int ) ;

void FUNC_12(struct rewriteConfigState *VAR_1) {
    dictIterator *VAR_2 = FUNC_1(VAR_1->option_to_line);
    dictEntry *VAR_3;

    while((VAR_3 = FUNC_4(VAR_2)) != ((void*)0)) {
        list *VAR_4 = FUNC_3(VAR_3);
        sds VAR_5 = FUNC_2(VAR_3);



        if (FUNC_0(VAR_1->rewritten,VAR_5) == ((void*)0)) {
            FUNC_11(VAR_0,"Not rewritten option: %s", VAR_5);
            continue;
        }

        while(FUNC_8(VAR_4)) {
            listNode *VAR_6 = FUNC_7(VAR_4);
            int VAR_7 = (long) VAR_6->value;

            FUNC_10(VAR_1->lines[VAR_7]);
            VAR_1->lines[VAR_7] = FUNC_9();
            FUNC_6(VAR_4,VAR_6);
        }
    }
    FUNC_5(VAR_2);
}

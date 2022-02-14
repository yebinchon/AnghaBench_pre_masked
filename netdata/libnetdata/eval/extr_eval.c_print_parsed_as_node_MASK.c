
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int parameters; scalar_t__ isfunction; scalar_t__ print_as; } ;
struct TYPE_4__ {int count; size_t operator; int * ops; } ;
typedef TYPE_1__ EVAL_NODE ;
typedef int BUFFER ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int *,char*) ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (int *,int *,int*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline void FUNC_4(BUFFER *VAR_3, EVAL_NODE *VAR_4, int *VAR_5) {
    if(FUNC_3(VAR_4->count != VAR_2[VAR_4->operator].parameters)) {
        *VAR_5 = VAR_0;
        return;
    }

    if(VAR_2[VAR_4->operator].parameters == 1) {

        if(VAR_2[VAR_4->operator].print_as)
            FUNC_0(VAR_3, "%s", VAR_2[VAR_4->operator].print_as);




        FUNC_2(VAR_3, &VAR_4->ops[0], VAR_5);



    }

    else if(VAR_2[VAR_4->operator].parameters == 2) {
        FUNC_1(VAR_3, "(");
        FUNC_2(VAR_3, &VAR_4->ops[0], VAR_5);

        if(VAR_2[VAR_4->operator].print_as)
            FUNC_0(VAR_3, " %s ", VAR_2[VAR_4->operator].print_as);

        FUNC_2(VAR_3, &VAR_4->ops[1], VAR_5);
        FUNC_1(VAR_3, ")");
    }
    else if(VAR_4->operator == VAR_1 && VAR_2[VAR_4->operator].parameters == 3) {
        FUNC_1(VAR_3, "(");
        FUNC_2(VAR_3, &VAR_4->ops[0], VAR_5);

        if(VAR_2[VAR_4->operator].print_as)
            FUNC_0(VAR_3, " %s ", VAR_2[VAR_4->operator].print_as);

        FUNC_2(VAR_3, &VAR_4->ops[1], VAR_5);
        FUNC_1(VAR_3, " : ");
        FUNC_2(VAR_3, &VAR_4->ops[2], VAR_5);
        FUNC_1(VAR_3, ")");
    }

    if(VAR_2[VAR_4->operator].isfunction)
        FUNC_1(VAR_3, ")");
}

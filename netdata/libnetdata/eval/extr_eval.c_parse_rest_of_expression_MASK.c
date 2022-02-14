
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int parameters; } ;
struct TYPE_12__ {unsigned char operator; int precedence; int count; TYPE_1__* ops; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_2__* expression; } ;
typedef TYPE_2__ EVAL_NODE ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int,TYPE_2__*) ;
 TYPE_6__* VAR_5 ;
 TYPE_2__* FUNC_3 (char const**,int*) ;
 unsigned char FUNC_4 (char const**,int*) ;
 int FUNC_5 (char const**) ;

__attribute__((used)) static inline EVAL_NODE *FUNC_6(const char **VAR_6, int *VAR_7, EVAL_NODE *VAR_8) {
    EVAL_NODE *VAR_9 = ((void*)0);
    unsigned char VAR_10;
    int VAR_11;

    VAR_10 = FUNC_4(VAR_6, &VAR_11);
    FUNC_5(VAR_6);

    if(VAR_10 != VAR_3) {
        VAR_9 = FUNC_3(VAR_6, VAR_7);
        if(!VAR_9) {

            FUNC_1(VAR_8);
            return ((void*)0);
        }

        EVAL_NODE *VAR_12 = FUNC_0(VAR_5[VAR_10].parameters);
        VAR_12->operator = VAR_10;
        VAR_12->precedence = VAR_11;

        if(VAR_10 == VAR_2 && VAR_12->count == 3) {
            FUNC_5(VAR_6);

            if(**VAR_6 != ':') {
                FUNC_1(VAR_12);
                FUNC_1(VAR_8);
                FUNC_1(VAR_9);
                *VAR_7 = VAR_0;
                return ((void*)0);
            }
            (*VAR_6)++;

            FUNC_5(VAR_6);

            EVAL_NODE *VAR_13 = FUNC_3(VAR_6, VAR_7);
            if(!VAR_13) {
                FUNC_1(VAR_12);
                FUNC_1(VAR_8);
                FUNC_1(VAR_9);

                return ((void*)0);
            }

            FUNC_2(VAR_12, 2, VAR_13);
        }

        FUNC_2(VAR_12, 1, VAR_9);





        if(VAR_12->precedence > VAR_8->precedence && VAR_8->count == 2 && VAR_8->operator != '(' && VAR_8->ops[1].type == VAR_4) {
            FUNC_2(VAR_12, 0, VAR_8->ops[1].expression);
            VAR_8->ops[1].expression = VAR_12;
            VAR_12 = VAR_8;
        }
        else
            FUNC_2(VAR_12, 0, VAR_8);

        return FUNC_6(VAR_6, VAR_7, VAR_12);
    }
    else if(**VAR_6 == ')') {
        ;
    }
    else if(**VAR_6) {
        FUNC_1(VAR_8);
        VAR_8 = ((void*)0);
        *VAR_7 = VAR_1;
    }

    return VAR_8;
}

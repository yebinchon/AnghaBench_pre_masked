
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; int precedence; int operator; int id; } ;
typedef int EVAL_VALUE ;
typedef TYPE_1__ EVAL_NODE ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline EVAL_NODE *FUNC_2(int VAR_1) {
    static int VAR_2 = 1;

    EVAL_NODE *VAR_3 = FUNC_0(1, sizeof(EVAL_NODE) + (sizeof(EVAL_VALUE) * VAR_1));

    VAR_3->id = VAR_2++;
    VAR_3->operator = VAR_0;
    VAR_3->precedence = FUNC_1(VAR_0);
    VAR_3->count = VAR_1;
    return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned char operator; } ;
typedef TYPE_1__ EVAL_NODE ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (char const**,int*) ;

__attribute__((used)) static inline EVAL_NODE *FUNC_3(const char **VAR_0, unsigned char VAR_1, int *VAR_2) {
    EVAL_NODE *VAR_3 = FUNC_2(VAR_0, VAR_2);
    if(!VAR_3) return ((void*)0);

    EVAL_NODE *VAR_4 = FUNC_0(1);
    VAR_4->operator = VAR_1;
    FUNC_1(VAR_4, 0, VAR_3);
    return VAR_4;
}

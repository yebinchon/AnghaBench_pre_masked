
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevaluator {scalar_t__ stk_index; int pool; int stack; } ;
typedef int BOOL ;


 int FUNC_0 (struct pevaluator*,char*) ;
 int VAR_0 ;
 char* FUNC_1 (int *,char const*) ;
 char** FUNC_2 (int *,int *) ;
 char** FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static BOOL FUNC_5(struct pevaluator* VAR_1, const char* VAR_2)
{
    char** VAR_3;
    if (VAR_1->stk_index < FUNC_4(&VAR_1->stack))
        VAR_3 = FUNC_3(&VAR_1->stack, VAR_1->stk_index);
    else
        VAR_3 = FUNC_2(&VAR_1->stack, &VAR_1->pool);
    if (!VAR_3) return FUNC_0(VAR_1, "push: out of memory");
    *VAR_3 = FUNC_1(&VAR_1->pool, VAR_2);
    VAR_1->stk_index++;
    return VAR_0;
}

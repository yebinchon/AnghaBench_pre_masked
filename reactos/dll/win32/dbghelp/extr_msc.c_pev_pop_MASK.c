
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevaluator {int stk_index; int stack; } ;
typedef int BOOL ;


 int FUNC_0 (struct pevaluator*,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;
 char** FUNC_2 (int *,int ) ;

__attribute__((used)) static BOOL FUNC_3(struct pevaluator* VAR_1, char* VAR_2)
{
    char** VAR_3 = FUNC_2(&VAR_1->stack, --VAR_1->stk_index);
    if (!VAR_3) return FUNC_0(VAR_1, "pop: stack empty");
    FUNC_1(VAR_2, *VAR_3);
    return VAR_0;
}

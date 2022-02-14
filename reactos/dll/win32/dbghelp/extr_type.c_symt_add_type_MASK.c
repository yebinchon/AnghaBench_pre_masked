
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symt {int dummy; } ;
struct module {int pool; int vtypes; } ;


 int FUNC_0 (struct symt**) ;
 struct symt** FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct module* VAR_0, struct symt* VAR_1)
{
    struct symt** VAR_2;
    VAR_2 = FUNC_1(&VAR_0->vtypes, &VAR_0->pool);
    FUNC_0(VAR_2);
    *VAR_2 = VAR_1;
}

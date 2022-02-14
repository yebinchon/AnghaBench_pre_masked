
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RARFilter {struct RARFilter* globaldata; struct RARFilter* next; } ;


 int FUNC_0 (struct RARFilter*) ;

__attribute__((used)) static void FUNC_1(struct RARFilter *VAR_0)
{
    while (VAR_0) {
        struct RARFilter *VAR_1 = VAR_0->next;
        FUNC_0(VAR_0->globaldata);
        FUNC_0(VAR_0);
        VAR_0 = VAR_1;
    }
}

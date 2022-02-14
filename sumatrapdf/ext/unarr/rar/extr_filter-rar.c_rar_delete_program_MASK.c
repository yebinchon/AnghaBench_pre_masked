
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RARProgramCode {struct RARProgramCode* globalbackup; struct RARProgramCode* staticdata; int prog; struct RARProgramCode* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct RARProgramCode*) ;

__attribute__((used)) static void FUNC_2(struct RARProgramCode *VAR_0)
{
    while (VAR_0) {
        struct RARProgramCode *VAR_1 = VAR_0->next;
        FUNC_0(VAR_0->prog);
        FUNC_1(VAR_0->staticdata);
        FUNC_1(VAR_0->globalbackup);
        FUNC_1(VAR_0);
        VAR_0 = VAR_1;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * ssa; TYPE_1__* first_line_def; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ LINEDEF ;
typedef TYPE_2__ EDITSTATE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int **) ;

__attribute__((used)) static inline void FUNC_2(EDITSTATE *VAR_0)
{
 LINEDEF *VAR_1 = VAR_0->first_line_def;
 while (VAR_1)
 {
  FUNC_0(VAR_1);
  VAR_1 = VAR_1->next;
 }
 if (VAR_0->ssa)
 {
  FUNC_1(&VAR_0->ssa);
  VAR_0->ssa = ((void*)0);
 }
}

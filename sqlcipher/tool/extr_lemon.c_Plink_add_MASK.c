
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plink {struct config* cfp; struct plink* next; } ;
struct config {int dummy; } ;


 struct plink* FUNC_0 () ;

void FUNC_1(struct plink **VAR_0, struct config *VAR_1)
{
  struct plink *VAR_2;
  VAR_2 = FUNC_0();
  VAR_2->next = *VAR_0;
  *VAR_0 = VAR_2;
  VAR_2->cfp = VAR_1;
}

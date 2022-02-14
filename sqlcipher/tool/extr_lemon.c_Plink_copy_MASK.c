
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plink {struct plink* next; } ;



void FUNC_0(struct plink **VAR_0, struct plink *VAR_1)
{
  struct plink *VAR_2;
  while( VAR_1 ){
    VAR_2 = VAR_1->next;
    VAR_1->next = *VAR_0;
    *VAR_0 = VAR_1;
    VAR_1 = VAR_2;
  }
}

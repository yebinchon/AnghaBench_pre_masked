
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_loaddata {scalar_t__ size; int data; int hash; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;

bool FUNC_2(struct aa_loaddata *VAR_1, struct aa_loaddata *VAR_2)
{
 if (VAR_1->size != VAR_2->size)
  return 0;
 if (VAR_0 && FUNC_1(VAR_1->hash, VAR_2->hash, FUNC_0()) != 0)
  return 0;
 return FUNC_1(VAR_1->data, VAR_2->data, VAR_2->size) == 0;
}

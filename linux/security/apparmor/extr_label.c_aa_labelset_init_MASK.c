
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_labelset {int root; int lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct aa_labelset *VAR_1)
{
 FUNC_0(!VAR_1);

 FUNC_1(&VAR_1->lock);
 VAR_1->root = VAR_0;
}

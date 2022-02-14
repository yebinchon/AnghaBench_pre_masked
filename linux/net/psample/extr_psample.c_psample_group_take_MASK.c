
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psample_group {int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct psample_group *VAR_1)
{
 FUNC_0(&VAR_0);
 VAR_1->refcount++;
 FUNC_1(&VAR_0);
}

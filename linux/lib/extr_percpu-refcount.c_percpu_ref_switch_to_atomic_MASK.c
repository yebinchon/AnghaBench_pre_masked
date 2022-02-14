
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct percpu_ref {int force_atomic; } ;
typedef int percpu_ref_func_t ;


 int FUNC_0 (struct percpu_ref*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct percpu_ref *VAR_1,
     percpu_ref_func_t *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0, VAR_3);

 VAR_1->force_atomic = 1;
 FUNC_0(VAR_1, VAR_2);

 FUNC_2(&VAR_0, VAR_3);
}

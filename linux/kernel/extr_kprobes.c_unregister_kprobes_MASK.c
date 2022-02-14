
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kprobe {int * addr; } ;


 int FUNC_0 (struct kprobe*) ;
 scalar_t__ FUNC_1 (struct kprobe*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

void FUNC_5(struct kprobe **VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_2 <= 0)
  return;
 FUNC_2(&VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (FUNC_1(VAR_1[VAR_3]) < 0)
   VAR_1[VAR_3]->addr = ((void*)0);
 FUNC_3(&VAR_0);

 FUNC_4();
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (VAR_1[VAR_3]->addr)
   FUNC_0(VAR_1[VAR_3]);
}

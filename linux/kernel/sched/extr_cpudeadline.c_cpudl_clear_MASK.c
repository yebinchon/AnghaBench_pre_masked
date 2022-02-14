
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpudl {int size; int lock; int free_cpus; TYPE_1__* elements; } ;
struct TYPE_2__ {int idx; int cpu; int dl; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cpudl*,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct cpudl *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 unsigned long VAR_5;

 FUNC_0(!FUNC_1(VAR_2));

 FUNC_4(&VAR_1->lock, VAR_5);

 VAR_3 = VAR_1->elements[VAR_2].idx;
 if (VAR_3 == VAR_0) {





 } else {
  VAR_4 = VAR_1->elements[VAR_1->size - 1].cpu;
  VAR_1->elements[VAR_3].dl = VAR_1->elements[VAR_1->size - 1].dl;
  VAR_1->elements[VAR_3].cpu = VAR_4;
  VAR_1->size--;
  VAR_1->elements[VAR_4].idx = VAR_3;
  VAR_1->elements[VAR_2].idx = VAR_0;
  FUNC_2(VAR_1, VAR_3);

  FUNC_3(VAR_2, VAR_1->free_cpus);
 }
 FUNC_5(&VAR_1->lock, VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct cpudl {int lock; TYPE_1__* elements; int free_cpus; int size; } ;
struct TYPE_2__ {int idx; int cpu; void* dl; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cpudl*,int) ;
 int FUNC_3 (struct cpudl*,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct cpudl *VAR_1, int VAR_2, u64 VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;

 FUNC_0(!FUNC_1(VAR_2));

 FUNC_5(&VAR_1->lock, VAR_5);

 VAR_4 = VAR_1->elements[VAR_2].idx;
 if (VAR_4 == VAR_0) {
  int VAR_6 = VAR_1->size++;

  VAR_1->elements[VAR_6].dl = VAR_3;
  VAR_1->elements[VAR_6].cpu = VAR_2;
  VAR_1->elements[VAR_2].idx = VAR_6;
  FUNC_3(VAR_1, VAR_6);
  FUNC_4(VAR_2, VAR_1->free_cpus);
 } else {
  VAR_1->elements[VAR_4].dl = VAR_3;
  FUNC_2(VAR_1, VAR_4);
 }

 FUNC_6(&VAR_1->lock, VAR_5);
}

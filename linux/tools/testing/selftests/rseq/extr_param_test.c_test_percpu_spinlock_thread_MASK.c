
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spinlock_thread_test_data {long long reps; scalar_t__ reg; struct spinlock_test_data* data; } ;
struct spinlock_test_data {int lock; TYPE_1__* c; } ;
struct TYPE_2__ {int count; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int,long long,...) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 () ;
 int VAR_2 ;

void *FUNC_8(void *VAR_3)
{
 struct spinlock_thread_test_data *VAR_4 = VAR_3;
 struct spinlock_test_data *VAR_5 = VAR_4->data;
 long long VAR_6, VAR_7;

 if (!VAR_1 && VAR_4->reg &&
     FUNC_5())
  FUNC_0();
 VAR_7 = VAR_4->reps;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  int VAR_8 = FUNC_3();

  VAR_8 = FUNC_6(&VAR_5->lock);
  VAR_5->c[VAR_8].count++;
  FUNC_4(&VAR_5->lock, VAR_8);

  if (VAR_6 != 0 && !(VAR_6 % (VAR_7 / 10)))
   FUNC_2("tid %d: count %lld\n", (int) FUNC_1(), VAR_6);

 }
 FUNC_2("tid %d: number of rseq abort: %d, signals delivered: %u\n",
         (int) FUNC_1(), VAR_0, VAR_2);
 if (!VAR_1 && VAR_4->reg &&
     FUNC_7())
  FUNC_0();
 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spinlock_test_data {int reps; int lock; TYPE_1__* c; } ;
struct TYPE_2__ {int count; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,char*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;
 int VAR_1 ;
 char* FUNC_6 (int) ;

void *FUNC_7(void *VAR_2)
{
 struct spinlock_test_data *VAR_3 = VAR_2;
 int VAR_4, VAR_5;

 if (FUNC_3()) {
  FUNC_1(VAR_1, "Error: rseq_register_current_thread(...) failed(%d): %s\n",
   VAR_0, FUNC_6(VAR_0));
  FUNC_0();
 }
 for (VAR_4 = 0; VAR_4 < VAR_3->reps; VAR_4++) {
  VAR_5 = FUNC_4(&VAR_3->lock);
  VAR_3->c[VAR_5].count++;
  FUNC_2(&VAR_3->lock, VAR_5);
 }
 if (FUNC_5()) {
  FUNC_1(VAR_1, "Error: rseq_unregister_current_thread(...) failed(%d): %s\n",
   VAR_0, FUNC_6(VAR_0));
  FUNC_0();
 }

 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inc_thread_test_data {long long reps; scalar_t__ reg; struct inc_test_data* data; } ;
struct inc_test_data {TYPE_1__* c; } ;
struct TYPE_2__ {int count; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int,long long,...) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 int VAR_2 ;

void *FUNC_8(void *VAR_3)
{
 struct inc_thread_test_data *VAR_4 = VAR_3;
 struct inc_test_data *VAR_5 = VAR_4->data;
 long long VAR_6, VAR_7;

 if (!VAR_1 && VAR_4->reg &&
     FUNC_5())
  FUNC_0();
 VAR_7 = VAR_4->reps;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  int VAR_8;

  do {
   int VAR_9;

   VAR_9 = FUNC_4();
   VAR_8 = FUNC_3(&VAR_5->c[VAR_9].count, 1, VAR_9);
  } while (FUNC_6(VAR_8));

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

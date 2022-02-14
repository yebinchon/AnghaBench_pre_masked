
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread_data {int curr_cpu; } ;
struct TYPE_3__ {int nr_proc; int nr_threads; } ;
struct TYPE_4__ {struct thread_data* threads; TYPE_1__ p; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(int VAR_1)
{
 int VAR_2 = 0;
 int VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->p.nr_proc; VAR_4++) {
  for (VAR_3 = 0; VAR_3 < VAR_0->p.nr_threads; VAR_3++) {
   struct thread_data *VAR_5;
   int VAR_6;
   int VAR_7;

   VAR_6 = VAR_4*VAR_0->p.nr_threads + VAR_3;
   VAR_5 = VAR_0->threads + VAR_6;

   VAR_7 = FUNC_0(VAR_5->curr_cpu);
   if (VAR_7 == VAR_1) {
    VAR_2++;
    break;
   }
  }
 }

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct symbol {int dummy; } ;
struct perf_sample {int dummy; } ;
struct evsel {int dummy; } ;
struct callchain_cursor {int dummy; } ;
struct addr_location {int dummy; } ;
struct TYPE_2__ {scalar_t__ order; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct callchain_cursor*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (struct thread*,struct callchain_cursor*,struct evsel*,struct perf_sample*,struct symbol**,struct addr_location*,int) ;
 int FUNC_2 (struct thread*,struct callchain_cursor*,struct evsel*,struct perf_sample*,int) ;

int FUNC_3(struct thread *VAR_2,
         struct callchain_cursor *VAR_3,
         struct evsel *VAR_4,
         struct perf_sample *VAR_5,
         struct symbol **VAR_6,
         struct addr_location *VAR_7,
         int VAR_8)
{
 int VAR_9 = 0;

 FUNC_0(VAR_3);

 if (VAR_1.order == VAR_0) {
  VAR_9 = FUNC_1(VAR_2, VAR_3,
             VAR_4, VAR_5,
             VAR_6, VAR_7,
             VAR_8);
  if (VAR_9)
   return VAR_9;
  VAR_9 = FUNC_2(VAR_2, VAR_3,
             VAR_4, VAR_5,
             VAR_8);
 } else {
  VAR_9 = FUNC_2(VAR_2, VAR_3,
             VAR_4, VAR_5,
             VAR_8);
  if (VAR_9)
   return VAR_9;
  VAR_9 = FUNC_1(VAR_2, VAR_3,
             VAR_4, VAR_5,
             VAR_6, VAR_7,
             VAR_8);
 }

 return VAR_9;
}

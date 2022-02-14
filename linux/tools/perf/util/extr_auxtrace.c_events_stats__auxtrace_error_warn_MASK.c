
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct events_stats {int * nr_auxtrace_errors; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ) ;

void FUNC_2(const struct events_stats *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (!VAR_1->nr_auxtrace_errors[VAR_2])
   continue;
  FUNC_1("%u %s errors\n",
       VAR_1->nr_auxtrace_errors[VAR_2],
       FUNC_0(VAR_2));
 }
}

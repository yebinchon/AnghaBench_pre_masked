
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * next; } ;
struct perf_hpp_fmt {char* name; TYPE_2__ sort_list; TYPE_2__ list; } ;
struct TYPE_3__ {scalar_t__ show_total_period; scalar_t__ show_nr_samples; scalar_t__ show_cpu_utilization; scalar_t__ cumulate_callchain; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_10 ;
 struct perf_hpp_fmt* VAR_11 ;
 TYPE_1__ VAR_12 ;

void FUNC_3(void)
{
 int VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  struct perf_hpp_fmt *VAR_14 = &VAR_11[VAR_13];

  FUNC_0(&VAR_14->list);


  if (VAR_14->sort_list.next == ((void*)0))
   FUNC_0(&VAR_14->sort_list);
 }




 if (FUNC_2(VAR_9))
  return;

 if (VAR_12.cumulate_callchain) {
  FUNC_1(VAR_2);
  VAR_11[VAR_1].name = "Self";
 }

 FUNC_1(VAR_1);

 if (VAR_12.show_cpu_utilization) {
  FUNC_1(VAR_5);
  FUNC_1(VAR_6);

  if (VAR_10) {
   FUNC_1(VAR_3);
   FUNC_1(VAR_4);
  }
 }

 if (VAR_12.show_nr_samples)
  FUNC_1(VAR_8);

 if (VAR_12.show_total_period)
  FUNC_1(VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct evlist {int dummy; } ;
typedef enum perf_call_graph_mode { ____Placeholder_perf_call_graph_mode } perf_call_graph_mode ;
struct TYPE_5__ {scalar_t__ mode; int record_mode; scalar_t__ min_percent; int enabled; } ;
struct TYPE_4__ {int use_callchain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_11 ;
 int FUNC_1 (struct evlist*) ;
 TYPE_1__ VAR_12 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct evlist *VAR_13)
{
 u64 VAR_14 = FUNC_1(VAR_13);
 enum perf_call_graph_mode VAR_15 = VAR_3;

 if ((VAR_14 & VAR_8) &&
     (VAR_14 & VAR_9)) {
  VAR_15 = VAR_0;
  VAR_11 = 1;
 } else if (VAR_14 & VAR_6)
  VAR_15 = VAR_2;
 else if (VAR_14 & VAR_7)
  VAR_15 = VAR_1;

 if (!VAR_10.enabled &&
     VAR_10.mode != VAR_4 &&
     VAR_15 != VAR_3) {
  VAR_12.use_callchain = 1;
  if (FUNC_0(&VAR_10) < 0) {
   FUNC_2("Can't register callchain params.\n");
   return -VAR_5;
  }
 }

 VAR_10.record_mode = VAR_15;
 VAR_10.min_percent = 0;
 return 0;
}

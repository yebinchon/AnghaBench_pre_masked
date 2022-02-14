
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct perf_session {int evlist; } ;
struct perf_script {struct perf_session* session; } ;
struct TYPE_4__ {int record_mode; } ;
struct TYPE_3__ {scalar_t__ cumulate_callchain; scalar_t__ use_callchain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_8 ;

__attribute__((used)) static void FUNC_1(struct perf_script *VAR_9)
{
 struct perf_session *VAR_10 = VAR_9->session;
 u64 VAR_11 = FUNC_0(VAR_10->evlist);

 if (VAR_8.use_callchain || VAR_8.cumulate_callchain) {
  if ((VAR_11 & VAR_4) &&
      (VAR_11 & VAR_5)) {
   VAR_6.record_mode = VAR_0;
   VAR_7 = 1;
  } else if (VAR_11 & VAR_3)
   VAR_6.record_mode = VAR_2;
  else
   VAR_6.record_mode = VAR_1;
 }
}

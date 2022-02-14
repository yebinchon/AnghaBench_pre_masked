
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ feat_id; } ;
union perf_event {TYPE_1__ feat; } ;
struct perf_session {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct perf_session*,union perf_event*) ;

__attribute__((used)) static int FUNC_1(struct perf_session *VAR_1,
     union perf_event *VAR_2)
{
 if (VAR_2->feat.feat_id < VAR_0)
  return FUNC_0(VAR_1, VAR_2);
 return 0;
}

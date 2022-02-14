
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_tool {int dummy; } ;
struct perf_session {TYPE_1__* auxtrace; } ;
struct TYPE_2__ {int (* flush_events ) (struct perf_session*,struct perf_tool*) ;} ;


 int FUNC_0 (struct perf_session*,struct perf_tool*) ;

int FUNC_1(struct perf_session *VAR_0, struct perf_tool *VAR_1)
{
 if (!VAR_0->auxtrace)
  return 0;

 return VAR_0->auxtrace->flush_events(VAR_0, VAR_1);
}

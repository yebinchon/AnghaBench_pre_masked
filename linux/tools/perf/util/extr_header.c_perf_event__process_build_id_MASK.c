
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int filename; } ;
union perf_event {TYPE_1__ build_id; } ;
struct perf_session {int dummy; } ;


 int FUNC_0 (TYPE_1__*,int ,struct perf_session*) ;

int FUNC_1(struct perf_session *VAR_0,
     union perf_event *VAR_1)
{
 FUNC_0(&VAR_1->build_id,
     VAR_1->build_id.filename,
     VAR_0);
 return 0;
}

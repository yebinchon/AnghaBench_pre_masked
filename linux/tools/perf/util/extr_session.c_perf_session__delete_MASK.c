
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int env; } ;
struct perf_session {scalar_t__ data; int machines; TYPE_1__ header; int auxtrace_index; } ;


 int FUNC_0 (struct perf_session*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct perf_session*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct perf_session*) ;
 int FUNC_7 (struct perf_session*) ;
 int FUNC_8 (struct perf_session*) ;

void FUNC_9(struct perf_session *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 FUNC_0(VAR_0);
 FUNC_1(&VAR_0->auxtrace_index);
 FUNC_7(VAR_0);
 FUNC_6(VAR_0);
 FUNC_8(VAR_0);
 FUNC_5(&VAR_0->header.env);
 FUNC_3(&VAR_0->machines);
 if (VAR_0->data)
  FUNC_4(VAR_0->data);
 FUNC_2(VAR_0);
}

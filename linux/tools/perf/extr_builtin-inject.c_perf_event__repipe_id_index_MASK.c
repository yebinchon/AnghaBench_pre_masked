
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
struct perf_session {int tool; } ;


 int FUNC_0 (struct perf_session*,union perf_event*) ;
 int FUNC_1 (int ,union perf_event*) ;

__attribute__((used)) static int FUNC_2(struct perf_session *VAR_0,
           union perf_event *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0->tool, VAR_1);
 VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_2;
}

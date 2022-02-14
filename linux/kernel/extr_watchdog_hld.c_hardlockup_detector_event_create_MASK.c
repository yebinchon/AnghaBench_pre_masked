
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int sample_period; } ;
struct perf_event {int dummy; } ;


 scalar_t__ FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int ) ;
 struct perf_event* FUNC_3 (struct perf_event_attr*,unsigned int,int *,int ,int *) ;
 int FUNC_4 (char*,unsigned int,int) ;
 unsigned int FUNC_5 () ;
 int FUNC_6 (int ,struct perf_event*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct perf_event_attr VAR_3 ;

__attribute__((used)) static int FUNC_7(void)
{
 unsigned int VAR_4 = FUNC_5();
 struct perf_event_attr *VAR_5;
 struct perf_event *VAR_6;

 VAR_5 = &VAR_3;
 VAR_5->sample_period = FUNC_2(VAR_2);


 VAR_6 = FUNC_3(VAR_5, VAR_4, ((void*)0),
            VAR_1, ((void*)0));
 if (FUNC_0(VAR_6)) {
  FUNC_4("Perf event create on CPU %d failed with %ld\n", VAR_4,
    FUNC_1(VAR_6));
  return FUNC_1(VAR_6);
 }
 FUNC_6(VAR_0, VAR_6);
 return 0;
}

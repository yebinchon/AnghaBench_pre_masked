
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,struct perf_event_attr*) ;
 int VAR_1 ;
 int FUNC_2 (void*,struct perf_event_attr*) ;

__attribute__((used)) static int FUNC_3(void)
{
 struct perf_event_attr VAR_2;
 int VAR_3, VAR_4 = 1;

 VAR_3 = FUNC_2((void *) &VAR_1, &VAR_2);
 if (VAR_3 > 0) {
  VAR_4 = FUNC_1(VAR_3, VAR_0, &VAR_2);
  FUNC_0(VAR_3);
 }

 return VAR_4 ? 0 : 1;
}

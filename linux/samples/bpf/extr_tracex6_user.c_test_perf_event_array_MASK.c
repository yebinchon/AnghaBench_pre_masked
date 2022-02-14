
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int dummy; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct perf_event_attr*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int*,int ) ;

__attribute__((used)) static void FUNC_7(struct perf_event_attr *VAR_1,
      const char *VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = FUNC_5(VAR_0);
 pid_t VAR_6[VAR_5];
 int VAR_7 = 0;

 FUNC_4("Test reading %s counters\n", VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
  VAR_6[VAR_3] = FUNC_3();
  FUNC_0(VAR_6[VAR_3] >= 0);
  if (VAR_6[VAR_3] == 0) {
   FUNC_1(VAR_3, VAR_1);
   FUNC_2(1);
  }
 }

 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
  FUNC_0(FUNC_6(VAR_6[VAR_3], &VAR_4, 0) == VAR_6[VAR_3]);
  VAR_7 |= VAR_4;
 }

 if (VAR_7)
  FUNC_4("Test: %s FAILED\n", VAR_2);
}

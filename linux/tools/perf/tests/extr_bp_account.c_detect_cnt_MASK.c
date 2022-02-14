
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int dummy; } ;


 int FUNC_0 (int,void*,struct perf_event_attr*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(bool VAR_2)
{
 struct perf_event_attr VAR_3;
 void *VAR_4 = VAR_2 ? (void *)VAR_0 : (void *)&VAR_1;
 int VAR_5[100], VAR_6 = 0, VAR_7;

 while (1) {
  if (VAR_6 == 100) {
   FUNC_2("way too many debug registers, fix the test\n");
   return 0;
  }
  VAR_5[VAR_6] = FUNC_0(VAR_2, VAR_4, &VAR_3);

  if (VAR_5[VAR_6] < 0)
   break;
  VAR_6++;
 }

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_1(VAR_5[VAR_7]);

 return VAR_6;
}

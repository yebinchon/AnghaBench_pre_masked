
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (void*,struct perf_event_attr*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (void*,struct perf_event_attr*) ;

__attribute__((used)) static int FUNC_4(int VAR_2, int VAR_3)
{
 struct perf_event_attr VAR_4;
 int VAR_5, VAR_6[VAR_2 + VAR_3], VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_6[VAR_5] = FUNC_3((void *)&VAR_1, &VAR_4);
  FUNC_0("failed to create wp\n", VAR_6[VAR_5] != -1);
 }

 for (; VAR_5 < (VAR_3 + VAR_2); VAR_5++) {
  VAR_6[VAR_5] = FUNC_1((void *)VAR_0, &VAR_4);
  if (VAR_6[VAR_5] == -1)
   break;
 }

 VAR_7 = VAR_5 != (VAR_3 + VAR_2);

 while (VAR_5--)
  FUNC_2(VAR_6[VAR_5]);

 return VAR_7;
}

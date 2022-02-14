
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int VAR_0 ;
 struct option const FUNC_0 (char,char*,int*,int *) ;
 struct option const FUNC_1 () ;
 int VAR_1 ;
 char** FUNC_2 (int,int) ;
 int FUNC_3 (char const**) ;
 int FUNC_4 (int,char const**,struct option const*,int *,int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*) ;

int FUNC_7(int *VAR_2, const char **VAR_3)
{
 const char **VAR_4;
 bool VAR_5 = 0;
 int VAR_6, VAR_7 = *VAR_2;

 const struct option VAR_8[] = {
  FUNC_0('e', "event", &VAR_5, ((void*)0)),
  FUNC_1()
 };

 VAR_4 = FUNC_2(VAR_7 + 1, sizeof(char *));
 if (!VAR_4)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
  VAR_4[VAR_6] = VAR_3[VAR_6];

 FUNC_4(VAR_7, VAR_4, VAR_8, ((void*)0), VAR_1);
 if (!VAR_5) {
  if (FUNC_5("trace_imc", "trace_cycles")) {
   VAR_3[VAR_7++] = FUNC_6("-e");
   VAR_3[VAR_7++] = FUNC_6("trace_imc/trace_cycles/");
   *VAR_2 += 2;
  } else {
   FUNC_3(VAR_4);
   return -VAR_0;
  }
 }

 FUNC_3(VAR_4);
 return 0;
}

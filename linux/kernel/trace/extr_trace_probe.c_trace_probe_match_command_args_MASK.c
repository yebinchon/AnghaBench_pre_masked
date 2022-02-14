
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_probe {int nr_args; TYPE_1__* args; } ;
typedef int buf ;
struct TYPE_2__ {char* name; char* comm; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_1 (char*,char const*) ;

bool FUNC_2(struct trace_probe *VAR_1,
        int VAR_2, const char **VAR_3)
{
 char VAR_4[VAR_0 + 1];
 int VAR_5;

 if (VAR_1->nr_args < VAR_2)
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  FUNC_0(VAR_4, sizeof(VAR_4), "%s=%s",
    VAR_1->args[VAR_5].name, VAR_1->args[VAR_5].comm);
  if (FUNC_1(VAR_4, VAR_3[VAR_5]))
   return 0;
 }
 return 1;
}

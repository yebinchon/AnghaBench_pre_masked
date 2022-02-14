
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;

const char *
FUNC_0(const char *VAR_1)
{
 switch (VAR_1[0])
 {
  case 'p':
   if (VAR_0[1] == 'a')
    return "log_parser_stats";
   else if (VAR_0[1] == 'l')
    return "log_planner_stats";
   break;

  case 'e':
   return "log_executor_stats";
   break;
 }

 return ((void*)0);
}

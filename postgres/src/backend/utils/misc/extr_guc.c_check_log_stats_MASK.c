
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GucSource ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool
FUNC_1(bool *VAR_3, void **VAR_4, GucSource VAR_5)
{
 if (*VAR_3 &&
  (VAR_1 || VAR_2 || VAR_0))
 {
  FUNC_0("Cannot enable \"log_statement_stats\" when "
       "\"log_parser_stats\", \"log_planner_stats\", "
       "or \"log_executor_stats\" is true.");
  return 0;
 }
 return 1;
}

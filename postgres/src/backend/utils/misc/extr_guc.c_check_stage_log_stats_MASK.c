
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GucSource ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_1(bool *VAR_1, void **VAR_2, GucSource VAR_3)
{
 if (*VAR_1 && VAR_0)
 {
  FUNC_0("Cannot enable parameter when \"log_statement_stats\" is true.");
  return 0;
 }
 return 1;
}

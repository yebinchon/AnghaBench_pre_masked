
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum sched_prio { ____Placeholder_sched_prio } sched_prio ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char*,char const*,int ) ;

enum sched_prio FUNC_2(const char *VAR_4)
{
 if (FUNC_1("high", VAR_4, FUNC_0(VAR_4)) == 0)
  return VAR_2;
 else if (FUNC_1("default", VAR_4, FUNC_0(VAR_4)) == 0)
  return VAR_0;
 else if (FUNC_1("low", VAR_4, FUNC_0(VAR_4)) == 0)
  return VAR_3;
 else
  return VAR_1;
}

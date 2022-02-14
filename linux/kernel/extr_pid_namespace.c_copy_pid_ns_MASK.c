
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct pid_namespace {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 struct pid_namespace* FUNC_0 (int ) ;
 struct pid_namespace* FUNC_1 (struct user_namespace*,struct pid_namespace*) ;
 int VAR_2 ;
 struct pid_namespace* FUNC_2 (struct pid_namespace*) ;
 struct pid_namespace* FUNC_3 (int ) ;

struct pid_namespace *FUNC_4(unsigned long VAR_3,
 struct user_namespace *VAR_4, struct pid_namespace *VAR_5)
{
 if (!(VAR_3 & VAR_0))
  return FUNC_2(VAR_5);
 if (FUNC_3(VAR_2) != VAR_5)
  return FUNC_0(-VAR_1);
 return FUNC_1(VAR_4, VAR_5);
}

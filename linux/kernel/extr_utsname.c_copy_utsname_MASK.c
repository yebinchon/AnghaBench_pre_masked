
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uts_namespace {int dummy; } ;
struct user_namespace {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 struct uts_namespace* FUNC_1 (struct user_namespace*,struct uts_namespace*) ;
 int FUNC_2 (struct uts_namespace*) ;
 int FUNC_3 (struct uts_namespace*) ;

struct uts_namespace *FUNC_4(unsigned long VAR_1,
 struct user_namespace *VAR_2, struct uts_namespace *VAR_3)
{
 struct uts_namespace *VAR_4;

 FUNC_0(!VAR_3);
 FUNC_2(VAR_3);

 if (!(VAR_1 & VAR_0))
  return VAR_3;

 VAR_4 = FUNC_1(VAR_2, VAR_3);

 FUNC_3(VAR_3);
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
typedef scalar_t__ projid_t ;
typedef int kprojid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct user_namespace*,int ) ;

projid_t FUNC_1(struct user_namespace *VAR_1, kprojid_t VAR_2)
{
 projid_t VAR_3;
 VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3 == (projid_t) -1)
  VAR_3 = VAR_0;
 return VAR_3;
}

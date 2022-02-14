
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
typedef int kgid_t ;
typedef scalar_t__ gid_t ;


 scalar_t__ FUNC_0 (struct user_namespace*,int ) ;
 scalar_t__ VAR_0 ;

gid_t FUNC_1(struct user_namespace *VAR_1, kgid_t VAR_2)
{
 gid_t VAR_3;
 VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3 == (gid_t) -1)
  VAR_3 = VAR_0;
 return VAR_3;
}

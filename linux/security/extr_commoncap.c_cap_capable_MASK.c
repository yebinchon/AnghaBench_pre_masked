
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {scalar_t__ level; struct user_namespace* parent; int owner; } ;
struct cred {int euid; struct user_namespace* user_ns; int cap_effective; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;

int FUNC_2(const struct cred *VAR_1, struct user_namespace *VAR_2,
  int VAR_3, unsigned int VAR_4)
{
 struct user_namespace *VAR_5 = VAR_2;





 for (;;) {

  if (VAR_5 == VAR_1->user_ns)
   return FUNC_0(VAR_1->cap_effective, VAR_3) ? 0 : -VAR_0;





  if (VAR_5->level <= VAR_1->user_ns->level)
   return -VAR_0;





  if ((VAR_5->parent == VAR_1->user_ns) && FUNC_1(VAR_5->owner, VAR_1->euid))
   return 0;





  VAR_5 = VAR_5->parent;
 }


}

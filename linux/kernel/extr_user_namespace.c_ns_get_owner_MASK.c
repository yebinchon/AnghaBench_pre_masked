
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct user_namespace {struct user_namespace* parent; } ;
struct ns_common {TYPE_1__* ops; } ;
struct TYPE_4__ {struct ns_common ns; } ;
struct TYPE_3__ {struct user_namespace* (* owner ) (struct ns_common*) ;} ;


 int VAR_0 ;
 struct ns_common* FUNC_0 (int ) ;
 struct user_namespace* FUNC_1 () ;
 TYPE_2__* FUNC_2 (struct user_namespace*) ;
 struct user_namespace* FUNC_3 (struct ns_common*) ;

struct ns_common *FUNC_4(struct ns_common *VAR_1)
{
 struct user_namespace *VAR_2 = FUNC_1();
 struct user_namespace *VAR_3, *VAR_4;


 VAR_3 = VAR_4 = VAR_1->ops->owner(VAR_1);
 for (;;) {
  if (!VAR_4)
   return FUNC_0(-VAR_0);
  if (VAR_4 == VAR_2)
   break;
  VAR_4 = VAR_4->parent;
 }

 return &FUNC_2(VAR_3)->ns;
}

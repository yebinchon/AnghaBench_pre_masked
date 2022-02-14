
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pid_namespace {struct pid_namespace* parent; } ;
struct ns_common {int dummy; } ;
struct TYPE_4__ {struct ns_common ns; } ;
struct TYPE_3__ {struct pid_namespace* parent; } ;


 int VAR_0 ;
 struct ns_common* FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct pid_namespace*) ;
 struct pid_namespace* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct ns_common*) ;

__attribute__((used)) static struct ns_common *FUNC_4(struct ns_common *VAR_2)
{
 struct pid_namespace *VAR_3 = FUNC_2(VAR_1);
 struct pid_namespace *VAR_4, *VAR_5;


 VAR_4 = VAR_5 = FUNC_3(VAR_2)->parent;
 for (;;) {
  if (!VAR_5)
   return FUNC_0(-VAR_0);
  if (VAR_5 == VAR_3)
   break;
  VAR_5 = VAR_5->parent;
 }

 return &FUNC_1(VAR_4)->ns;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_namespace {scalar_t__ level; struct pid_namespace* parent; int user_ns; } ;
struct nsproxy {int pid_ns_for_children; } ;
struct ns_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct pid_namespace*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 struct pid_namespace* FUNC_4 (int ) ;
 struct pid_namespace* FUNC_5 (struct ns_common*) ;

__attribute__((used)) static int FUNC_6(struct nsproxy *VAR_4, struct ns_common *VAR_5)
{
 struct pid_namespace *VAR_6 = FUNC_4(VAR_3);
 struct pid_namespace *VAR_7, *VAR_8 = FUNC_5(VAR_5);

 if (!FUNC_2(VAR_8->user_ns, VAR_0) ||
     !FUNC_2(FUNC_0(), VAR_0))
  return -VAR_2;
 if (VAR_8->level < VAR_6->level)
  return -VAR_1;

 VAR_7 = VAR_8;
 while (VAR_7->level > VAR_6->level)
  VAR_7 = VAR_7->parent;
 if (VAR_7 != VAR_6)
  return -VAR_1;

 FUNC_3(VAR_4->pid_ns_for_children);
 VAR_4->pid_ns_for_children = FUNC_1(VAR_8);
 return 0;
}

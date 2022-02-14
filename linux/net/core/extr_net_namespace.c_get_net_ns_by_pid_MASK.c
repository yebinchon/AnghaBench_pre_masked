
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct nsproxy* nsproxy; } ;
struct nsproxy {int net_ns; } ;
struct net {int dummy; } ;
typedef int pid_t ;


 struct net* FUNC_0 (int ) ;
 int VAR_0 ;
 struct task_struct* FUNC_1 (int ) ;
 struct net* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct task_struct*) ;

struct net *FUNC_7(pid_t VAR_1)
{
 struct task_struct *VAR_2;
 struct net *VAR_3;


 VAR_3 = FUNC_0(-VAR_0);
 FUNC_3();
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  struct nsproxy *VAR_4;
  FUNC_5(VAR_2);
  VAR_4 = VAR_2->nsproxy;
  if (VAR_4)
   VAR_3 = FUNC_2(VAR_4->net_ns);
  FUNC_6(VAR_2);
 }
 FUNC_4();
 return VAR_3;
}

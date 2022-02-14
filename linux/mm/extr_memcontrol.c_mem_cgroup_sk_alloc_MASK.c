
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {struct mem_cgroup* sk_memcg; } ;
struct mem_cgroup {int css; int tcpmem_active; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 struct mem_cgroup* FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct mem_cgroup* VAR_3 ;

void FUNC_6(struct sock *VAR_4)
{
 struct mem_cgroup *VAR_5;

 if (!VAR_1)
  return;
 if (VAR_4->sk_memcg) {
  FUNC_1(&VAR_4->sk_memcg->css);
  return;
 }

 FUNC_4();
 VAR_5 = FUNC_3(VAR_0);
 if (VAR_5 == VAR_3)
  goto out;
 if (!FUNC_0(VAR_2) && !VAR_5->tcpmem_active)
  goto out;
 if (FUNC_2(&VAR_5->css))
  VAR_4->sk_memcg = VAR_5;
out:
 FUNC_5();
}

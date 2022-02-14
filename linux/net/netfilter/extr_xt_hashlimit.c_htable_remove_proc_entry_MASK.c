
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_hashlimit_htable {scalar_t__ family; int name; int net; } ;
struct proc_dir_entry {int dummy; } ;
struct hashlimit_net {struct proc_dir_entry* ip6t_hashlimit; struct proc_dir_entry* ipt_hashlimit; } ;


 scalar_t__ VAR_0 ;
 struct hashlimit_net* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct proc_dir_entry*) ;

__attribute__((used)) static void FUNC_2(struct xt_hashlimit_htable *VAR_1)
{
 struct hashlimit_net *VAR_2 = FUNC_0(VAR_1->net);
 struct proc_dir_entry *VAR_3;

 if (VAR_1->family == VAR_0)
  VAR_3 = VAR_2->ipt_hashlimit;
 else
  VAR_3 = VAR_2->ip6t_hashlimit;

 if (VAR_3 != ((void*)0))
  FUNC_1(VAR_1->name, VAR_3);
}

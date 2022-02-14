
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct fib_rules_ops {int rules_list; int fro_net; int rule_size; } ;
struct fib_rule {int suppress_prefixlen; int suppress_ifgroup; int list; int uid_range; int fr_net; int proto; void* flags; void* table; void* pref; int action; int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fib_rule* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(struct fib_rules_ops *VAR_5,
    u32 VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct fib_rule *VAR_9;

 VAR_9 = FUNC_0(VAR_5->rule_size, VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 FUNC_2(&VAR_9->refcnt, 1);
 VAR_9->action = VAR_1;
 VAR_9->pref = VAR_6;
 VAR_9->table = VAR_7;
 VAR_9->flags = VAR_8;
 VAR_9->proto = VAR_3;
 VAR_9->fr_net = VAR_5->fro_net;
 VAR_9->uid_range = VAR_4;

 VAR_9->suppress_prefixlen = -1;
 VAR_9->suppress_ifgroup = -1;



 FUNC_1(&VAR_9->list, &VAR_5->rules_list);
 return 0;
}

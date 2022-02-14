
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct notifier_block {int dummy; } ;
struct net {int dummy; } ;
struct fib_entry_notifier_info {int dst_len; int info; int tb_id; int type; int tos; int fi; int dst; } ;
struct fib_alias {int tb_id; int fa_type; int fa_tos; int fa_info; } ;
typedef enum fib_event_type { ____Placeholder_fib_event_type } fib_event_type ;


 int FUNC_0 (struct notifier_block*,struct net*,int,int *) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_0, struct net *VAR_1,
       enum fib_event_type VAR_2, u32 VAR_3,
       int VAR_4, struct fib_alias *VAR_5)
{
 struct fib_entry_notifier_info VAR_6 = {
  .dst = VAR_3,
  .dst_len = VAR_4,
  .fi = VAR_5->fa_info,
  .tos = VAR_5->fa_tos,
  .type = VAR_5->fa_type,
  .tb_id = VAR_5->tb_id,
 };
 return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_6.info);
}

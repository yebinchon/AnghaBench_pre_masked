
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {struct netlink_ext_ack* extack; } ;
struct fib_entry_notifier_info {int dst_len; TYPE_1__ info; int tb_id; int type; int tos; int fi; int dst; } ;
struct fib_alias {int tb_id; int fa_type; int fa_tos; int fa_info; } ;
typedef enum fib_event_type { ____Placeholder_fib_event_type } fib_event_type ;


 int FUNC_0 (struct net*,int,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct net *VAR_0,
        enum fib_event_type VAR_1, u32 VAR_2,
        int VAR_3, struct fib_alias *VAR_4,
        struct netlink_ext_ack *VAR_5)
{
 struct fib_entry_notifier_info VAR_6 = {
  .info.extack = VAR_5,
  .dst = VAR_2,
  .dst_len = VAR_3,
  .fi = VAR_4->fa_info,
  .tos = VAR_4->fa_tos,
  .type = VAR_4->fa_type,
  .tb_id = VAR_4->tb_id,
 };
 return FUNC_0(VAR_0, VAR_1, &VAR_6.info);
}

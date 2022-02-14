
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct netlink_callback {int* args; TYPE_1__* nlh; int skb; } ;
struct dn_zone {int dz_order; } ;
struct dn_fib_table {int n; } ;
struct dn_fib_node {int fn_state; int fn_info; int fn_key; int fn_scope; int fn_type; struct dn_fib_node* fn_next; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ,int ,int ,int ,int ,int *,int ,int ,int ) ;

__attribute__((used)) static __inline__ int FUNC_2(struct sk_buff *VAR_3,
    struct netlink_callback *VAR_4,
    struct dn_fib_table *VAR_5,
    struct dn_zone *VAR_6,
    struct dn_fib_node *VAR_7)
{
 int VAR_8, VAR_9;

 VAR_9 = VAR_4->args[4];
 for(VAR_8 = 0; VAR_7; VAR_8++, VAR_7 = VAR_7->fn_next) {
  if (VAR_8 < VAR_9)
   continue;
  if (VAR_7->fn_state & VAR_0)
   continue;
  if (FUNC_1(VAR_3, FUNC_0(VAR_4->skb).portid,
    VAR_4->nlh->nlmsg_seq,
    VAR_2,
    VAR_5->n,
    (VAR_7->fn_state & VAR_0) ? 0 : VAR_7->fn_type,
    VAR_7->fn_scope, &VAR_7->fn_key, VAR_6->dz_order,
    VAR_7->fn_info, VAR_1) < 0) {
   VAR_4->args[4] = VAR_8;
   return -1;
  }
 }
 VAR_4->args[4] = VAR_8;
 return VAR_3->len;
}

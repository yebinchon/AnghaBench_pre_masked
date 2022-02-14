
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skb_array {int dummy; } ;
struct pfifo_fast_priv {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc {int flags; } ;
struct TYPE_2__ {unsigned int tx_queue_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct skb_array* FUNC_0 (struct pfifo_fast_priv*,int) ;
 TYPE_1__* FUNC_1 (struct Qdisc*) ;
 struct pfifo_fast_priv* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct skb_array*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct Qdisc *VAR_5, struct nlattr *VAR_6,
      struct netlink_ext_ack *VAR_7)
{
 unsigned int VAR_8 = FUNC_1(VAR_5)->tx_queue_len;
 struct pfifo_fast_priv *VAR_9 = FUNC_2(VAR_5);
 int VAR_10;


 if (!VAR_8)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  struct skb_array *VAR_11 = FUNC_0(VAR_9, VAR_10);
  int VAR_12;

  VAR_12 = FUNC_3(VAR_11, VAR_8, VAR_2);
  if (VAR_12)
   return -VAR_1;
 }


 VAR_5->flags |= VAR_4;
 return 0;
}

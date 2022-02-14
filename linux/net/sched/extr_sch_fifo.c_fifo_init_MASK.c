
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tc_fifo_qopt {int limit; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc {int limit; int flags; int * ops; } ;
struct TYPE_3__ {int tx_queue_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tc_fifo_qopt* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_4(struct Qdisc *VAR_3, struct nlattr *VAR_4,
       struct netlink_ext_ack *VAR_5)
{
 bool VAR_6;
 bool VAR_7 = VAR_3->ops == &VAR_2;

 if (VAR_4 == ((void*)0)) {
  u32 VAR_8 = FUNC_3(VAR_3)->tx_queue_len;

  if (VAR_7)
   VAR_8 *= FUNC_2(FUNC_3(VAR_3));

  VAR_3->limit = VAR_8;
 } else {
  struct tc_fifo_qopt *VAR_9 = FUNC_0(VAR_4);

  if (FUNC_1(VAR_4) < sizeof(*VAR_9))
   return -VAR_0;

  VAR_3->limit = VAR_9->limit;
 }

 if (VAR_7)
  VAR_6 = VAR_3->limit >= FUNC_2(FUNC_3(VAR_3));
 else
  VAR_6 = VAR_3->limit >= 1;

 if (VAR_6)
  VAR_3->flags |= VAR_1;
 else
  VAR_3->flags &= ~VAR_1;
 return 0;
}

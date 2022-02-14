
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct table_instance {int dummy; } ;
struct sw_flow {int dummy; } ;
struct sk_buff {int len; int sk; } ;
struct ovs_header {int dp_ifindex; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {void** args; TYPE_2__* nlh; int skb; } ;
struct TYPE_5__ {int ti; } ;
struct datapath {TYPE_1__ table; } ;
struct TYPE_7__ {int portid; } ;
struct TYPE_6__ {int nlmsg_seq; } ;


 int VAR_0 ;
 TYPE_4__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ovs_header* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int *,struct nlattr**,int ,int ,int *) ;
 struct datapath* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (struct sw_flow*,int ,struct sk_buff*,int ,int ,int ,int ,void*) ;
 struct sw_flow* FUNC_6 (struct table_instance*,void**,void**) ;
 void* FUNC_7 (struct nlattr*) ;
 struct table_instance* FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_8, struct netlink_callback *VAR_9)
{
 struct nlattr *VAR_10[VAR_5];
 struct ovs_header *VAR_11 = FUNC_1(FUNC_4(VAR_9->nlh));
 struct table_instance *VAR_12;
 struct datapath *VAR_13;
 u32 VAR_14;
 int VAR_15;

 VAR_15 = FUNC_2(VAR_9->nlh, &VAR_6, VAR_10,
           VAR_2, VAR_7, ((void*)0));
 if (VAR_15)
  return VAR_15;
 VAR_14 = FUNC_7(VAR_10[VAR_3]);

 FUNC_9();
 VAR_13 = FUNC_3(FUNC_11(VAR_8->sk), VAR_11->dp_ifindex);
 if (!VAR_13) {
  FUNC_10();
  return -VAR_0;
 }

 VAR_12 = FUNC_8(VAR_13->table.ti);
 for (;;) {
  struct sw_flow *VAR_16;
  u32 VAR_17, VAR_18;

  VAR_17 = VAR_9->args[0];
  VAR_18 = VAR_9->args[1];
  VAR_16 = FUNC_6(VAR_12, &VAR_17, &VAR_18);
  if (!VAR_16)
   break;

  if (FUNC_5(VAR_16, VAR_11->dp_ifindex, VAR_8,
        FUNC_0(VAR_9->skb).portid,
        VAR_9->nlh->nlmsg_seq, VAR_1,
        VAR_4, VAR_14) < 0)
   break;

  VAR_9->args[0] = VAR_17;
  VAR_9->args[1] = VAR_18;
 }
 FUNC_10();
 return VAR_8->len;
}

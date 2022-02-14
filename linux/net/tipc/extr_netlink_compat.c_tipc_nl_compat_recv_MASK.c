
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tipc_nl_compat_msg {int cmd; TYPE_1__* rep; int net; scalar_t__ req_size; scalar_t__ req; int dst_sk; } ;
struct tipc_genlmsghdr {int cmd; } ;
struct sk_buff {int sk; scalar_t__ data; } ;
struct nlmsghdr {int nlmsg_len; } ;
struct genl_info {int nlhdr; struct tipc_genlmsghdr* userhdr; } ;
typedef int msg ;
struct TYPE_6__ {int portid; } ;
struct TYPE_5__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_4__ FUNC_0 (struct sk_buff*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct genl_info*) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 int FUNC_4 (struct nlmsghdr*,int ,int) ;
 int FUNC_5 (struct tipc_nl_compat_msg*,int ,int) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct nlmsghdr*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_1__*,int) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (struct tipc_nl_compat_msg*) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_10, struct genl_info *VAR_11)
{
 int VAR_12;
 int VAR_13;
 struct tipc_nl_compat_msg VAR_14;
 struct nlmsghdr *VAR_15;
 struct nlmsghdr *VAR_16;
 struct tipc_genlmsghdr *VAR_17 = VAR_11->userhdr;

 FUNC_5(&VAR_14, 0, sizeof(VAR_14));

 VAR_15 = (struct nlmsghdr *)VAR_10->data;
 VAR_14.req = FUNC_8(VAR_15) + VAR_5 + VAR_9;
 VAR_14.cmd = VAR_17->cmd;
 VAR_14.net = FUNC_2(VAR_11);
 VAR_14.dst_sk = VAR_10->sk;

 if ((VAR_14.cmd & 0xC000) && (!FUNC_6(VAR_10, VAR_0))) {
  VAR_14.rep = FUNC_12(VAR_6);
  VAR_12 = -VAR_1;
  goto send;
 }

 VAR_14.req_size = FUNC_7(VAR_15, VAR_5 + VAR_9);
 if (VAR_14.req_size && !FUNC_1(VAR_14.req, VAR_14.req_size)) {
  VAR_14.rep = FUNC_12(VAR_7);
  VAR_12 = -VAR_3;
  goto send;
 }

 VAR_12 = FUNC_13(&VAR_14);
 if ((VAR_12 == -VAR_3) || (VAR_12 == -VAR_4))
  VAR_14.rep = FUNC_12(VAR_7);
 else if (VAR_12 == -VAR_2)
  VAR_14.rep = FUNC_12(VAR_8);
send:
 if (!VAR_14.rep)
  return VAR_12;

 VAR_13 = FUNC_10(VAR_5 + VAR_9);
 FUNC_11(VAR_14.rep, VAR_13);
 VAR_16 = FUNC_9(VAR_14.rep);
 FUNC_4(VAR_16, VAR_11->nlhdr, VAR_13);
 VAR_16->nlmsg_len = VAR_14.rep->len;
 FUNC_3(VAR_14.net, VAR_14.rep, FUNC_0(VAR_10).portid);

 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct nlmsghdr {int dummy; } ;
struct ndmsg {int ndm_state; int ndm_ifindex; scalar_t__ ndm_type; int ndm_flags; scalar_t__ ndm_pad2; scalar_t__ ndm_pad1; int ndm_family; } ;
struct dsa_slave_dump_ctx {scalar_t__ idx; int skb; TYPE_3__* dev; TYPE_2__* cb; } ;
struct TYPE_8__ {int portid; } ;
struct TYPE_7__ {int ifindex; } ;
struct TYPE_6__ {scalar_t__* args; TYPE_1__* nlh; int skb; } ;
struct TYPE_5__ {int nlmsg_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ,int ,int ,unsigned char const*) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,struct nlmsghdr*) ;
 struct ndmsg* FUNC_4 (struct nlmsghdr*) ;
 int FUNC_5 (int ,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_6 (int ,int ,int ,int ,int,int ) ;

__attribute__((used)) static int
FUNC_7(const unsigned char *VAR_10, u16 VAR_11,
      bool VAR_12, void *VAR_13)
{
 struct dsa_slave_dump_ctx *VAR_14 = VAR_13;
 u32 VAR_15 = FUNC_0(VAR_14->cb->skb).portid;
 u32 VAR_16 = VAR_14->cb->nlh->nlmsg_seq;
 struct nlmsghdr *VAR_17;
 struct ndmsg *VAR_18;

 if (VAR_14->idx < VAR_14->cb->args[2])
  goto skip;

 VAR_17 = FUNC_6(VAR_14->skb, VAR_15, VAR_16, VAR_9,
   sizeof(*VAR_18), VAR_5);
 if (!VAR_17)
  return -VAR_1;

 VAR_18 = FUNC_4(VAR_17);
 VAR_18->ndm_family = VAR_0;
 VAR_18->ndm_pad1 = 0;
 VAR_18->ndm_pad2 = 0;
 VAR_18->ndm_flags = VAR_6;
 VAR_18->ndm_type = 0;
 VAR_18->ndm_ifindex = VAR_14->dev->ifindex;
 VAR_18->ndm_state = VAR_12 ? VAR_7 : VAR_8;

 if (FUNC_1(VAR_14->skb, VAR_3, VAR_2, VAR_10))
  goto nla_put_failure;

 if (VAR_11 && FUNC_2(VAR_14->skb, VAR_4, VAR_11))
  goto nla_put_failure;

 FUNC_5(VAR_14->skb, VAR_17);

skip:
 VAR_14->idx++;
 return 0;

nla_put_failure:
 FUNC_3(VAR_14->skb, VAR_17);
 return -VAR_1;
}

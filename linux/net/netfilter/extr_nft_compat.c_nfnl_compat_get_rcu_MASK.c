
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_type; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct nfgenmsg {int nfgen_family; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int portid; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;


 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sock*,struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int ,int ,int,char const*,int,int) ;
 char* FUNC_6 (struct nlattr const* const) ;
 int FUNC_7 (struct nlattr const* const) ;
 struct nfgenmsg* FUNC_8 (struct nlmsghdr const*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char const*,char const*) ;
 int FUNC_16 (int,char const*,void*,int,int*) ;

__attribute__((used)) static int FUNC_17(struct net *VAR_12, struct sock *VAR_13,
          struct sk_buff *VAR_14, const struct nlmsghdr *VAR_15,
          const struct nlattr * const VAR_16[],
          struct netlink_ext_ack *VAR_17)
{
 int VAR_18 = 0, VAR_19;
 struct nfgenmsg *VAR_20;
 const char *VAR_21;
 const char *VAR_22;
 u32 VAR_23;
 struct sk_buff *VAR_24;

 if (VAR_16[VAR_7] == ((void*)0) ||
     VAR_16[VAR_8] == ((void*)0) ||
     VAR_16[VAR_9] == ((void*)0))
  return -VAR_1;

 VAR_22 = FUNC_6(VAR_16[VAR_7]);
 VAR_23 = FUNC_10(FUNC_7(VAR_16[VAR_8]));
 VAR_19 = FUNC_10(FUNC_7(VAR_16[VAR_9]));

 VAR_20 = FUNC_8(VAR_15);

 switch(VAR_20->nfgen_family) {
 case 131:
  VAR_21 = "ipt_%s";
  break;
 case 130:
  VAR_21 = "ip6t_%s";
  break;
 case 128:
  VAR_21 = "ebt_%s";
  break;
 case 129:
  VAR_21 = "arpt_%s";
  break;
 default:
  FUNC_11("nft_compat: unsupported protocol %d\n",
   VAR_20->nfgen_family);
  return -VAR_1;
 }

 if (!FUNC_14(VAR_11))
  return -VAR_1;

 FUNC_13();
 FUNC_15(FUNC_16(VAR_20->nfgen_family, VAR_22,
       VAR_23, VAR_19, &VAR_18),
       VAR_21, VAR_22);
 if (VAR_18 < 0)
  goto out_put;

 VAR_24 = FUNC_9(VAR_10, VAR_4);
 if (VAR_24 == ((void*)0)) {
  VAR_18 = -VAR_3;
  goto out_put;
 }


 if (FUNC_5(VAR_24, FUNC_0(VAR_14).portid,
      VAR_15->nlmsg_seq,
      FUNC_1(VAR_15->nlmsg_type),
      VAR_6,
      VAR_20->nfgen_family,
      VAR_22, VAR_18, VAR_19) <= 0) {
  FUNC_2(VAR_24);
  goto out_put;
 }

 VAR_18 = FUNC_4(VAR_13, VAR_24, FUNC_0(VAR_14).portid,
    VAR_5);
 if (VAR_18 > 0)
  VAR_18 = 0;
out_put:
 FUNC_12();
 FUNC_3(VAR_11);
 return VAR_18 == -VAR_0 ? -VAR_2 : VAR_18;
}

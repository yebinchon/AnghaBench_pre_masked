
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef void* u_int16_t ;
typedef int u16 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nfulnl_msg_config_mode {int copy_range; int copy_mode; } ;
struct nfulnl_msg_config_cmd {int command; } ;
struct nfulnl_instance {scalar_t__ peer_portid; } ;
struct nfnl_log_net {int dummy; } ;
struct nfgenmsg {int nfgen_family; int res_id; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ portid; int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nfulnl_instance*) ;
 TYPE_1__ FUNC_1 (struct sk_buff*) ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;




 int VAR_13 ;
 int FUNC_2 (struct nfulnl_instance*) ;
 struct nfulnl_instance* FUNC_3 (struct net*,void*,scalar_t__,int ) ;
 int FUNC_4 (struct nfnl_log_net*,struct nfulnl_instance*) ;
 struct nfulnl_instance* FUNC_5 (struct nfnl_log_net*,void*) ;
 int FUNC_6 (struct nfulnl_instance*) ;
 int FUNC_7 (struct net*,int ,int *) ;
 int FUNC_8 (struct net*,int ) ;
 int VAR_14 ;
 int FUNC_9 (int ) ;
 struct nfnl_log_net* FUNC_10 (struct net*) ;
 int FUNC_11 (int ) ;
 int VAR_15 ;
 int FUNC_12 (struct nfulnl_instance*,int) ;
 int FUNC_13 (struct nfulnl_instance*,int ,int ) ;
 int FUNC_14 (struct nfulnl_instance*,int ) ;
 int FUNC_15 (struct nfulnl_instance*,int ) ;
 int FUNC_16 (struct nfulnl_instance*,int ) ;
 void* FUNC_17 (struct nlattr const* const) ;
 int FUNC_18 (struct nlattr const* const) ;
 int FUNC_19 (struct nlattr const* const) ;
 struct nfgenmsg* FUNC_20 (struct nlmsghdr const*) ;
 int FUNC_21 (int ) ;
 void* FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (int ) ;

__attribute__((used)) static int FUNC_26(struct net *VAR_16, struct sock *VAR_17,
         struct sk_buff *VAR_18, const struct nlmsghdr *VAR_19,
         const struct nlattr * const VAR_20[],
         struct netlink_ext_ack *VAR_21)
{
 struct nfgenmsg *VAR_22 = FUNC_20(VAR_19);
 u_int16_t VAR_23 = FUNC_22(VAR_22->res_id);
 struct nfulnl_instance *VAR_24;
 struct nfulnl_msg_config_cmd *VAR_25 = ((void*)0);
 struct nfnl_log_net *VAR_26 = FUNC_10(VAR_16);
 int VAR_27 = 0;
 u16 VAR_28 = 0;

 if (VAR_20[VAR_7]) {
  u_int8_t VAR_29 = VAR_22->nfgen_family;
  VAR_25 = FUNC_17(VAR_20[VAR_7]);


  switch (VAR_25->command) {
  case 130:
   return FUNC_7(VAR_16, VAR_29, &VAR_15);
  case 129:
   FUNC_8(VAR_16, VAR_29);
   return 0;
  }
 }

 VAR_24 = FUNC_5(VAR_26, VAR_23);
 if (VAR_24 && VAR_24->peer_portid != FUNC_1(VAR_18).portid) {
  VAR_27 = -VAR_5;
  goto out_put;
 }




 if (VAR_20[VAR_8]) {
  VAR_28 = FUNC_22(FUNC_18(VAR_20[VAR_8]));

  if ((VAR_28 & VAR_13) &&
      !FUNC_23(VAR_14)) {
   VAR_27 = -VAR_4;
   goto out_put;
  }
 }

 if (VAR_25 != ((void*)0)) {
  switch (VAR_25->command) {
  case 131:
   if (VAR_24) {
    VAR_27 = -VAR_1;
    goto out_put;
   }

   VAR_24 = FUNC_3(VAR_16, VAR_23,
            FUNC_1(VAR_18).portid,
            FUNC_25(FUNC_1(VAR_18).sk));
   if (FUNC_0(VAR_24)) {
    VAR_27 = FUNC_2(VAR_24);
    goto out;
   }
   break;
  case 128:
   if (!VAR_24) {
    VAR_27 = -VAR_2;
    goto out;
   }

   FUNC_4(VAR_26, VAR_24);
   goto out_put;
  default:
   VAR_27 = -VAR_3;
   goto out_put;
  }
 } else if (!VAR_24) {
  VAR_27 = -VAR_2;
  goto out;
 }

 if (VAR_20[VAR_9]) {
  struct nfulnl_msg_config_mode *VAR_30 =
   FUNC_17(VAR_20[VAR_9]);

  FUNC_13(VAR_24, VAR_30->copy_mode,
    FUNC_21(VAR_30->copy_range));
 }

 if (VAR_20[VAR_12]) {
  __be32 VAR_31 = FUNC_19(VAR_20[VAR_12]);

  FUNC_16(VAR_24, FUNC_21(VAR_31));
 }

 if (VAR_20[VAR_10]) {
  __be32 VAR_32 = FUNC_19(VAR_20[VAR_10]);

  FUNC_14(VAR_24, FUNC_21(VAR_32));
 }

 if (VAR_20[VAR_11]) {
  __be32 VAR_33 = FUNC_19(VAR_20[VAR_11]);

  FUNC_15(VAR_24, FUNC_21(VAR_33));
 }

 if (VAR_20[VAR_8])
  FUNC_12(VAR_24, VAR_28);

out_put:
 FUNC_6(VAR_24);
out:
 return VAR_27;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int ifindex; } ;
struct hsr_priv {int dummy; } ;
struct hsr_port {TYPE_1__* dev; } ;
struct genl_info {int snd_portid; struct nlattr** attrs; int snd_seq; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_2__ FUNC_0 (struct sk_buff*) ;
 int VAR_17 ;
 struct net_device* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct genl_info*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 void* FUNC_5 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_6 (int ,struct sk_buff*,int ) ;
 int VAR_18 ;
 int FUNC_7 (struct hsr_priv*,unsigned char*,unsigned char*,int*,int*,int *,int*,int *) ;
 struct hsr_port* FUNC_8 (struct hsr_priv*,int ) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct sk_buff*) ;
 struct hsr_priv* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct sk_buff*,int ,int ,int *) ;
 unsigned char* FUNC_13 (struct nlattr*) ;
 int FUNC_14 (struct nlattr*) ;
 int FUNC_15 (struct sk_buff*,size_t,int,unsigned char*) ;
 int FUNC_16 (struct sk_buff*,int ,int ) ;
 int FUNC_17 (struct sk_buff*,size_t,int) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 () ;
 int FUNC_20 () ;

__attribute__((used)) static int FUNC_21(struct sk_buff *VAR_19, struct genl_info *VAR_20)
{

 struct nlattr *VAR_21;
 struct net_device *VAR_22;


 struct sk_buff *VAR_23;
 void *VAR_24;
 struct hsr_priv *VAR_25;
 struct hsr_port *VAR_26;
 unsigned char VAR_27[VAR_2];
 int VAR_28;
 u16 VAR_29;
 int VAR_30;
 u16 VAR_31;
 int VAR_32;
 int VAR_33;

 if (!VAR_20)
  goto invalid;

 VAR_21 = VAR_20->attrs[VAR_11];
 if (!VAR_21)
  goto invalid;
 VAR_21 = VAR_20->attrs[VAR_12];
 if (!VAR_21)
  goto invalid;

 VAR_22 = FUNC_1(FUNC_2(VAR_20),
         FUNC_14(VAR_20->attrs[VAR_11]));
 if (!VAR_22)
  goto invalid;
 if (!FUNC_9(VAR_22))
  goto invalid;


 VAR_23 = FUNC_4(VAR_17, VAR_3);
 if (!VAR_23) {
  VAR_33 = -VAR_1;
  goto fail;
 }

 VAR_24 = FUNC_5(VAR_23, FUNC_0(VAR_19).portid,
          VAR_20->snd_seq, &VAR_18, 0,
          VAR_14);
 if (!VAR_24) {
  VAR_33 = -VAR_1;
  goto nla_put_failure;
 }

 VAR_33 = FUNC_17(VAR_23, VAR_11, VAR_22->ifindex);
 if (VAR_33 < 0)
  goto nla_put_failure;

 VAR_25 = FUNC_11(VAR_22);
 VAR_33 = FUNC_7(VAR_25,
    (unsigned char *)
    FUNC_13(VAR_20->attrs[VAR_12]),
      VAR_27,
      &VAR_32,
      &VAR_28,
      &VAR_29,
      &VAR_30,
      &VAR_31);
 if (VAR_33 < 0)
  goto nla_put_failure;

 VAR_33 = FUNC_15(VAR_23, VAR_12, VAR_2,
        FUNC_13(VAR_20->attrs[VAR_12]));
 if (VAR_33 < 0)
  goto nla_put_failure;

 if (VAR_32 > -1) {
  VAR_33 = FUNC_15(VAR_23, VAR_13, VAR_2,
         VAR_27);
  if (VAR_33 < 0)
   goto nla_put_failure;

  VAR_33 = FUNC_17(VAR_23, VAR_4,
      VAR_32);
  if (VAR_33 < 0)
   goto nla_put_failure;
 }

 VAR_33 = FUNC_17(VAR_23, VAR_5, VAR_28);
 if (VAR_33 < 0)
  goto nla_put_failure;
 VAR_33 = FUNC_16(VAR_23, VAR_7, VAR_29);
 if (VAR_33 < 0)
  goto nla_put_failure;
 FUNC_19();
 VAR_26 = FUNC_8(VAR_25, VAR_15);
 if (VAR_26)
  VAR_33 = FUNC_17(VAR_23, VAR_6,
      VAR_26->dev->ifindex);
 FUNC_20();
 if (VAR_33 < 0)
  goto nla_put_failure;

 VAR_33 = FUNC_17(VAR_23, VAR_8, VAR_30);
 if (VAR_33 < 0)
  goto nla_put_failure;
 VAR_33 = FUNC_16(VAR_23, VAR_10, VAR_31);
 if (VAR_33 < 0)
  goto nla_put_failure;
 FUNC_19();
 VAR_26 = FUNC_8(VAR_25, VAR_16);
 if (VAR_26)
  VAR_33 = FUNC_17(VAR_23, VAR_9,
      VAR_26->dev->ifindex);
 FUNC_20();
 if (VAR_33 < 0)
  goto nla_put_failure;

 FUNC_3(VAR_23, VAR_24);
 FUNC_6(FUNC_2(VAR_20), VAR_23, VAR_20->snd_portid);

 return 0;

invalid:
 FUNC_12(VAR_19, FUNC_18(VAR_19), -VAR_0, ((void*)0));
 return 0;

nla_put_failure:
 FUNC_10(VAR_23);


fail:
 return VAR_33;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct hsr_priv {int dummy; } ;
struct hsr_port {TYPE_1__* dev; } ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,struct sk_buff*,int ,int ,int ) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int VAR_7 ;
 struct hsr_port* FUNC_4 (struct hsr_priv*,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (struct sk_buff*,int ,int ,unsigned char*) ;
 int FUNC_8 (struct sk_buff*,int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

void FUNC_11(struct hsr_priv *VAR_8, unsigned char VAR_9[VAR_0],
        struct hsr_port *VAR_10)
{
 struct sk_buff *VAR_11;
 void *VAR_12;
 struct hsr_port *VAR_13;
 int VAR_14;

 VAR_11 = FUNC_2(VAR_6, VAR_1);
 if (!VAR_11)
  goto fail;

 VAR_12 = FUNC_3(VAR_11, 0, 0, &VAR_7, 0,
          VAR_4);
 if (!VAR_12)
  goto nla_put_failure;

 VAR_14 = FUNC_7(VAR_11, VAR_3, VAR_0, VAR_9);
 if (VAR_14 < 0)
  goto nla_put_failure;

 VAR_14 = FUNC_8(VAR_11, VAR_2, VAR_10->dev->ifindex);
 if (VAR_14 < 0)
  goto nla_put_failure;

 FUNC_0(VAR_11, VAR_12);
 FUNC_1(&VAR_7, VAR_11, 0, 0, VAR_1);

 return;

nla_put_failure:
 FUNC_5(VAR_11);

fail:
 FUNC_9();
 VAR_13 = FUNC_4(VAR_8, VAR_5);
 FUNC_6(VAR_13->dev, "Could not send HSR ring error message\n");
 FUNC_10();
}

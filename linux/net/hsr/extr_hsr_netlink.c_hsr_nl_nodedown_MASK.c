
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hsr_priv {int dummy; } ;
struct hsr_port {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,struct sk_buff*,int ,int ,int ) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int VAR_6 ;
 struct hsr_port* FUNC_4 (struct hsr_priv*,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct sk_buff*,int ,int ,unsigned char*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

void FUNC_10(struct hsr_priv *VAR_7, unsigned char VAR_8[VAR_0])
{
 struct sk_buff *VAR_9;
 void *VAR_10;
 struct hsr_port *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_2(VAR_5, VAR_1);
 if (!VAR_9)
  goto fail;

 VAR_10 = FUNC_3(VAR_9, 0, 0, &VAR_6, 0, VAR_3);
 if (!VAR_10)
  goto nla_put_failure;

 VAR_12 = FUNC_7(VAR_9, VAR_2, VAR_0, VAR_8);
 if (VAR_12 < 0)
  goto nla_put_failure;

 FUNC_0(VAR_9, VAR_10);
 FUNC_1(&VAR_6, VAR_9, 0, 0, VAR_1);

 return;

nla_put_failure:
 FUNC_5(VAR_9);

fail:
 FUNC_8();
 VAR_11 = FUNC_4(VAR_7, VAR_4);
 FUNC_6(VAR_11->dev, "Could not send HSR node down\n");
 FUNC_9();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nfc_llcp_local {int dummy; } ;
struct nfc_dev {int dev; } ;
struct genl_info {int snd_seq; int snd_portid; int * attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*,struct genl_info*) ;
 int FUNC_3 (struct sk_buff*,struct nfc_llcp_local*,int ,int ) ;
 struct nfc_dev* FUNC_4 (int ) ;
 struct nfc_llcp_local* FUNC_5 (struct nfc_dev*) ;
 int FUNC_6 (struct nfc_dev*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_7, struct genl_info *VAR_8)
{
 struct nfc_dev *VAR_9;
 struct nfc_llcp_local *VAR_10;
 int VAR_11 = 0;
 struct sk_buff *VAR_12 = ((void*)0);
 u32 VAR_13;

 if (!VAR_8->attrs[VAR_4] ||
     !VAR_8->attrs[VAR_5])
  return -VAR_0;

 VAR_13 = FUNC_7(VAR_8->attrs[VAR_4]);

 VAR_9 = FUNC_4(VAR_13);
 if (!VAR_9)
  return -VAR_1;

 FUNC_0(&VAR_9->dev);

 VAR_10 = FUNC_5(VAR_9);
 if (!VAR_10) {
  VAR_11 = -VAR_1;
  goto exit;
 }

 VAR_12 = FUNC_9(VAR_6, VAR_3);
 if (!VAR_12) {
  VAR_11 = -VAR_2;
  goto exit;
 }

 VAR_11 = FUNC_3(VAR_12, VAR_10, VAR_8->snd_portid, VAR_8->snd_seq);

exit:
 FUNC_1(&VAR_9->dev);

 FUNC_6(VAR_9);

 if (VAR_11 < 0) {
  if (VAR_12)
   FUNC_8(VAR_12);

  return VAR_11;
 }

 return FUNC_2(VAR_12, VAR_8);
}

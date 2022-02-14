
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nfc_dev {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; int * attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,struct genl_info*) ;
 int FUNC_1 (struct sk_buff*,struct nfc_dev*,int ,int ,int *,int ) ;
 struct nfc_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct nfc_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_7, struct genl_info *VAR_8)
{
 struct sk_buff *VAR_9;
 struct nfc_dev *VAR_10;
 u32 VAR_11;
 int VAR_12 = -VAR_1;

 if (!VAR_8->attrs[VAR_5])
  return -VAR_0;

 VAR_11 = FUNC_4(VAR_8->attrs[VAR_5]);

 VAR_10 = FUNC_2(VAR_11);
 if (!VAR_10)
  return -VAR_2;

 VAR_9 = FUNC_6(VAR_6, VAR_4);
 if (!VAR_9) {
  VAR_12 = -VAR_3;
  goto out_putdev;
 }

 VAR_12 = FUNC_1(VAR_9, VAR_10, VAR_8->snd_portid, VAR_8->snd_seq,
      ((void*)0), 0);
 if (VAR_12 < 0)
  goto out_free;

 FUNC_3(VAR_10);

 return FUNC_0(VAR_9, VAR_8);

out_free:
 FUNC_5(VAR_9);
out_putdev:
 FUNC_3(VAR_10);
 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nfc_dev {int dummy; } ;
struct genl_info {int * attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nfc_dev*,int ,int ) ;
 int FUNC_1 (struct nfc_dev*,int ,int ) ;
 struct nfc_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct nfc_dev*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 struct nfc_dev *VAR_8;
 u32 VAR_9, VAR_10, VAR_11;
 int VAR_12;

 if (!VAR_7->attrs[VAR_2] ||
     !VAR_7->attrs[VAR_4] ||
     !VAR_7->attrs[VAR_3])
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_7->attrs[VAR_2]);

 VAR_8 = FUNC_2(VAR_9);
 if (!VAR_8)
  return -VAR_1;

 VAR_10 = FUNC_4(VAR_7->attrs[VAR_4]);
 VAR_11 = FUNC_4(VAR_7->attrs[VAR_3]);

 FUNC_1(VAR_8, VAR_10, VAR_5);
 VAR_12 = FUNC_0(VAR_8, VAR_10, VAR_11);

 FUNC_3(VAR_8);
 return VAR_12;
}

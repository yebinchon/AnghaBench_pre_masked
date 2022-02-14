
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
 int VAR_4 ;
 int FUNC_0 (struct nfc_dev*,int ,int ) ;
 struct nfc_dev* FUNC_1 (int ) ;
 int FUNC_2 (struct nfc_dev*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_5,
          struct genl_info *VAR_6)
{
 struct nfc_dev *VAR_7;
 u32 VAR_8, VAR_9;
 int VAR_10;

 if (!VAR_6->attrs[VAR_2] ||
     !VAR_6->attrs[VAR_3])
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_6->attrs[VAR_2]);

 VAR_7 = FUNC_1(VAR_8);
 if (!VAR_7)
  return -VAR_1;

 VAR_9 = FUNC_3(VAR_6->attrs[VAR_3]);

 VAR_10 = FUNC_0(VAR_7, VAR_9, VAR_4);

 FUNC_2(VAR_7);
 return VAR_10;
}

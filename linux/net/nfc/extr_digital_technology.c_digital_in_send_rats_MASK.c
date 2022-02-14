
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfc_target {int dummy; } ;
struct nfc_digital_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nfc_digital_dev*,struct sk_buff*,int,int ,struct nfc_target*) ;
 struct sk_buff* FUNC_1 (struct nfc_digital_dev*,int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_4(struct nfc_digital_dev *VAR_4,
    struct nfc_target *VAR_5)
{
 int VAR_6;
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_1(VAR_4, 2);
 if (!VAR_7)
  return -VAR_2;

 FUNC_3(VAR_7, VAR_0);
 FUNC_3(VAR_7, VAR_1);

 VAR_6 = FUNC_0(VAR_4, VAR_7, 30, VAR_3,
     VAR_5);
 if (VAR_6)
  FUNC_2(VAR_7);

 return VAR_6;
}

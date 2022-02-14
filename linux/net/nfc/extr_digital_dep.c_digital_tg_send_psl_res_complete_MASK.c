
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct sk_buff {int dummy; } ;
struct nfc_digital_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct nfc_digital_dev*,int ,unsigned long) ;
 int FUNC_3 (struct nfc_digital_dev*,int,int ,int *) ;
 int VAR_1 ;
 int FUNC_4 (struct nfc_digital_dev*,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct nfc_digital_dev *VAR_2,
          void *VAR_3, struct sk_buff *VAR_4)
{
 u8 VAR_5 = (unsigned long)VAR_3;

 if (FUNC_0(VAR_4))
  return;

 FUNC_4(VAR_2, VAR_5);

 FUNC_2(VAR_2, VAR_0, VAR_5);

 FUNC_3(VAR_2, 1500, VAR_1, ((void*)0));

 FUNC_1(VAR_4);
}

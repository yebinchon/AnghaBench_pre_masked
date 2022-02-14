
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_digital_dev {int saved_skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfc_digital_dev*,int ,int,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct nfc_digital_dev *VAR_2)
{
 int VAR_3;

 if (!VAR_2->saved_skb)
  return -VAR_0;

 FUNC_2(VAR_2->saved_skb);

 VAR_3 = FUNC_0(VAR_2, VAR_2->saved_skb, 1500,
     VAR_1, ((void*)0));
 if (VAR_3)
  FUNC_1(VAR_2->saved_skb);

 return VAR_3;
}

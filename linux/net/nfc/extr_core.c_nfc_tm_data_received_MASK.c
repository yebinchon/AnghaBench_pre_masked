
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfc_dev {int dep_link_up; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nfc_dev*,struct sk_buff*) ;

int FUNC_2(struct nfc_dev *VAR_1, struct sk_buff *VAR_2)
{

 if (VAR_1->dep_link_up == 0) {
  FUNC_0(VAR_2);
  return -VAR_0;
 }

 return FUNC_1(VAR_1, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; int* data; } ;
struct nfc_digital_dev {scalar_t__ target_fsc; int curr_nfc_dep_pni; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*,int) ;

int FUNC_2(struct nfc_digital_dev *VAR_2,
    struct sk_buff *VAR_3)
{




 if (VAR_3->len + 3 > VAR_2->target_fsc)
  return -VAR_1;

 FUNC_1(VAR_3, 1);

 *VAR_3->data = VAR_0 | VAR_2->curr_nfc_dep_pni;

 VAR_2->curr_nfc_dep_pni =
  FUNC_0(VAR_2->curr_nfc_dep_pni + 1);

 return 0;
}

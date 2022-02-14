
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; int * data; } ;
struct nfc_target {int dummy; } ;
struct nfc_digital_dev {scalar_t__ curr_nfc_dep_pni; int target_fsc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int * VAR_3 ;
 int FUNC_4 (struct nfc_digital_dev*) ;
 int FUNC_5 (struct nfc_digital_dev*,struct nfc_target*,int ) ;
 int FUNC_6 (struct nfc_target*) ;

__attribute__((used)) static void FUNC_7(struct nfc_digital_dev *VAR_4, void *VAR_5,
    struct sk_buff *VAR_6)
{
 struct nfc_target *VAR_7 = VAR_5;
 u8 VAR_8;
 int VAR_9;

 if (FUNC_1(VAR_6)) {
  VAR_9 = FUNC_2(VAR_6);
  VAR_6 = ((void*)0);
  goto exit;
 }

 if (VAR_6->len < 2) {
  VAR_9 = -VAR_1;
  goto exit;
 }

 VAR_8 = FUNC_0(VAR_6->data[1]);
 if (VAR_8 >= 8)
  VAR_4->target_fsc = VAR_0;
 else
  VAR_4->target_fsc = VAR_3[VAR_8];

 VAR_4->curr_nfc_dep_pni = 0;

 VAR_9 = FUNC_5(VAR_4, VAR_7, VAR_2);

exit:
 FUNC_3(VAR_6);
 FUNC_6(VAR_7);

 if (VAR_9)
  FUNC_4(VAR_4);
}

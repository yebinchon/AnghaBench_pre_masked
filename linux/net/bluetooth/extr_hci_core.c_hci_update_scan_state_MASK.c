
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int cur_adv_instance; int name; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (struct hci_dev*) ;

__attribute__((used)) static void FUNC_8(struct hci_dev *VAR_8, u8 VAR_9)
{
 bool VAR_10, VAR_11;

 FUNC_0("%s scan 0x%02x", VAR_8->name, VAR_9);

 if ((VAR_9 & VAR_7))
  VAR_10 = !FUNC_4(VAR_8,
         VAR_1);
 else
  VAR_10 = FUNC_3(VAR_8,
          VAR_1);

 if ((VAR_9 & VAR_6)) {
  VAR_11 = !FUNC_4(VAR_8,
           VAR_2);
 } else {
  FUNC_1(VAR_8, VAR_4);
  VAR_11 = FUNC_3(VAR_8,
            VAR_2);
 }

 if (!FUNC_5(VAR_8, VAR_5))
  return;

 if (VAR_10 || VAR_11) {

  FUNC_2(VAR_8, VAR_0);

  if (FUNC_5(VAR_8, VAR_3))
   FUNC_6(VAR_8, VAR_8->cur_adv_instance);

  FUNC_7(VAR_8);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct nfc_hci_dev {size_t* gate2pipe; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct nfc_hci_dev*,size_t) ;
 int FUNC_1 (struct nfc_hci_dev*,size_t) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct nfc_hci_dev *VAR_4, u8 VAR_5)
{
 int VAR_6;
 u8 VAR_7 = VAR_4->gate2pipe[VAR_5];

 FUNC_2("\n");

 if (VAR_7 == VAR_2)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_4, VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_7 != VAR_3 && VAR_7 != VAR_1) {
  VAR_6 = FUNC_1(VAR_4, VAR_7);
  if (VAR_6 < 0)
   return VAR_6;
 }

 VAR_4->gate2pipe[VAR_5] = VAR_2;

 return 0;
}

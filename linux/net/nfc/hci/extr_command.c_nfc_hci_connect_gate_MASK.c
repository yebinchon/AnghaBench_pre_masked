
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct nfc_hci_dev {size_t* gate2pipe; TYPE_1__* pipes; } ;
struct TYPE_2__ {size_t gate; size_t dest_host; } ;


 int VAR_0 ;

 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

 size_t VAR_4 ;
 size_t FUNC_0 (struct nfc_hci_dev*,size_t,size_t,int*) ;
 scalar_t__ FUNC_1 (struct nfc_hci_dev*,size_t) ;
 int FUNC_2 (struct nfc_hci_dev*,size_t) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct nfc_hci_dev *VAR_5, u8 VAR_6, u8 VAR_7,
    u8 VAR_8)
{
 bool VAR_9 = 0;
 int VAR_10;

 FUNC_3("\n");

 if (VAR_8 == VAR_2)
  return 0;

 if (VAR_5->gate2pipe[VAR_7] != VAR_3)
  return -VAR_0;

 if (VAR_8 != VAR_3)
  goto open_pipe;

 switch (VAR_7) {
 case 128:
  VAR_8 = VAR_4;
  break;
 case 129:
  VAR_8 = VAR_1;
  break;
 default:
  VAR_8 = FUNC_0(VAR_5, VAR_6, VAR_7, &VAR_10);
  if (VAR_8 == VAR_3)
   return VAR_10;
  VAR_9 = 1;
  break;
 }

open_pipe:
 VAR_10 = FUNC_2(VAR_5, VAR_8);
 if (VAR_10 < 0) {
  if (VAR_9)
   if (FUNC_1(VAR_5, VAR_8) < 0) {


   }
  return VAR_10;
 }

 VAR_5->pipes[VAR_8].gate = VAR_7;
 VAR_5->pipes[VAR_8].dest_host = VAR_6;
 VAR_5->gate2pipe[VAR_7] = VAR_8;

 return 0;
}

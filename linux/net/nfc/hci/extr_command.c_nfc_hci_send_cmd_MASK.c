
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sk_buff {int dummy; } ;
struct nfc_hci_dev {size_t* gate2pipe; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct nfc_hci_dev*,size_t,size_t,size_t const*,size_t,struct sk_buff**) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct nfc_hci_dev *VAR_2, u8 VAR_3, u8 VAR_4,
       const u8 *VAR_5, size_t VAR_6, struct sk_buff **VAR_7)
{
 u8 VAR_8;

 FUNC_1("\n");

 VAR_8 = VAR_2->gate2pipe[VAR_3];
 if (VAR_8 == VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_8, VAR_4, VAR_5, VAR_6, VAR_7);
}

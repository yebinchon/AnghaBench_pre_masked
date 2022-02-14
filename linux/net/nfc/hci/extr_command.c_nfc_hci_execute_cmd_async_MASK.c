
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfc_hci_dev {int dummy; } ;
typedef int data_exchange_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfc_hci_dev*,int ,int ,int ,int const*,size_t,int ,void*,int ) ;
 int FUNC_1 (char*,int ,int ,size_t) ;

__attribute__((used)) static int FUNC_2(struct nfc_hci_dev *VAR_2, u8 VAR_3, u8 VAR_4,
          const u8 *VAR_5, size_t VAR_6,
          data_exchange_cb_t VAR_7, void *VAR_8)
{
 FUNC_1("exec cmd async through pipe=%d, cmd=%d, plen=%zd\n", VAR_3,
   VAR_4, VAR_6);




 return FUNC_0(VAR_2, VAR_3, VAR_1, VAR_4,
          VAR_5, VAR_6, VAR_7, VAR_8, VAR_0);
}

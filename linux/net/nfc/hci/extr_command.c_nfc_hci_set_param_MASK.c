
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int const*,size_t) ;
 int FUNC_3 (struct nfc_hci_dev*,int ,int ,int *,size_t,int *) ;
 int FUNC_4 (char*,int ,int ) ;

int FUNC_5(struct nfc_hci_dev *VAR_3, u8 VAR_4, u8 VAR_5,
        const u8 *VAR_6, size_t VAR_7)
{
 int VAR_8;
 u8 *VAR_9;
 FUNC_4("idx=%d to gate %d\n", VAR_5, VAR_4);

 VAR_9 = FUNC_1(1 + VAR_7, VAR_1);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 *VAR_9 = VAR_5;
 FUNC_2(VAR_9 + 1, VAR_6, VAR_7);

 VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_2,
        VAR_9, VAR_7 + 1, ((void*)0));

 FUNC_0(VAR_9);

 return VAR_8;
}

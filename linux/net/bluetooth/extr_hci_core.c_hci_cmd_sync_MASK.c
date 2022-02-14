
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct hci_dev {int flags; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_1 ;
 struct sk_buff* FUNC_1 (struct hci_dev*,int ,int ,void const*,int ) ;
 int FUNC_2 (struct hci_dev*,char*,int ,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (int ,int *) ;

struct sk_buff *FUNC_6(struct hci_dev *VAR_2, u16 VAR_3, u32 VAR_4,
        const void *VAR_5, u32 VAR_6)
{
 struct sk_buff *VAR_7;

 if (!FUNC_5(VAR_1, &VAR_2->flags))
  return FUNC_0(-VAR_0);

 FUNC_2(VAR_2, "opcode 0x%4.4x plen %d", VAR_3, VAR_4);

 FUNC_3(VAR_2);
 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_4(VAR_2);

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hci_dev {int name; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct hci_dev*) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_0, u8 VAR_1,
      u16 VAR_2)
{
 FUNC_0("%s status 0x%2.2x", VAR_0->name, VAR_1);

 FUNC_1(VAR_0);
}

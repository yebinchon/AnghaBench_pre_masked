
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {scalar_t__ appearance; } ;


 int FUNC_0 (struct hci_dev*,int *,int ) ;
 int FUNC_1 (struct hci_dev*,int *,int ) ;

__attribute__((used)) static u8 FUNC_2(struct hci_dev *VAR_0, u8 *VAR_1)
{
 u8 VAR_2 = 0;

 if (VAR_0->appearance) {
  VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_2);
 }

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}

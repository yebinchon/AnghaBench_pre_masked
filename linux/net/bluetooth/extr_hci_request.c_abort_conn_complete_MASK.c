
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct hci_dev {int dummy; } ;


 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct hci_dev *VAR_0, u8 VAR_1, u16 VAR_2)
{
 if (VAR_1)
  FUNC_0("Failed to abort connection: status 0x%2.2x", VAR_1);
}

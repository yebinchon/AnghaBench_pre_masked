
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hci_dev {int public_addr; int quirks; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static __le32 FUNC_4(struct hci_dev *VAR_7)
{
 u32 VAR_8 = 0;

 if (FUNC_3(VAR_2, &VAR_7->quirks) &&
     !FUNC_2(VAR_7, VAR_1))
  VAR_8 |= VAR_5;

 if ((FUNC_3(VAR_3, &VAR_7->quirks) ||
      FUNC_3(VAR_4, &VAR_7->quirks)) &&
     !FUNC_0(&VAR_7->public_addr, VAR_0))
  VAR_8 |= VAR_6;

 return FUNC_1(VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct hci_dev*) ;

__attribute__((used)) static u8 FUNC_1(struct hci_dev *VAR_7, u32 VAR_8,
      bool VAR_9)
{
 u8 VAR_10 = VAR_0;

 if (VAR_9) {
  if (VAR_8 & (VAR_2 |
     VAR_3 |
     VAR_5))
   VAR_10 -= 3;

  if (VAR_8 & VAR_6)
   VAR_10 -= 3;
 } else {
  if (VAR_8 & VAR_4)
   VAR_10 -= FUNC_0(VAR_7);

  if (VAR_8 & (VAR_1))
   VAR_10 -= 4;
 }

 return VAR_10;
}

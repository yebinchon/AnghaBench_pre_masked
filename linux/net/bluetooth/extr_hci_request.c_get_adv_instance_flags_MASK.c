
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hci_dev {int dummy; } ;
struct adv_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct hci_dev*,int ) ;
 struct adv_info* FUNC_1 (struct hci_dev*,int) ;

__attribute__((used)) static u32 FUNC_2(struct hci_dev *VAR_8, u8 VAR_9)
{
 u32 VAR_10;
 struct adv_info *VAR_11;

 if (VAR_9 == 0x00) {



  VAR_10 = VAR_7 | VAR_6;




  if (FUNC_0(VAR_8, VAR_0))
   VAR_10 |= VAR_3;

  if (FUNC_0(VAR_8, VAR_2))
   VAR_10 |= VAR_5;
  else if (FUNC_0(VAR_8, VAR_1))
   VAR_10 |= VAR_4;

  return VAR_10;
 }

 VAR_11 = FUNC_1(VAR_8, VAR_9);


 if (!VAR_11)
  return 0;

 return VAR_11->flags;
}

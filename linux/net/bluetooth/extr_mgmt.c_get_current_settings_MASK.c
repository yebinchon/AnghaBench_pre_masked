
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hci_dev {int static_addr; int bdaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_2 (struct hci_dev*) ;

__attribute__((used)) static u32 FUNC_3(struct hci_dev *VAR_30)
{
 u32 VAR_31 = 0;

 if (FUNC_2(VAR_30))
  VAR_31 |= VAR_25;

 if (FUNC_1(VAR_30, VAR_4))
  VAR_31 |= VAR_18;

 if (FUNC_1(VAR_30, VAR_6))
  VAR_31 |= VAR_21;

 if (FUNC_1(VAR_30, VAR_5))
  VAR_31 |= VAR_20;

 if (FUNC_1(VAR_30, VAR_2))
  VAR_31 |= VAR_16;

 if (FUNC_1(VAR_30, VAR_3))
  VAR_31 |= VAR_17;

 if (FUNC_1(VAR_30, VAR_10))
  VAR_31 |= VAR_23;

 if (FUNC_1(VAR_30, VAR_11))
  VAR_31 |= VAR_24;

 if (FUNC_1(VAR_30, VAR_14))
  VAR_31 |= VAR_28;

 if (FUNC_1(VAR_30, VAR_8))
  VAR_31 |= VAR_22;

 if (FUNC_1(VAR_30, VAR_1))
  VAR_31 |= VAR_15;

 if (FUNC_1(VAR_30, VAR_13))
  VAR_31 |= VAR_27;

 if (FUNC_1(VAR_30, VAR_9))
  VAR_31 |= VAR_19;

 if (FUNC_1(VAR_30, VAR_12))
  VAR_31 |= VAR_26;
 if (FUNC_1(VAR_30, VAR_7) ||
     !FUNC_1(VAR_30, VAR_3) ||
     !FUNC_0(&VAR_30->bdaddr, VAR_0)) {
  if (FUNC_0(&VAR_30->static_addr, VAR_0))
   VAR_31 |= VAR_29;
 }

 return VAR_31;
}

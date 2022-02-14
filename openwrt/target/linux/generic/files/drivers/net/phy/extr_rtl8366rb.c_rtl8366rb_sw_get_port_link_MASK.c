
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct switch_port_link {int link; int duplex; int rx_flow; int tx_flow; int aneg; int speed; } ;
struct switch_dev {int dummy; } ;
struct rtl8366_smi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_0 (struct rtl8366_smi*,scalar_t__,int*) ;
 struct rtl8366_smi* FUNC_1 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_2(struct switch_dev *VAR_13,
         int VAR_14,
         struct switch_port_link *VAR_15)
{
 struct rtl8366_smi *VAR_16 = FUNC_1(VAR_13);
 u32 VAR_17 = 0;
 u32 VAR_18;

 if (VAR_14 >= VAR_1)
  return -VAR_0;

 FUNC_0(VAR_16, VAR_2 + (VAR_14 / 2),
        &VAR_17);

 if (VAR_14 % 2)
  VAR_17 = VAR_17 >> 8;

 VAR_15->link = !!(VAR_17 & VAR_5);
 if (!VAR_15->link)
  return 0;

 VAR_15->duplex = !!(VAR_17 & VAR_4);
 VAR_15->rx_flow = !!(VAR_17 & VAR_6);
 VAR_15->tx_flow = !!(VAR_17 & VAR_8);
 VAR_15->aneg = !!(VAR_17 & VAR_3);

 VAR_18 = (VAR_17 & VAR_7);
 switch (VAR_18) {
 case 0:
  VAR_15->speed = VAR_9;
  break;
 case 1:
  VAR_15->speed = VAR_10;
  break;
 case 2:
  VAR_15->speed = VAR_11;
  break;
 default:
  VAR_15->speed = VAR_12;
  break;
 }

 return 0;
}

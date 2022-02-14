
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl8366_smi {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl8366_smi*,int ,scalar_t__*) ;
 int FUNC_1 (struct rtl8366_smi*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct rtl8366_smi *VAR_11,
    u32 VAR_12, u32 VAR_13, u32 *VAR_14)
{
 int VAR_15;
 u32 VAR_16;
 int VAR_17;

 if (VAR_12 > VAR_9)
  return -VAR_0;

 if (VAR_13 > VAR_10)
  return -VAR_0;

 FUNC_0(VAR_11, VAR_8, &VAR_16);
 if (VAR_16 & VAR_7)
  return -VAR_1;


 FUNC_1(VAR_11, VAR_2,
        FUNC_2(VAR_12, VAR_13));


 FUNC_1(VAR_11, VAR_4,
        VAR_3 | VAR_5);

 VAR_15 = 5;
 do {
  FUNC_0(VAR_11, VAR_8, &VAR_16);
  if ((VAR_16 & VAR_7) == 0)
   break;

  if (VAR_15--) {
   FUNC_4(VAR_11->parent, "phy read timed out\n");
   return -VAR_1;
  }

  FUNC_5(1);
 } while (1);


 FUNC_0(VAR_11, VAR_6, VAR_14);

 FUNC_3(VAR_11->parent, "phy_read: addr:%02x, reg:%02x, val:%04x\n",
  VAR_12, VAR_13, *VAR_14);
 return 0;
}

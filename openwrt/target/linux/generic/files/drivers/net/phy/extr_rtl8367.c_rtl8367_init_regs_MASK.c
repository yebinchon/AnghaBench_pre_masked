
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8366_smi {int parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8366_smi*,int ,int*) ;
 int FUNC_1 (struct rtl8366_smi*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct rtl8366_smi*,int) ;
 int FUNC_4 (struct rtl8366_smi*,int) ;
 int FUNC_5 (struct rtl8366_smi*,int) ;
 int FUNC_6 (struct rtl8366_smi*,int ,int,int*) ;
 int FUNC_7 (struct rtl8366_smi*,int ,int,int) ;

__attribute__((used)) static int FUNC_8(struct rtl8366_smi *VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 int VAR_12;

 FUNC_1(VAR_8, VAR_6, VAR_7);

 FUNC_0(VAR_8, VAR_3, &VAR_9);
 VAR_10 = (VAR_9 >> VAR_5) &
  VAR_4;

 FUNC_0(VAR_8, VAR_2, &VAR_9);
 VAR_11 = VAR_9 & VAR_1;

 switch (VAR_10) {
 case 0:
  VAR_12 = FUNC_3(VAR_8, VAR_11);
  break;

 case 1:
  VAR_12 = FUNC_7(VAR_8, 0, 31, 5);
  if (VAR_12)
   break;

  VAR_12 = FUNC_7(VAR_8, 0, 5, 0x3ffe);
  if (VAR_12)
   break;

  VAR_12 = FUNC_6(VAR_8, 0, 6, &VAR_9);
  if (VAR_12)
   break;

  if (VAR_9 == 0x94eb) {
   VAR_12 = FUNC_4(VAR_8, VAR_11);
  } else if (VAR_9 == 0x2104) {
   VAR_12 = FUNC_5(VAR_8, VAR_11);
  } else {
   FUNC_2(VAR_8->parent, "unknow phy data %04x\n", VAR_9);
   return -VAR_0;
  }

  break;

 default:
  FUNC_2(VAR_8->parent, "unknow rlvid %u\n", VAR_10);
  VAR_12 = -VAR_0;
  break;
 }

 return VAR_12;
}

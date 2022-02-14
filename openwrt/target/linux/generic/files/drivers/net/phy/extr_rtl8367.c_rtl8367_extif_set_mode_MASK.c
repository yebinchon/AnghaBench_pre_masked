
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8366_smi {int parent; } ;
typedef enum rtl8367_extif_mode { ____Placeholder_rtl8367_extif_mode } rtl8367_extif_mode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct rtl8366_smi*,int ,int,int) ;
 int FUNC_2 (struct rtl8366_smi*,int ,int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int FUNC_7(struct rtl8366_smi *VAR_6, int VAR_7,
      enum rtl8367_extif_mode VAR_8)
{
 int VAR_9;


 switch (VAR_8) {
 case 131:
 case 130:
  FUNC_2(VAR_6, VAR_2, 0x0367);
  FUNC_2(VAR_6, VAR_3, 0x7777);
  break;

 case 129:
 case 128:
  FUNC_1(VAR_6, VAR_1,
   FUNC_0((VAR_7 + 1) % 2), FUNC_0((VAR_7 + 1) % 2));
  break;

 case 134:
  FUNC_1(VAR_6, VAR_2,
          FUNC_3(VAR_7),
   FUNC_3(VAR_7));
  FUNC_1(VAR_6, FUNC_5(VAR_7), FUNC_0(6), FUNC_0(6));
  break;

 case 133:
 case 132:
 case 135:
  FUNC_1(VAR_6, VAR_1,
   FUNC_0((VAR_7 + 1) % 2), 0);
  FUNC_1(VAR_6, FUNC_5(VAR_7), FUNC_0(6), 0);
  break;

 default:
  FUNC_6(VAR_6->parent,
   "invalid mode for external interface %d\n", VAR_7);
  return -VAR_0;
 }

 FUNC_1(VAR_6, VAR_4,
  VAR_5 << FUNC_4(VAR_7),
  VAR_8 << FUNC_4(VAR_7));

 return 0;
}

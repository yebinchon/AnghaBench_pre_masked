
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int x; int y; int key; int mod; int plain; } ;


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
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__ VAR_23 ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(int VAR_24, int VAR_25, int VAR_26)
{
 VAR_23.x = VAR_25;
 VAR_23.y = VAR_26;
 VAR_23.key = 0;

 switch (VAR_24)
 {
 case 133: VAR_23.key = VAR_17; break;

 case 149: VAR_23.key = VAR_1; break;

 case 129: VAR_23.key = VAR_21; break;
 case 132: VAR_23.key = VAR_18; break;
 case 148: VAR_23.key = VAR_2; break;
 case 128: VAR_23.key = VAR_22; break;
 case 130: VAR_23.key = VAR_20; break;
 case 131: VAR_23.key = VAR_19; break;
 case 134: VAR_23.key = VAR_16; break;
 case 147: VAR_23.key = VAR_3; break;
 case 146: VAR_23.key = VAR_4; break;
 case 142: VAR_23.key = VAR_8; break;
 case 141: VAR_23.key = VAR_9; break;
 case 140: VAR_23.key = VAR_10; break;
 case 139: VAR_23.key = VAR_11; break;
 case 138: VAR_23.key = VAR_12; break;
 case 137: VAR_23.key = VAR_13; break;
 case 136: VAR_23.key = VAR_14; break;
 case 135: VAR_23.key = VAR_15; break;
 case 145: VAR_23.key = VAR_5; break;
 case 144: VAR_23.key = VAR_6; break;
 case 143: VAR_23.key = VAR_7; break;
 }

 if (VAR_23.key)
 {
  VAR_23.mod = FUNC_0();
  VAR_23.plain = !(VAR_23.mod & ~VAR_0);
  FUNC_1();
  VAR_23.key = VAR_23.plain = 0;
  FUNC_2();
 }
}

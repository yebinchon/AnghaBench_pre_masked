
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,int,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;

int FUNC_3(int VAR_3)
{
 unsigned int VAR_4;

 VAR_2 = 1;

 switch (VAR_3) {
 case 128:
 case 131:
 case 130:
 case 132:
 case 129:
  return 0;
 }
 if (VAR_3 < 0 || VAR_3 > 1270000000) {
  FUNC_0(VAR_1, "--hwp-window: 0 for auto; 1 - 1270000000 usec for window duration\n");
  FUNC_2();
 }
 for (VAR_4 = 0; ; ++VAR_4) {
  if (VAR_0)
   FUNC_1("%d 10^%d\n", VAR_3, VAR_4);

  if (VAR_3 <= 127)
   break;

  VAR_3 = VAR_3 / 10;
 }
 if (VAR_0)
  FUNC_0(VAR_1, "%d*10^%d: 0x%x\n", VAR_3, VAR_4, (VAR_4 << 7) | VAR_3);

 return (VAR_4 << 7) | VAR_3;
}

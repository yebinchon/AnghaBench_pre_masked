
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1 (int VAR_0)

{
 int VAR_1;

 switch (VAR_0) {
 case 9:
  VAR_1 = 0x00;
  break;
 case 5:
  VAR_1 = 0x08;
  break;
 case 12:
  VAR_1 = 0x10;
  break;
 case 15:
  VAR_1 = 0x18;
  break;

 default:
  FUNC_0 ("invalid IRQ %d\n", VAR_0);
  VAR_1 = -1;
 }

 return VAR_1;
}

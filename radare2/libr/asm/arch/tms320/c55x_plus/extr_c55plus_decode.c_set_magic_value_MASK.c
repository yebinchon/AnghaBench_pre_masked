
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;


 int FUNC_0 (int ,char*,int,int) ;
 int VAR_0 ;

void FUNC_1(ut32 *VAR_1, st32 VAR_2, int *VAR_3)
{
 switch(VAR_2) {
  case 232:
   *VAR_1 |= 1;
   break;
  case 424:
   *VAR_1 |= 2;
   break;
  case 236:
   *VAR_1 |= 4;
   break;
  case 233:
   *VAR_1 |= 0x10;
   break;
  case 234:
   *VAR_1 |= 0x20;
   break;
  case 483:
   *VAR_1 |= 0x40;
   break;
  case 484:
   *VAR_1 |= 0x80;
   break;
  case 476:
   *VAR_1 |= 0x100;
   break;
  case 481:
   *VAR_1 |= 0x200;
   break;
  case 482:
   *VAR_1 |= 0x400;
   break;
  default:
   FUNC_0(VAR_0, "invalid hash code 0x%x for magic value 0x%x\n", VAR_2, *VAR_1);
   *VAR_3 = -1;
 }
}

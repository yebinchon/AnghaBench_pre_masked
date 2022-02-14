
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme32 {int rcreg; } ;


 scalar_t__ FUNC_0 (struct rme32*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct rme32 * VAR_5, int *VAR_6)
{
 int VAR_7;

 *VAR_6 = 0;
 if (VAR_5->rcreg & VAR_4) {

                *VAR_6 = 1;
 }
 if (VAR_5->rcreg & VAR_3) {
  return -1;
 }


 VAR_7 = ((VAR_5->rcreg >> VAR_0) & 1) +
  (((VAR_5->rcreg >> VAR_1) & 1) << 1) +
  (((VAR_5->rcreg >> VAR_2) & 1) << 2);

 if (FUNC_0(VAR_5))
  switch (VAR_7) {
  case 0:
  case 1:
  case 2:
   return -1;
  case 3:
   return 96000;
  case 4:
   return 88200;
  case 5:
   return 48000;
  case 6:
   return 44100;
  case 7:
   return 32000;
  default:
   return -1;
   break;
  }
 else
  switch (VAR_7) {
  case 0:
   return -1;
  case 1:
   return 48000;
  case 2:
   return 44100;
  case 3:
   return 32000;
  case 4:
   return 48000;
  case 5:
   return 44100;
  case 6:
   return 44056;
  case 7:
   return 32000;
  default:
   break;
  }
 return -1;
}

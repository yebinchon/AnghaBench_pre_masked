
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme32 {int wcreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct rme32 * VAR_3)
{
 int VAR_4;

 VAR_4 = ((VAR_3->wcreg >> VAR_0) & 1) +
        (((VAR_3->wcreg >> VAR_1) & 1) << 1);
 switch (VAR_4) {
 case 1:
  VAR_4 = 32000;
  break;
 case 2:
  VAR_4 = 44100;
  break;
 case 3:
  VAR_4 = 48000;
  break;
 default:
  return -1;
 }
 return (VAR_3->wcreg & VAR_2) ? VAR_4 << 1 : VAR_4;
}

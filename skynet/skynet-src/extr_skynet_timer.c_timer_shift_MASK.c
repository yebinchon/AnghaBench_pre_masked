
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timer {int time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct timer*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct timer *VAR_4) {
 int VAR_5 = VAR_2;
 uint32_t VAR_6 = ++VAR_4->time;
 if (VAR_6 == 0) {
  FUNC_0(VAR_4, 3, 0);
 } else {
  uint32_t VAR_7 = VAR_6 >> VAR_3;
  int VAR_8=0;

  while ((VAR_6 & (VAR_5-1))==0) {
   int VAR_9=VAR_7 & VAR_0;
   if (VAR_9!=0) {
    FUNC_0(VAR_4, VAR_8, VAR_9);
    break;
   }
   VAR_5 <<= VAR_1;
   VAR_7 >>= VAR_1;
   ++VAR_8;
  }
 }
}

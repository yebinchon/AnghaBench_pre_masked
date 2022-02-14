
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


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

uint32_t FUNC_0(uint32_t VAR_18, int VAR_19, int VAR_20)
{
 uint32_t VAR_21 = 0;

 if (VAR_18 & VAR_10) {
     if (!VAR_19) {

   VAR_21 |= VAR_0 | VAR_11 | VAR_12 | VAR_2 | VAR_3 | VAR_4;
  } else {
   VAR_21 |= VAR_0 | VAR_13 | VAR_11 | VAR_12 | VAR_2 | VAR_3 | VAR_4;
     }
 }
 if (VAR_18 & VAR_1) {
  if (VAR_20) {
   VAR_21 |= VAR_9;
  } else {
   VAR_21 |= VAR_9 | ((VAR_18 & VAR_3) >> VAR_5);
   if (VAR_21 & VAR_1) {
    VAR_21 |= VAR_2 | VAR_3 | VAR_4;
   }
   if (VAR_18 & VAR_4) {
    if (!VAR_19) {

     VAR_21 |= VAR_11 | VAR_12;
    } else {
     VAR_21 |= VAR_13 | VAR_11 | VAR_12;
    }
   } else if (VAR_21 & (VAR_15|VAR_1|VAR_10|VAR_14)) {
    VAR_21 |= VAR_11 | VAR_12;
   }
  }
 }
 if (VAR_18 & VAR_15) {
  VAR_21 |= VAR_15 | VAR_11;
  if (VAR_19) {
   VAR_21 |= VAR_9;
  }
 }
 if (VAR_18 & (VAR_17|VAR_9|VAR_7)) {
  VAR_21 |= VAR_9;
 }
 if (VAR_18 & (VAR_16|VAR_8|VAR_6|VAR_14)) {
  if (!VAR_19) {
   VAR_21 |= VAR_9;
  }
 }
 return VAR_21;
}

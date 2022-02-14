
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zend_uchar ;
typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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

__attribute__((used)) static uint32_t FUNC_0(
  uint32_t VAR_20, uint32_t VAR_21, uint32_t VAR_22, zend_uchar VAR_23) {
 uint32_t VAR_24 = VAR_20 & ~(VAR_14|VAR_15);

 if (VAR_20 & (VAR_19|VAR_12|VAR_10)) {
  VAR_24 &= ~(VAR_19|VAR_12|VAR_10);
  VAR_24 |= VAR_3|VAR_14;
 }
 if (VAR_24 & (VAR_3|VAR_17)) {
  VAR_24 |= VAR_14;
 }
 if (VAR_24 & (VAR_13|VAR_16)) {
  VAR_24 |= VAR_14 | VAR_15;
 }
 if (VAR_24 & VAR_3) {
  if (VAR_22 & VAR_19) {
   VAR_24 |= VAR_7;
  }
  if (VAR_23 == VAR_1) {
   VAR_24 |= VAR_5;
  } else {
   if (VAR_21 & (VAR_11|VAR_10|VAR_18|VAR_16|VAR_9)) {
    VAR_24 |= VAR_5;
   }
   if (VAR_21 & VAR_17) {
    VAR_24 |= VAR_6;
    if (VAR_23 != VAR_0) {

     VAR_24 |= VAR_5;
    }
   }
   if (VAR_21 & (VAR_19|VAR_12)) {
    VAR_24 |= VAR_6;
   }
  }


  if (VAR_24 & VAR_4) {
   VAR_24 |= (VAR_22 & VAR_2) << VAR_8;
  }
 }
 return VAR_24;
}

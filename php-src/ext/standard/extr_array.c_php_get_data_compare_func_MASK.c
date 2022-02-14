
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_long ;
typedef int * compare_func_t ;


 int VAR_0 ;





 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;

__attribute__((used)) static compare_func_t FUNC_0(zend_long VAR_15, int VAR_16)
{
 switch (VAR_15 & ~VAR_0) {
  case 130:
   if (VAR_16) {
    return VAR_9;
   } else {
    return VAR_2;
   }
   break;

  case 128:
   if (VAR_15 & VAR_0) {
    if (VAR_16) {
     return VAR_11;
    } else {
     return VAR_4;
    }
   } else {
    if (VAR_16) {
     return VAR_10;
    } else {
     return VAR_3;
    }
   }
   break;

  case 131:
   if (VAR_15 & VAR_0) {
    if (VAR_16) {
     return VAR_13;
    } else {
     return VAR_6;
    }
   } else {
    if (VAR_16) {
     return VAR_14;
    } else {
     return VAR_7;
    }
   }
   break;

  case 132:
   if (VAR_16) {
    return VAR_12;
   } else {
    return VAR_5;
   }
   break;

  case 129:
  default:
   if (VAR_16) {
    return VAR_8;
   } else {
    return VAR_1;
   }
   break;
 }
 return ((void*)0);
}

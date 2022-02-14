
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_long ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static zend_long FUNC_0(
         int VAR_8,
         zend_long VAR_9,
         zend_long VAR_10)
{
 zend_long VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_11 = VAR_9;
 VAR_12 = VAR_11 % 7;
 VAR_13 = VAR_8 == 2 || VAR_8 == 5 || VAR_8 == 7
  || VAR_8 == 10 || VAR_8 == 13 || VAR_8 == 16
  || VAR_8 == 18;
 VAR_14 = VAR_8 == 3 || VAR_8 == 6
  || VAR_8 == 8 || VAR_8 == 11 || VAR_8 == 14
  || VAR_8 == 17 || VAR_8 == 0;


 if ((VAR_10 >= VAR_4) ||
  ((!VAR_13) && VAR_12 == VAR_6 && VAR_10 >= VAR_0) ||
  (VAR_14 && VAR_12 == VAR_3 && VAR_10 >= VAR_1)) {
  VAR_11++;
  VAR_12++;
  if (VAR_12 == 7) {
   VAR_12 = 0;
  }
 }


 if (VAR_12 == VAR_7 || VAR_12 == VAR_2 || VAR_12 == VAR_5) {
  VAR_11++;
 }
 return (VAR_11);
}

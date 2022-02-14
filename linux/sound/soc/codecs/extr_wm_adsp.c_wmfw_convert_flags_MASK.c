
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_9, unsigned int VAR_10)
{
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14;

 if (VAR_10 > VAR_0) {
  VAR_12 = VAR_3;
  VAR_13 = VAR_4;
  VAR_14 = VAR_5;

  VAR_11 = VAR_2;
 } else {
  VAR_12 = VAR_1;
  VAR_13 = VAR_6;
  VAR_14 = VAR_5;

  VAR_11 = 0;
 }

 if (VAR_9) {
  VAR_11 |= VAR_12;
  if (VAR_9 & VAR_8)
   VAR_11 |= VAR_13;
  if (VAR_9 & VAR_7)
   VAR_11 |= VAR_14;
 } else {
  VAR_11 |= VAR_12 | VAR_13 | VAR_14;
 }

 return VAR_11;
}

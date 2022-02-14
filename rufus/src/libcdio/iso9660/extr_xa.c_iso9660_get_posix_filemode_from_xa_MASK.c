
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int posix_mode_t ;


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

posix_mode_t
FUNC_0(uint16_t VAR_14)
{
  posix_mode_t VAR_15 = 0;

  if (VAR_14 & VAR_10) VAR_15 |= VAR_3;
  if (VAR_14 & VAR_13) VAR_15 |= VAR_6;
  if (VAR_14 & VAR_7) VAR_15 |= VAR_0;

  return VAR_15;
}

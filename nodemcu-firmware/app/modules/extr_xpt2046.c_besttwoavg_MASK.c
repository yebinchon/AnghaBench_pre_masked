
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int16_t ;



__attribute__((used)) static int16_t FUNC_0( int16_t VAR_0 , int16_t VAR_1 , int16_t VAR_2 ) {
  int16_t VAR_3, VAR_4, VAR_5;
  int16_t VAR_6 = 0;

  if ( VAR_0 > VAR_1 ) VAR_3 = VAR_0 - VAR_1; else VAR_3 = VAR_1 - VAR_0;
  if ( VAR_0 > VAR_2 ) VAR_4 = VAR_0 - VAR_2; else VAR_4 = VAR_2 - VAR_0;
  if ( VAR_2 > VAR_1 ) VAR_5 = VAR_2 - VAR_1; else VAR_5 = VAR_1 - VAR_2;

  if ( VAR_3 <= VAR_4 && VAR_3 <= VAR_5 ) VAR_6 = (VAR_0 + VAR_1) >> 1;
  else if ( VAR_4 <= VAR_3 && VAR_4 <= VAR_5 ) VAR_6 = (VAR_0 + VAR_2) >> 1;
  else VAR_6 = (VAR_1 + VAR_2) >> 1;

  return VAR_6;
}

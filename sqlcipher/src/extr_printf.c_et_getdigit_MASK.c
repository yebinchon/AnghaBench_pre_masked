
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double LONGDOUBLE_TYPE ;



__attribute__((used)) static char FUNC_0(LONGDOUBLE_TYPE *VAR_0, int *VAR_1){
  int VAR_2;
  LONGDOUBLE_TYPE VAR_3;
  if( (*VAR_1)<=0 ) return '0';
  (*VAR_1)--;
  VAR_2 = (int)*VAR_0;
  VAR_3 = VAR_2;
  VAR_2 += '0';
  *VAR_0 = (*VAR_0 - VAR_3)*10.0;
  return (char)VAR_2;
}

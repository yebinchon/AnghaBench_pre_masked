
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

unsigned char * FUNC_1(unsigned char *VAR_0)
{
 unsigned char *VAR_1;
 unsigned char VAR_2;
 unsigned char *VAR_3;
 VAR_1=VAR_0;
 while (*VAR_1) {
  if ( FUNC_0(*VAR_1) ) {
   VAR_2 = *VAR_1;
   VAR_3 = VAR_1;
   *VAR_3 = *++VAR_1;
   if ( *VAR_1 == 0 )
    break;
   *VAR_1 = VAR_2;
  }
  VAR_1++;
 }
 while (VAR_0<VAR_1) {
  VAR_2=*VAR_0;
  *VAR_0=*VAR_1;
  *VAR_1=VAR_2;
  VAR_0++;
  VAR_1--;
 }


 return VAR_0;
}

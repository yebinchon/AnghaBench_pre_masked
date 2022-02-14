
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;

unsigned char * FUNC_1(unsigned char *VAR_0, unsigned int VAR_1)
{
 unsigned char *VAR_2 = VAR_0;
 unsigned short *VAR_3 = (unsigned short *)VAR_0;

 if ( FUNC_0(VAR_1) == 1 ) {

  while(*VAR_2 != 0) {
   *VAR_2 = VAR_1;
   VAR_2++;
  }
  *VAR_2 = 0;
 }
 else {
  while(*VAR_3 != 0) {
   *VAR_3 = VAR_1;
   VAR_3++;
  }
  *VAR_3 = 0;
 }

 return VAR_0;
}

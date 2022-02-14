
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 int VAR_0 ;

uint32 FUNC_0(char *VAR_1, unsigned int VAR_2)
{
 uint32 VAR_3;
 const unsigned char * VAR_4 = (unsigned char *)VAR_1;

 VAR_3 = VAR_0;
 while (VAR_2--) {
  VAR_3 = ( VAR_3 + (VAR_3 << 5)) ^ (*VAR_4++);
 }
 return VAR_3;
}

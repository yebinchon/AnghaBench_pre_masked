
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_long ;



zend_long FUNC_0(const unsigned char *VAR_0, size_t VAR_1)
{
 int VAR_2 = VAR_1;
 while ( VAR_1-- ) {
 if ( *VAR_0++ > 0x7f || (*VAR_0 == '\n' && *(VAR_0 - 1) == '\r') )
  return -1;
 }

 return VAR_2;
}

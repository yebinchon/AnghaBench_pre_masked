
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint32 ;
typedef int trgm ;



uint32
FUNC_0(trgm *VAR_0)
{
 uint32 VAR_1 = 0;

 VAR_1 |= *(((unsigned char *) VAR_0));
 VAR_1 <<= 8;
 VAR_1 |= *(((unsigned char *) VAR_0) + 1);
 VAR_1 <<= 8;
 VAR_1 |= *(((unsigned char *) VAR_0) + 2);

 return VAR_1;
}

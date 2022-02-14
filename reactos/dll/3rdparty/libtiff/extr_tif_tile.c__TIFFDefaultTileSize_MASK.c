
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int int32 ;
typedef int TIFF ;


 int FUNC_0 (int,int) ;

void
FUNC_1(TIFF* VAR_0, uint32* VAR_1, uint32* VAR_2)
{
 (void) VAR_0;
 if (*(int32*) VAR_1 < 1)
  *VAR_1 = 256;
 if (*(int32*) VAR_2 < 1)
  *VAR_2 = 256;

 if (*VAR_1 & 0xf)
  *VAR_1 = FUNC_0(*VAR_1, 16);
 if (*VAR_2 & 0xf)
  *VAR_2 = FUNC_0(*VAR_2, 16);
}

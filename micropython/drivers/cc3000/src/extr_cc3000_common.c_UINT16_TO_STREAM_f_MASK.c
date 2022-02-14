
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* UINT8 ;
typedef int UINT16 ;



UINT8* FUNC_0 (UINT8 *VAR_0, UINT16 VAR_1)
{
 *(VAR_0)++ = (UINT8)(VAR_1);
 *(VAR_0)++ = (UINT8)((VAR_1) >> 8);
 return VAR_0;
}

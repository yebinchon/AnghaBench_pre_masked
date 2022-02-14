
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;



wchar_t *
FUNC_0( char * VAR_0, wchar_t * VAR_1 )
{
 wchar_t * VAR_2 = VAR_1;
 while (*VAR_0) *VAR_1++ = (wchar_t) *VAR_0++;
 *VAR_1 = 0;
 return VAR_2;
}

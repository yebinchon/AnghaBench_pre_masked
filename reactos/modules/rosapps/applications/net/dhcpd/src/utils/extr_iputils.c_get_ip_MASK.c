
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8b ;
typedef int u32b ;



int FUNC_0( char *VAR_0, u32b *VAR_1 )
{


  *VAR_1 = 0;

  if( !VAR_0 )
    return -1;

  while( *VAR_0 != '\0' )
    {
      if( *VAR_0 == '.' )
 {
   *VAR_1 = *VAR_1 << 8;
   VAR_0++;
   continue;
 }
      *VAR_1 *= 10;
      *VAR_1 += (u8b)(*VAR_0-48);

      VAR_0++;
    }

  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8b ;



int FUNC_0( char *VAR_0, u8b *VAR_1, int VAR_2 )
{
  int VAR_3;



  *VAR_1 = 0;

  if( !VAR_0 )
    return -1;

  for( VAR_3 = 0; (VAR_3 < VAR_2) && ( VAR_0 ); VAR_0++ )
      if( *VAR_0 == '.' )
 VAR_3++;

  if( !VAR_0 )
    return -2;

  while(( *VAR_0 != '.' ) && ( *VAR_0 != '\0' ))
    {
      *VAR_1 *= 10;
      *VAR_1 += (u8b)(*VAR_0-48);

      VAR_0++;
    }

  return 0;
}

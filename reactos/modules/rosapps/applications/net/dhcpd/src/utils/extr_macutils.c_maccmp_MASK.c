
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8b ;



int FUNC_0( u8b VAR_0[16], u8b VAR_1[16] )
{
  int VAR_2;
  char VAR_3 = 0;

  for( VAR_2 = 0; VAR_2 < 16; VAR_2++ )
    if( VAR_0[VAR_2] != VAR_1[VAR_2] )
      VAR_3 = -1;

  return VAR_3;
}

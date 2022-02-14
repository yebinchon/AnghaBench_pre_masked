
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8b ;


 scalar_t__ FUNC_0 (char*) ;

int FUNC_1( u8b VAR_0[17], u8b VAR_1[16] )
{
  int VAR_2, VAR_3, VAR_4;
  u8b VAR_5;
  u8b VAR_6;

  VAR_4 = (int)FUNC_0( VAR_0 );

  for( VAR_2 = 0, VAR_3 = 0; VAR_2 < VAR_4; )
    {
      VAR_5 = 0;
      while( (VAR_0[VAR_2] != ':' ) && (VAR_0[VAR_2]!= '\0' ))
 {
   VAR_5 = VAR_5 << 4;
   (VAR_0[VAR_2]>57)?(VAR_6=55):(VAR_6=48);
   VAR_5 += (VAR_0[VAR_2] - VAR_6);
   VAR_2++;
 }
      VAR_1[VAR_3++] = VAR_5;
      VAR_2++;
    }
  return 0;
}

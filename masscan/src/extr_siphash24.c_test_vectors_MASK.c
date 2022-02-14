
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,int,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,int) ;
 int FUNC_2 (char*,int) ;
 int * VAR_1 ;

__attribute__((used)) static int
FUNC_3()
{

  u8 VAR_2[64], VAR_3[8], VAR_4[16];
  int VAR_5;
  int VAR_6 = 1;

  for( VAR_5 = 0; VAR_5 < 16; ++VAR_5 ) VAR_4[VAR_5] = (u8)VAR_5;

  for( VAR_5 = 0; VAR_5 < 64; ++VAR_5 )
  {
    VAR_2[VAR_5] = (u8)VAR_5;
    FUNC_0( VAR_3, VAR_2, VAR_5, VAR_4 );

    if ( FUNC_1( VAR_3, VAR_1[VAR_5], 8 ) )
    {
      FUNC_2( "test vector failed for %d bytes\n", VAR_5 );
      VAR_6 = 0;
    }
  }

  return VAR_6;
}

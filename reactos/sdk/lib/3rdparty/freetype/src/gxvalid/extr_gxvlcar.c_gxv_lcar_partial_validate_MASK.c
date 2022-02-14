
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GXV_Validator ;
typedef int FT_UShort ;
typedef scalar_t__ FT_Short ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
  FUNC_3( FT_Short VAR_2,
                             FT_UShort VAR_3,
                             GXV_Validator VAR_4 )
  {
    FUNC_1( "partial" );

    if ( FUNC_0( VAR_1 ) != 1 )
      goto Exit;

    FUNC_2( VAR_3, (FT_UShort)VAR_2, VAR_4 );

  Exit:
    VAR_0;
  }

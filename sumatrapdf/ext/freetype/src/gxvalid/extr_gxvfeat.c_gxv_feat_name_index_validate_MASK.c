
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GXV_Validator ;
typedef int FT_UShort ;
typedef scalar_t__ FT_Short ;
typedef int FT_Bytes ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int,unsigned int,int ) ;

__attribute__((used)) static void
  FUNC_5( FT_Bytes VAR_1,
                                FT_Bytes VAR_2,
                                GXV_Validator VAR_3 )
  {
    FT_Bytes VAR_4 = VAR_1;

    FT_Short VAR_5;


    FUNC_2( "nameIndex" );

    FUNC_1( 2 );
    VAR_5 = FUNC_0 ( VAR_4 );
    FUNC_3(( " (nameIndex = %d)\n", VAR_5 ));

    FUNC_4( (FT_UShort)VAR_5,
                           255,
                           32768U,
                           VAR_3 );

    VAR_0;
  }

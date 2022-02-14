
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ extra3; } ;
typedef TYPE_1__* OTV_Validator ;
typedef int FT_ULong ;
typedef int FT_UInt ;
typedef scalar_t__ FT_PtrDist ;
typedef int FT_Int ;
typedef scalar_t__ FT_Bytes ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static void
  FUNC_7( FT_Bytes VAR_3,
                            FT_UInt VAR_4,
                            OTV_Validator VAR_5 )
  {
    FT_Bytes VAR_6 = VAR_3;
    FT_UInt VAR_7;
    if ( VAR_4 >= 0x100 )
      VAR_0;

    for ( VAR_7 = 4; VAR_7 > 0; VAR_7-- )
    {
      if ( VAR_4 & 1 )
      {

        FUNC_0( 2 );
        VAR_6 += 2;
      }

      VAR_4 >>= 1;
    }

    for ( VAR_7 = 4; VAR_7 > 0; VAR_7-- )
    {
      if ( VAR_4 & 1 )
      {
        FT_PtrDist VAR_8;

        FUNC_3( VAR_2 );



        FUNC_0( 2 );
        FUNC_2( VAR_2 );

        VAR_8 = VAR_6 - VAR_5->extra3;

        FUNC_4( VAR_2 );
        if ( VAR_2 )
          FUNC_6( VAR_5->extra3 + VAR_2, VAR_5 );
      }
      VAR_4 >>= 1;
    }

    VAR_1;
  }

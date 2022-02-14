
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FT_UInt32 ;
typedef int FT_Pos ;
typedef int FT_Int ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static FT_Pos
  FUNC_2( FT_Pos VAR_0,
              FT_Pos VAR_1,
              FT_Pos VAR_2,
              FT_Pos VAR_3 )
  {
    FT_Pos VAR_4 = 0;
    FT_Int VAR_5;
    VAR_5 = 27 - FUNC_1( (FT_UInt32)( FUNC_0( VAR_0 ) |
                                      FUNC_0( VAR_1 ) |
                                      FUNC_0( VAR_2 ) |
                                      FUNC_0( VAR_3 ) ) );

    if ( VAR_5 > 0 )
    {

      if ( VAR_5 > 2 )
        VAR_5 = 2;

      VAR_0 <<= VAR_5;
      VAR_1 <<= VAR_5;
      VAR_2 <<= VAR_5;
      VAR_3 <<= VAR_5;
    }
    else
    {
      VAR_0 >>= -VAR_5;
      VAR_1 >>= -VAR_5;
      VAR_2 >>= -VAR_5;
      VAR_3 >>= -VAR_5;
    }



    while ( VAR_1 > 0 || VAR_2 > 0 )
    {

      if ( VAR_0 + VAR_1 > VAR_2 + VAR_3 )
      {
        VAR_3 = VAR_3 + VAR_2;
        VAR_2 = VAR_2 + VAR_1;
        VAR_1 = VAR_1 + VAR_0;
        VAR_3 = VAR_3 + VAR_2;
        VAR_2 = VAR_2 + VAR_1;
        VAR_3 = ( VAR_3 + VAR_2 ) / 8;
        VAR_2 = VAR_2 / 4;
        VAR_1 = VAR_1 / 2;
      }
      else
      {
        VAR_0 = VAR_0 + VAR_1;
        VAR_1 = VAR_1 + VAR_2;
        VAR_2 = VAR_2 + VAR_3;
        VAR_0 = VAR_0 + VAR_1;
        VAR_1 = VAR_1 + VAR_2;
        VAR_0 = ( VAR_0 + VAR_1 ) / 8;
        VAR_1 = VAR_1 / 4;
        VAR_2 = VAR_2 / 2;
      }


      if ( VAR_0 == VAR_1 && VAR_0 >= VAR_2 )
      {
        VAR_4 = VAR_0;
        break;
      }
      if ( VAR_2 == VAR_3 && VAR_1 <= VAR_3 )
      {
        VAR_4 = VAR_3;
        break;
      }
    }

    if ( VAR_5 > 0 )
      VAR_4 >>= VAR_5;
    else
      VAR_4 <<= -VAR_5;

    return VAR_4;
  }

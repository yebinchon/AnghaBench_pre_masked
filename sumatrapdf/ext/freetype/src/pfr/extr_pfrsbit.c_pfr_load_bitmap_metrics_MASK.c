
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FT_UInt ;
typedef int FT_Long ;
typedef int FT_Error ;
typedef int FT_Char ;
typedef int FT_Byte ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int*) ;

__attribute__((used)) static FT_Error
  FUNC_8( FT_Byte** VAR_2,
                           FT_Byte* VAR_3,
                           FT_Long VAR_4,
                           FT_Long *VAR_5,
                           FT_Long *VAR_6,
                           FT_UInt *VAR_7,
                           FT_UInt *VAR_8,
                           FT_Long *VAR_9,
                           FT_UInt *VAR_10 )
  {
    FT_Error VAR_11 = VAR_0;
    FT_Byte VAR_12;
    FT_Byte VAR_13;
    FT_Byte* VAR_14 = *VAR_2;
    FT_Long VAR_15, VAR_16, VAR_17;
    FT_UInt VAR_18, VAR_19;


    FUNC_2( 1 );
    VAR_12 = FUNC_3( VAR_14 );

    VAR_15 = 0;
    VAR_16 = 0;
    VAR_18 = 0;
    VAR_19 = 0;
    VAR_17 = 0;

    switch ( VAR_12 & 3 )
    {
    case 0:
      FUNC_2( 1 );
      VAR_13 = FUNC_3( VAR_14 );
      VAR_15 = (FT_Char)VAR_13 >> 4;
      VAR_16 = ( (FT_Char)( VAR_13 << 4 ) ) >> 4;
      break;

    case 1:
      FUNC_2( 2 );
      VAR_15 = FUNC_4( VAR_14 );
      VAR_16 = FUNC_4( VAR_14 );
      break;

    case 2:
      FUNC_2( 4 );
      VAR_15 = FUNC_6( VAR_14 );
      VAR_16 = FUNC_6( VAR_14 );
      break;

    case 3:
      FUNC_2( 6 );
      VAR_15 = FUNC_5( VAR_14 );
      VAR_16 = FUNC_5( VAR_14 );
      break;

    default:
      ;
    }

    VAR_12 >>= 2;
    switch ( VAR_12 & 3 )
    {
    case 0:

      VAR_18 = 0;
      VAR_19 = 0;
      break;

    case 1:
      FUNC_2( 1 );
      VAR_13 = FUNC_3( VAR_14 );
      VAR_18 = ( VAR_13 >> 4 ) & 0xF;
      VAR_19 = VAR_13 & 0xF;
      break;

    case 2:
      FUNC_2( 2 );
      VAR_18 = FUNC_3( VAR_14 );
      VAR_19 = FUNC_3( VAR_14 );
      break;

    case 3:
      FUNC_2( 4 );
      VAR_18 = FUNC_7( VAR_14 );
      VAR_19 = FUNC_7( VAR_14 );
      break;

    default:
      ;
    }

    VAR_12 >>= 2;
    switch ( VAR_12 & 3 )
    {
    case 0:
      VAR_17 = VAR_4;
      break;

    case 1:
      FUNC_2( 1 );
      VAR_17 = FUNC_4( VAR_14 ) * 256;
      break;

    case 2:
      FUNC_2( 2 );
      VAR_17 = FUNC_6( VAR_14 );
      break;

    case 3:
      FUNC_2( 3 );
      VAR_17 = FUNC_5( VAR_14 );
      break;

    default:
      ;
    }

    *VAR_5 = VAR_15;
    *VAR_6 = VAR_16;
    *VAR_7 = VAR_18;
    *VAR_8 = VAR_19;
    *VAR_9 = VAR_17;
    *VAR_10 = VAR_12 >> 2;
    *VAR_2 = VAR_14;

  Exit:
    return VAR_11;

  Too_Short:
    VAR_11 = FUNC_1( VAR_1 );
    FUNC_0(( "pfr_load_bitmap_metrics: invalid glyph data\n" ));
    goto Exit;
  }

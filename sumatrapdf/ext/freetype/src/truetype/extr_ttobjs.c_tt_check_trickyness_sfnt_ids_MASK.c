
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int member_0; int member_1; } ;
struct TYPE_10__ {int member_0; int member_1; } ;
struct TYPE_9__ {int member_0; int member_1; } ;
struct TYPE_13__ {scalar_t__ Length; scalar_t__ CheckSum; TYPE_3__ member_2; TYPE_2__ member_1; TYPE_1__ member_0; } ;
typedef TYPE_5__ tt_sfnt_id_rec ;
struct TYPE_14__ {size_t num_tables; TYPE_4__* dir_tables; } ;
struct TYPE_12__ {int Tag; scalar_t__ Length; } ;
typedef TYPE_6__* TT_Face ;
typedef size_t FT_UShort ;
typedef scalar_t__ FT_ULong ;
typedef int FT_Bool ;


 int VAR_0 ;
 int FUNC_0 (int*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;



 scalar_t__ FUNC_1 (TYPE_6__*,size_t) ;

__attribute__((used)) static FT_Bool
  FUNC_2( TT_Face VAR_7 )
  {



    static const tt_sfnt_id_rec VAR_8[29]
                                       [3] = {





      {
        { 0x05BCF058UL, 0x000002E4UL },
        { 0x28233BF1UL, 0x000087C4UL },
        { 0xA344A1EAUL, 0x000001E1UL }
      },
      {
        { 0x05BCF058UL, 0x000002E4UL },
        { 0x28233BF1UL, 0x000087C4UL },
        { 0xA344A1EBUL, 0x000001E1UL }
      },
      {
        { 0x12C3EBB2UL, 0x00000350UL },
        { 0xB680EE64UL, 0x000087A7UL },
        { 0xCE939563UL, 0x00000758UL }
      },
      {
        { 0x11E5EAD4UL, 0x00000350UL },
        { 0xCE5956E9UL, 0x0000BC85UL },
        { 0x8272F416UL, 0x00000045UL }
      },
      {
        { 0x1257EB46UL, 0x00000350UL },
        { 0xF699D160UL, 0x0000715FUL },
        { 0xD222F568UL, 0x000003BCUL }
      },
      {
        { 0x1262EB4EUL, 0x00000350UL },
        { 0xE86A5D64UL, 0x00007940UL },
        { 0x7850F729UL, 0x000005FFUL }
      },
      {
        { 0x122DEB0AUL, 0x00000350UL },
        { 0x3D16328AUL, 0x0000859BUL },
        { 0xA93FC33BUL, 0x000002CBUL }
      },
      {
        { 0x125FEB26UL, 0x00000350UL },
        { 0xA5ACC982UL, 0x00007EE1UL },
        { 0x90999196UL, 0x0000041FUL }
      },
      {
        { 0x11E5EAD4UL, 0x00000350UL },
        { 0x5A30CA3BUL, 0x00009063UL },
        { 0x13A42602UL, 0x0000007EUL }
      },
      {
        { 0x11E5EAD4UL, 0x00000350UL },
        { 0xA6E78C01UL, 0x00008998UL },
        { 0x13A42602UL, 0x0000007EUL }
      },
      {
        { 0x11E5EAD4UL, 0x00000360UL },
        { 0x9DB282B2UL, 0x0000C06EUL },
        { 0x53E6D7CAUL, 0x00000082UL }
      },
      {
        { 0x1243EB18UL, 0x00000350UL },
        { 0xBA0A8C30UL, 0x000074ADUL },
        { 0xF3D83409UL, 0x0000037BUL }
      },
      {
        { 0x07DCF546UL, 0x00000308UL },
        { 0x40FE7C90UL, 0x00008E2AUL },
        { 0x608174B5UL, 0x0000007AUL }
      },
      {
        { 0xEB891238UL, 0x00000308UL },
        { 0xD2E4DCD4UL, 0x0000676FUL },
        { 0x8EA5F293UL, 0x000003B8UL }
      },
      {
        { 0xFFFBFFFCUL, 0x00000008UL },
        { 0x9C9E48B8UL, 0x0000BEA2UL },
        { 0x70020112UL, 0x00000008UL }
      },
      {
        { 0xFFFBFFFCUL, 0x00000008UL },
        { 0x0A5A0483UL, 0x00017C39UL },
        { 0x70020112UL, 0x00000008UL }
      },
      {
        { 0x00000000UL, 0x00000000UL },
        { 0x40C92555UL, 0x000000E5UL },
        { 0xA39B58E3UL, 0x0000117CUL }
      },
      {
        { 0x00000000UL, 0x00000000UL },
        { 0x33C41652UL, 0x000000E5UL },
        { 0x26D6C52AUL, 0x00000F6AUL }
      },
      {
        { 0x00000000UL, 0x00000000UL },
        { 0x6DB1651DUL, 0x0000019DUL },
        { 0x6C6E4B03UL, 0x00002492UL }
      },
      {
        { 0x00000000UL, 0x00000000UL },
        { 0x40C92555UL, 0x000000E5UL },
        { 0xDE51FAD0UL, 0x0000117CUL }
      },
      {
        { 0x00000000UL, 0x00000000UL },
        { 0x85E47664UL, 0x000000E5UL },
        { 0xA6C62831UL, 0x00001CAAUL }
      },
      {
        { 0x00000000UL, 0x00000000UL },
        { 0x2D891CFDUL, 0x0000019DUL },
        { 0xA0604633UL, 0x00001DE8UL }
      },
      {
        { 0x00000000UL, 0x00000000UL },
        { 0x40AA774CUL, 0x000001CBUL },
        { 0x9B5CAA96UL, 0x00001F9AUL }
      },
      {
        { 0x00000000UL, 0x00000000UL },
        { 0x0D3DE9CBUL, 0x00000141UL },
        { 0xD4127766UL, 0x00002280UL }
      },
      {
        { 0x00000000UL, 0x00000000UL },
        { 0x4A692698UL, 0x000001F0UL },
        { 0x340D4346UL, 0x00001FCAUL }
      },
      {
        { 0x00000000UL, 0x00000000UL },
        { 0xCD34C604UL, 0x00000166UL },
        { 0x6CF31046UL, 0x000022B0UL }
      },
      {
        { 0x00000000UL, 0x00000000UL },
        { 0x5DA75315UL, 0x0000019DUL },
        { 0x40745A5FUL, 0x000022E0UL }
      },
      {
        { 0x00000000UL, 0x00000000UL },
        { 0xF055FC48UL, 0x000001C2UL },
        { 0x3900DED3UL, 0x00001E18UL }
      },
        {
        { 0x00170003UL, 0x00000060UL },
        { 0xDBB4306EUL, 0x000058AAUL },
        { 0xD643482AUL, 0x00000035UL }
      }
    };

    FT_ULong VAR_9;
    int VAR_10[29];
    FT_Bool VAR_11, VAR_12, VAR_13;
    FT_UShort VAR_14;
    int VAR_15, VAR_16;


    FUNC_0( VAR_10, 0,
                sizeof ( int ) * 29 );
    VAR_11 = VAR_0;
    VAR_12 = VAR_0;
    VAR_13 = VAR_0;

    for ( VAR_14 = 0; VAR_14 < VAR_7->num_tables; VAR_14++ )
    {
      VAR_9 = 0;

      switch( VAR_7->dir_tables[VAR_14].Tag )
      {
      case 130:
        VAR_16 = 0;
        VAR_11 = VAR_6;
        break;

      case 129:
        VAR_16 = 1;
        VAR_12 = VAR_6;
        break;

      case 128:
        VAR_16 = 2;
        VAR_13 = VAR_6;
        break;

      default:
        continue;
      }

      for ( VAR_15 = 0; VAR_15 < 29; VAR_15++ )
        if ( VAR_7->dir_tables[VAR_14].Length == VAR_8[VAR_15][VAR_16].Length )
        {
          if ( !VAR_9 )
            VAR_9 = FUNC_1( VAR_7, VAR_14 );

          if ( VAR_8[VAR_15][VAR_16].CheckSum == VAR_9 )
            VAR_10[VAR_15]++;

          if ( VAR_10[VAR_15] == 3 )
            return VAR_6;
        }
    }

    for ( VAR_15 = 0; VAR_15 < 29; VAR_15++ )
    {
      if ( !VAR_11 && !VAR_8[VAR_15][0].Length )
        VAR_10[VAR_15]++;
      if ( !VAR_12 && !VAR_8[VAR_15][1].Length )
        VAR_10[VAR_15]++;
      if ( !VAR_13 && !VAR_8[VAR_15][2].Length )
        VAR_10[VAR_15]++;
      if ( VAR_10[VAR_15] == 3 )
        return VAR_6;
    }

    return VAR_0;
  }

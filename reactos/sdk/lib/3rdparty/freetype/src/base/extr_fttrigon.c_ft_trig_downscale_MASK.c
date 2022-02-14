
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FT_UInt32 ;
typedef int FT_Int ;
typedef scalar_t__ FT_Fixed ;


 int VAR_0 ;

__attribute__((used)) static FT_Fixed
  FUNC_0( FT_Fixed VAR_1 )
  {
    FT_Int VAR_2 = 1;
    FT_UInt32 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;


    if ( VAR_1 < 0 )
    {
       VAR_1 = -VAR_1;
       VAR_2 = -1;
    }

    VAR_3 = (FT_UInt32)VAR_1 & 0x0000FFFFU;
    VAR_4 = (FT_UInt32)VAR_1 >> 16;
    VAR_5 = VAR_0 & 0x0000FFFFU;
    VAR_6 = VAR_0 >> 16;

    VAR_7 = VAR_3 * VAR_5;
    VAR_9 = VAR_3 * VAR_6;
    VAR_10 = VAR_5 * VAR_4;
    VAR_8 = VAR_4 * VAR_6;


    VAR_9 += VAR_10;
    VAR_8 += (FT_UInt32)( VAR_9 < VAR_10 ) << 16;

    VAR_8 += VAR_9 >> 16;
    VAR_9 = VAR_9 << 16;


    VAR_7 += VAR_9;
    VAR_8 += ( VAR_7 < VAR_9 );





    VAR_7 += 0x40000000UL;
    VAR_8 += ( VAR_7 < 0x40000000UL );

    VAR_1 = (FT_Fixed)VAR_8;

    return VAR_2 < 0 ? -VAR_1 : VAR_1;
  }

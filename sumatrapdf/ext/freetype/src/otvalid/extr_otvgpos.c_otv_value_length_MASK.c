
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FT_UInt ;



__attribute__((used)) static FT_UInt
  FUNC_0( FT_UInt VAR_0 )
  {
    FT_UInt VAR_1;


    VAR_1 = ( ( VAR_0 & 0xAA ) >> 1 ) + ( VAR_0 & 0x55 );
    VAR_1 = ( ( VAR_1 & 0xCC ) >> 2 ) + ( VAR_1 & 0x33 );
    VAR_1 = ( ( VAR_1 & 0xF0 ) >> 4 ) + ( VAR_1 & 0x0F );

    return VAR_1 * 2;
  }

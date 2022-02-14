
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; } ;
typedef int FT_ULong ;
typedef TYPE_1__ FT_Hashkey ;



__attribute__((used)) static FT_ULong
  FUNC_0( FT_Hashkey* VAR_0 )
  {
    FT_ULong VAR_1 = (FT_ULong)VAR_0->num;
    FT_ULong VAR_2;



    VAR_2 = VAR_1 & 0xFF;
    VAR_2 = ( VAR_2 << 5 ) - VAR_2 + ( ( VAR_1 >> 8 ) & 0xFF );
    VAR_2 = ( VAR_2 << 5 ) - VAR_2 + ( ( VAR_1 >> 16 ) & 0xFF );
    VAR_2 = ( VAR_2 << 5 ) - VAR_2 + ( ( VAR_1 >> 24 ) & 0xFF );

    return VAR_2;
  }

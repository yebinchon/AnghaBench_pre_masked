
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* str; } ;
typedef int FT_ULong ;
typedef TYPE_1__ FT_Hashkey ;



__attribute__((used)) static FT_ULong
  FUNC_0( FT_Hashkey* VAR_0 )
  {
    const char* VAR_1 = VAR_0->str;
    FT_ULong VAR_2 = 0;



    while ( *VAR_1 )
      VAR_2 = ( VAR_2 << 5 ) - VAR_2 + (FT_ULong)*VAR_1++;

    return VAR_2;
  }

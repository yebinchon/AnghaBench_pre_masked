
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t type; } ;
typedef TYPE_1__* PCF_Table ;
typedef size_t FT_ULong ;
typedef int FT_Bool ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static FT_Bool
  FUNC_0( PCF_Table VAR_2,
                      FT_ULong VAR_3,
                      FT_ULong VAR_4 )
  {
    FT_ULong VAR_5;


    for ( VAR_5 = 0; VAR_5 < VAR_3; VAR_5++ )
      if ( VAR_2[VAR_5].type == VAR_4 )
        return VAR_1;

    return VAR_0;
  }

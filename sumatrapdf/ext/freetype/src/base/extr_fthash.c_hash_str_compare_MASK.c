
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* str; } ;
typedef TYPE_1__ FT_Hashkey ;
typedef int FT_Bool ;


 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*) ;

__attribute__((used)) static FT_Bool
  FUNC_1( FT_Hashkey* VAR_0,
                    FT_Hashkey* VAR_1 )
  {
    if ( VAR_0->str[0] == VAR_1->str[0] &&
         FUNC_0( VAR_0->str, VAR_1->str ) == 0 )
      return 1;

    return 0;
  }

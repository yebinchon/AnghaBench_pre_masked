
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ FT_Fixed ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static FT_Fixed
  FUNC_2( FT_Fixed VAR_0,
                                 FT_Fixed VAR_1 )
  {
    FT_Fixed VAR_2 = FUNC_1( VAR_0 ) - VAR_0;
    FT_Fixed VAR_3 = FUNC_1( VAR_0 + VAR_1 ) - VAR_0 - VAR_1;


    if ( FUNC_0( VAR_2 ) <= FUNC_0( VAR_3 ) )
      return VAR_2;
    else
      return VAR_3;
  }

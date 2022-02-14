
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ family_name; } ;
typedef int TT_Face ;
typedef TYPE_1__* FT_Face ;
typedef int FT_Bool ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static FT_Bool
  FUNC_2( FT_Face VAR_2 )
  {
    if ( !VAR_2 )
      return VAR_0;


    if ( VAR_2->family_name &&
         FUNC_0( VAR_2->family_name ) )
      return VAR_1;




    if ( FUNC_1( (TT_Face)VAR_2 ) )
      return VAR_1;

    return VAR_0;
  }

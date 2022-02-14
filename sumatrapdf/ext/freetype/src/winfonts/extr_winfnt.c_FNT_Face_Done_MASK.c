
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num_fixed_sizes; int available_sizes; } ;
typedef int FT_Memory ;
typedef TYPE_1__* FT_Face ;
typedef int FNT_Face ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
  FUNC_3( FT_Face VAR_0 )
  {
    FNT_Face VAR_1 = (FNT_Face)VAR_0;
    FT_Memory VAR_2;


    if ( !VAR_1 )
      return;

    VAR_2 = FUNC_0( VAR_1 );

    FUNC_2( VAR_1 );

    FUNC_1( VAR_0->available_sizes );
    VAR_0->num_fixed_sizes = 0;
  }

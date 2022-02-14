
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t num_charmaps; int ** charmaps; } ;
typedef int FT_Memory ;
typedef size_t FT_Int ;
typedef TYPE_1__* FT_Face ;
typedef int FT_CMap ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
  FUNC_3( FT_Face VAR_0,
                    FT_Memory VAR_1 )
  {
    FT_Int VAR_2;


    if ( !VAR_0 )
      return;

    for ( VAR_2 = 0; VAR_2 < VAR_0->num_charmaps; VAR_2++ )
    {
      FT_CMap VAR_3 = FUNC_0( VAR_0->charmaps[VAR_2] );


      FUNC_2( VAR_3 );

      VAR_0->charmaps[VAR_2] = ((void*)0);
    }

    FUNC_1( VAR_0->charmaps );
    VAR_0->num_charmaps = 0;
  }

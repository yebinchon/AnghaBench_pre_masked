
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ platform_id; scalar_t__ encoding_id; } ;
struct TYPE_7__ {int num_charmaps; TYPE_2__** charmaps; } ;
typedef TYPE_1__* FT_Face ;
typedef TYPE_2__* FT_CharMap ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static FT_CharMap
  FUNC_2( FT_Face VAR_2 )
  {
    FT_CharMap* VAR_3;
    FT_CharMap* VAR_4;
    FT_CharMap* VAR_5;



    FUNC_0( VAR_2 );

    VAR_3 = VAR_2->charmaps;

    if ( !VAR_3 )
      return ((void*)0);

    VAR_4 = VAR_3 + VAR_2->num_charmaps;

    for ( VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5++ )
    {
      if ( VAR_5[0]->platform_id == VAR_1 &&
           VAR_5[0]->encoding_id == VAR_0 &&
           FUNC_1( VAR_5[0] ) == 14 )
        return VAR_5[0];
    }

    return ((void*)0);
  }

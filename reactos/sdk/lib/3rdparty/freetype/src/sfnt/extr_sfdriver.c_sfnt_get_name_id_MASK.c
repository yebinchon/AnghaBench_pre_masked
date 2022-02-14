
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ names; } ;
struct TYPE_9__ {scalar_t__ num_names; TYPE_1__ name_table; } ;
struct TYPE_8__ {scalar_t__ nameID; scalar_t__ stringLength; } ;
typedef TYPE_2__* TT_Name ;
typedef TYPE_3__* TT_Face ;
typedef scalar_t__ FT_UShort ;
typedef scalar_t__ FT_Int ;
typedef int FT_Bool ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static FT_Bool
  FUNC_2( TT_Face VAR_0,
                    FT_UShort VAR_1,
                    FT_Int *VAR_2,
                    FT_Int *VAR_3 )
  {
    FT_Int VAR_4;


    *VAR_2 = -1;
    *VAR_3 = -1;

    for ( VAR_4 = 0; VAR_4 < VAR_0->num_names; VAR_4++ )
    {
      TT_Name VAR_5 = VAR_0->name_table.names + VAR_4;


      if ( VAR_5->nameID == VAR_1 && VAR_5->stringLength > 0 )
      {
        if ( FUNC_1( VAR_5 ) )
          *VAR_2 = VAR_4;

        if ( FUNC_0( VAR_5 ) )
          *VAR_3 = VAR_4;
      }
    }

    return ( *VAR_2 >= 0 ) || ( *VAR_3 >= 0 );
  }

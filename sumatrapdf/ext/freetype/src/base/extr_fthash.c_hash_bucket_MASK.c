
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* lookup ) (int *) ;int size; scalar_t__ (* compare ) (int *,int *) ;TYPE_1__** table; } ;
struct TYPE_5__ {int key; } ;
typedef int FT_ULong ;
typedef TYPE_1__* FT_Hashnode ;
typedef int FT_Hashkey ;
typedef TYPE_2__* FT_Hash ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static FT_Hashnode*
  FUNC_2( FT_Hashkey VAR_0,
               FT_Hash VAR_1 )
  {
    FT_ULong VAR_2 = 0;
    FT_Hashnode* VAR_3 = VAR_1->table;
    FT_Hashnode* VAR_4;


    VAR_2 = (VAR_1->lookup)( &VAR_0 );

    VAR_4 = VAR_3 + ( VAR_2 % VAR_1->size );
    while ( *VAR_4 )
    {
      if ( (VAR_1->compare)( &(*VAR_4)->key, &VAR_0 ) )
        break;

      VAR_4--;
      if ( VAR_4 < VAR_3 )
        VAR_4 = VAR_3 + ( VAR_1->size - 1 );
    }

    return VAR_4;
  }

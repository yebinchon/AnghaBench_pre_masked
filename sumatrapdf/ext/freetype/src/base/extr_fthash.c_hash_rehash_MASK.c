
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ size; int limit; TYPE_1__** table; } ;
struct TYPE_8__ {int key; } ;
typedef scalar_t__ FT_UInt ;
typedef int FT_Memory ;
typedef TYPE_1__* FT_Hashnode ;
typedef TYPE_2__* FT_Hash ;
typedef int FT_Error ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__**) ;
 scalar_t__ FUNC_1 (TYPE_1__**,int) ;
 TYPE_1__** FUNC_2 (int ,TYPE_2__*) ;

__attribute__((used)) static FT_Error
  FUNC_3( FT_Hash VAR_1,
               FT_Memory VAR_2 )
  {
    FT_Hashnode* VAR_3 = VAR_1->table;
    FT_Hashnode* VAR_4;
    FT_Hashnode* VAR_5;

    FT_UInt VAR_6, VAR_7 = VAR_1->size;
    FT_Error VAR_8 = VAR_0;


    VAR_1->size <<= 1;
    VAR_1->limit = VAR_1->size / 3;

    if ( FUNC_1( VAR_1->table, VAR_1->size ) )
      goto Exit;

    for ( VAR_6 = 0, VAR_4 = VAR_3; VAR_6 < VAR_7; VAR_6++, VAR_4++ )
    {
      if ( *VAR_4 )
      {
        VAR_5 = FUNC_2( (*VAR_4)->key, VAR_1 );
        *VAR_5 = *VAR_4;
      }
    }

    FUNC_0( VAR_3 );

  Exit:
    return VAR_8;
  }

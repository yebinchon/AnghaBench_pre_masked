
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ used; scalar_t__ limit; } ;
struct TYPE_8__ {size_t data; int key; } ;
typedef int FT_Memory ;
typedef TYPE_1__* FT_Hashnode ;
typedef int FT_Hashkey ;
typedef TYPE_2__* FT_Hash ;
typedef scalar_t__ FT_Error ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__** FUNC_1 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static FT_Error
  FUNC_3( FT_Hashkey VAR_1,
               size_t VAR_2,
               FT_Hash VAR_3,
               FT_Memory VAR_4 )
  {
    FT_Hashnode VAR_5;
    FT_Hashnode* VAR_6 = FUNC_1( VAR_1, VAR_3 );
    FT_Error VAR_7 = VAR_0;


    VAR_5 = *VAR_6;
    if ( !VAR_5 )
    {
      if ( FUNC_0( VAR_5 ) )
        goto Exit;
      *VAR_6 = VAR_5;

      VAR_5->key = VAR_1;
      VAR_5->data = VAR_2;

      if ( VAR_3->used >= VAR_3->limit )
      {
        VAR_7 = FUNC_2( VAR_3, VAR_4 );
        if ( VAR_7 )
          goto Exit;
      }

      VAR_3->used++;
    }
    else
      VAR_5->data = VAR_2;

  Exit:
    return VAR_7;
  }

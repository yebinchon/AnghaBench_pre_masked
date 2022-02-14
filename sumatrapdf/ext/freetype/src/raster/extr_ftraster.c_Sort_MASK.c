
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ X; scalar_t__* offset; int flags; struct TYPE_4__* link; int height; } ;
typedef TYPE_1__** PProfileList ;
typedef TYPE_1__* PProfile ;


 int VAR_0 ;

__attribute__((used)) static void
  FUNC_0( PProfileList VAR_1 )
  {
    PProfile *VAR_2, VAR_3, VAR_4;



    VAR_3 = *VAR_1;
    while ( VAR_3 )
    {
      VAR_3->X = *VAR_3->offset;
      VAR_3->offset += ( VAR_3->flags & VAR_0 ) ? 1 : -1;
      VAR_3->height--;
      VAR_3 = VAR_3->link;
    }


    VAR_2 = VAR_1;
    VAR_3 = *VAR_2;

    if ( !VAR_3 )
      return;

    VAR_4 = VAR_3->link;

    while ( VAR_4 )
    {
      if ( VAR_3->X <= VAR_4->X )
      {
        VAR_2 = &VAR_3->link;
        VAR_3 = *VAR_2;

        if ( !VAR_3 )
          return;
      }
      else
      {
        *VAR_2 = VAR_4;
        VAR_3->link = VAR_4->link;
        VAR_4->link = VAR_3;

        VAR_2 = VAR_1;
        VAR_3 = *VAR_2;
      }

      VAR_4 = VAR_3->link;
    }
  }

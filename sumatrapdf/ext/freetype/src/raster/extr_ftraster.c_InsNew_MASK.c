
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ X; struct TYPE_5__* link; } ;
typedef TYPE_1__** PProfileList ;
typedef TYPE_1__* PProfile ;
typedef scalar_t__ Long ;



__attribute__((used)) static void
  FUNC_0( PProfileList VAR_0,
          PProfile VAR_1 )
  {
    PProfile *VAR_2, VAR_3;
    Long VAR_4;


    VAR_2 = VAR_0;
    VAR_3 = *VAR_2;
    VAR_4 = VAR_1->X;

    while ( VAR_3 )
    {
      if ( VAR_4 < VAR_3->X )
        break;
      VAR_2 = &VAR_3->link;
      VAR_3 = *VAR_2;
    }

    VAR_1->link = VAR_3;
    *VAR_2 = VAR_1;
  }

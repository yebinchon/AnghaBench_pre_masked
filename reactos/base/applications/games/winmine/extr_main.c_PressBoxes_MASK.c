
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int x; int y; } ;
struct TYPE_9__ {TYPE_2__ press; TYPE_1__** box; } ;
struct TYPE_7__ {scalar_t__ IsPressed; } ;
typedef TYPE_3__ BOARD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,unsigned int,unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*,int,int) ;

__attribute__((used)) static void FUNC_2( BOARD *VAR_2, unsigned VAR_3, unsigned VAR_4 )
{
    int VAR_5, VAR_6;

    for( VAR_5 = -1; VAR_5 <= 1; VAR_5++ )
      for( VAR_6 = -1; VAR_6 <= 1; VAR_6++ ) {
        VAR_2->box[VAR_3 + VAR_5][VAR_4 + VAR_6].IsPressed = VAR_1;
        FUNC_0( VAR_2, VAR_3 + VAR_5, VAR_4 + VAR_6 );
    }

    for( VAR_5 = -1; VAR_5 <= 1; VAR_5++ )
      for( VAR_6 = -1; VAR_6 <= 1; VAR_6++ ) {
        if( !VAR_2->box[VAR_2->press.x + VAR_5][VAR_2->press.y + VAR_6].IsPressed )
            FUNC_1( VAR_2, VAR_2->press.x + VAR_5, VAR_2->press.y + VAR_6 );
    }

    for( VAR_5 = -1; VAR_5 <= 1; VAR_5++ )
      for( VAR_6 = -1; VAR_6 <= 1; VAR_6++ ) {
        VAR_2->box[VAR_3 + VAR_5][VAR_4 + VAR_6].IsPressed = VAR_0;
        FUNC_0( VAR_2, VAR_3 + VAR_5, VAR_4 + VAR_6 );
    }

    VAR_2->press.x = VAR_3;
    VAR_2->press.y = VAR_4;
}

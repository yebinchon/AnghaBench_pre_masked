
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__** box; } ;
struct TYPE_5__ {scalar_t__ FlagType; unsigned int NumMines; } ;
typedef TYPE_2__ BOARD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,unsigned int,unsigned int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1( BOARD *VAR_2, unsigned VAR_3, unsigned VAR_4 )
{
    unsigned VAR_5 = 0;
    int VAR_6, VAR_7;

    if( VAR_2->box[VAR_3][VAR_4].FlagType == VAR_0 ) {
        for( VAR_6 = -1; VAR_6 <= 1; VAR_6++ )
          for( VAR_7 = -1; VAR_7 <= 1; VAR_7++ ) {
            if( VAR_2->box[VAR_3+VAR_6][VAR_4+VAR_7].FlagType == VAR_1 )
                VAR_5++;
          }

        if( VAR_5 == VAR_2->box[VAR_3][VAR_4].NumMines ) {
            for( VAR_6 = -1; VAR_6 <= 1; VAR_6++ )
              for( VAR_7 = -1; VAR_7 <= 1; VAR_7++ ) {
                if( VAR_2->box[VAR_3+VAR_6][VAR_4+VAR_7].FlagType != VAR_1 )
                    FUNC_0( VAR_2, VAR_3+VAR_6, VAR_4+VAR_7 );
              }
        }
    }
}

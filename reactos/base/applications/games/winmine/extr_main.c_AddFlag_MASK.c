
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_flags; TYPE_1__** box; int IsMarkQ; } ;
struct TYPE_4__ {int FlagType; } ;
typedef TYPE_2__ BOARD ;


 int VAR_0 ;

 void* VAR_1 ;


__attribute__((used)) static void FUNC_0( BOARD *VAR_2, unsigned VAR_3, unsigned VAR_4 )
{
    if( VAR_2->box[VAR_3][VAR_4].FlagType != VAR_0 ) {
        switch( VAR_2->box[VAR_3][VAR_4].FlagType ) {
        case 129:
            if( VAR_2->IsMarkQ )
                VAR_2->box[VAR_3][VAR_4].FlagType = 128;
            else
                VAR_2->box[VAR_3][VAR_4].FlagType = VAR_1;
            VAR_2->num_flags--;
            break;

        case 128:
            VAR_2->box[VAR_3][VAR_4].FlagType = VAR_1;
            break;

        default:
            VAR_2->box[VAR_3][VAR_4].FlagType = 129;
            VAR_2->num_flags++;
        }
    }
}

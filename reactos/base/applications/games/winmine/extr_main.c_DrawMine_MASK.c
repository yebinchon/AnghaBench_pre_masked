
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ top; scalar_t__ left; } ;
struct TYPE_7__ {unsigned int cols; unsigned int rows; scalar_t__ status; TYPE_2__ mines_rect; TYPE_1__** box; } ;
struct TYPE_5__ {int FlagType; scalar_t__ NumMines; scalar_t__ IsMine; } ;
typedef unsigned int MINEBMP_OFFSET ;
typedef int HDC ;
typedef int BOOL ;
typedef TYPE_3__ BOARD ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,unsigned int,unsigned int,int ,int ,unsigned int,int ) ;

 unsigned int VAR_1 ;

 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;

 unsigned int VAR_8 ;

 unsigned int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*) ;
 unsigned int VAR_11 ;

__attribute__((used)) static void FUNC_2( HDC VAR_12, HDC VAR_13, BOARD *VAR_14, unsigned VAR_15, unsigned VAR_16, BOOL VAR_17 )
{
    MINEBMP_OFFSET VAR_18 = VAR_0;

    if( VAR_15 == 0 || VAR_15 > VAR_14->cols || VAR_16 == 0 || VAR_16 > VAR_14->rows )
           return;

    if( VAR_14->status == VAR_3 ) {
        if( VAR_14->box[VAR_15][VAR_16].IsMine ) {
            switch( VAR_14->box[VAR_15][VAR_16].FlagType ) {
            case 130:
                VAR_18 = VAR_2;
                break;
            case 131:
                VAR_18 = VAR_1;
                break;
            case 128:

            case 129:
                VAR_18 = VAR_4;
            }
        } else {
            switch( VAR_14->box[VAR_15][VAR_16].FlagType ) {
            case 128:
                VAR_18 = VAR_9;
                break;
            case 130:
                VAR_18 = VAR_11;
                break;
            case 129:
                VAR_18 = VAR_0;
                break;
            case 131:

                break;
            default:
                FUNC_1("Unknown FlagType during game over in DrawMine\n");
                break;
            }
        }
    } else {
        switch( VAR_14->box[VAR_15][VAR_16].FlagType ) {
        case 128:
            if( !VAR_17 )
                VAR_18 = VAR_9;
            else
                VAR_18 = VAR_8;
            break;
        case 130:
            VAR_18 = VAR_2;
            break;
        case 129:
            if( !VAR_17 )
                VAR_18 = VAR_0;
            else
                VAR_18 = VAR_7;
            break;
        case 131:

            break;
        default:
            FUNC_1("Unknown FlagType while playing in DrawMine\n");
            break;
        }
    }

    if( VAR_14->box[VAR_15][VAR_16].FlagType == 131
        && !VAR_14->box[VAR_15][VAR_16].IsMine )
          VAR_18 = (MINEBMP_OFFSET) VAR_14->box[VAR_15][VAR_16].NumMines;

    FUNC_0( VAR_12,
            (VAR_15 - 1) * VAR_6 + VAR_14->mines_rect.left,
            (VAR_16 - 1) * VAR_5 + VAR_14->mines_rect.top,
            VAR_6, VAR_5,
            VAR_13, 0, VAR_18 * VAR_5, VAR_10 );
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_15__ {int sort; int case_sensitive; } ;
struct TYPE_12__ {int UTF8_STRING; } ;
struct TYPE_14__ {int connection; TYPE_1__ ewmh; } ;
struct TYPE_13__ {int retv; unsigned int filtered_lines; void* quit; void** line_map; void* selected_line; int list_view; void* refilter; int text; int * case_indicator; } ;
struct TYPE_11__ {int main_window; } ;
typedef TYPE_2__ RofiViewState ;
typedef int KeyBindingAction ;
 size_t VAR_0 ;
 TYPE_10__ VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_9__ VAR_15 ;
 int FUNC_0 () ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int * VAR_16 ;
 int FUNC_9 () ;
 TYPE_2__* FUNC_10 () ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int *,int ) ;
 TYPE_3__* VAR_17 ;
 int FUNC_17 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static void FUNC_19 ( KeyBindingAction VAR_18 )
{
    RofiViewState *VAR_19 = FUNC_10 ();
    switch ( VAR_18 )
    {

    case 156:
        FUNC_17 ( VAR_17->connection, VAR_1.main_window, VAR_13,
                                VAR_17->ewmh.UTF8_STRING, VAR_17->ewmh.UTF8_STRING, VAR_14 );
        FUNC_18 ( VAR_17->connection );
        break;
    case 155:
        FUNC_17 ( VAR_17->connection, VAR_1.main_window, VAR_16[VAR_0],
                                VAR_17->ewmh.UTF8_STRING, VAR_17->ewmh.UTF8_STRING, VAR_14 );
        FUNC_18 ( VAR_17->connection );
        break;
    case 140:
        FUNC_9 ( );
        break;
    case 188:
        if ( VAR_19->list_view ) {
            FUNC_8 ( VAR_19->list_view );
        }
        break;
    case 128:
        if ( VAR_19->case_indicator != ((void*)0) ) {
            VAR_15.sort = !VAR_15.sort;
            VAR_19->refilter = VAR_11;
            FUNC_16 ( VAR_19->case_indicator, FUNC_0 () );
        }
        break;
    case 165:
        VAR_19->retv = VAR_9;
        ( VAR_19->selected_line ) = 0;
        VAR_19->quit = VAR_11;
        break;

    case 166:
        VAR_19->retv = VAR_7;
        ( VAR_19->selected_line ) = 0;
        VAR_19->quit = VAR_11;
        break;

    case 129:
        if ( VAR_19->case_indicator != ((void*)0) ) {
            VAR_15.case_sensitive = !VAR_15.case_sensitive;
            ( VAR_19->selected_line ) = 0;
            VAR_19->refilter = VAR_11;
            FUNC_16 ( VAR_19->case_indicator, FUNC_0 () );
        }
        break;

    case 167:
    {
        unsigned int VAR_20 = FUNC_1 ( VAR_19->list_view );
        if ( VAR_20 < VAR_19->filtered_lines ) {
            ( VAR_19->selected_line ) = VAR_19->line_map[VAR_20];
            VAR_19->retv = VAR_5;
            VAR_19->quit = VAR_11;
        }
        break;
    }
    case 139:
    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 131:
    case 130:
    case 138:
    {
        unsigned int VAR_21 = VAR_18 - 139;
        if ( VAR_21 < VAR_19->filtered_lines ) {
            VAR_19->selected_line = VAR_19->line_map[VAR_21];
            VAR_19->retv = VAR_8;
            VAR_19->quit = VAR_11;
        }
        break;
    }
    case 186:
    case 175:
    case 174:
    case 173:
    case 172:
    case 171:
    case 170:
    case 169:
    case 168:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
    case 177:
    case 176:
    {
        VAR_19->selected_line = VAR_12;
        unsigned int VAR_22 = FUNC_1 ( VAR_19->list_view );
        if ( VAR_22 < VAR_19->filtered_lines ) {
            ( VAR_19->selected_line ) = VAR_19->line_map[VAR_22];
        }
        VAR_19->retv = VAR_10 | ( ( VAR_18 - 186 ) & VAR_6 );
        VAR_19->quit = VAR_11;
        break;
    }

    case 189:
        VAR_19->retv = VAR_2;
        VAR_19->quit = VAR_11;
        break;
    case 141:
        FUNC_7 ( VAR_19->list_view );
        break;
    case 142:
        FUNC_14 ( VAR_19 );
        break;
    case 148:
        FUNC_2 ( VAR_19->list_view );
        break;
    case 145:
        FUNC_3 ( VAR_19->list_view );
        break;
    case 144:
        FUNC_6 ( VAR_19->list_view );
        break;
    case 157:
        FUNC_5 ( VAR_19->list_view );
        break;
    case 158:
        FUNC_4 ( VAR_19->list_view );
        break;
    case 147:
        FUNC_11 ( VAR_19 );
        break;
    case 146:
        FUNC_12 ( VAR_19 );
        break;
    case 143:
        FUNC_13 ( VAR_19 );
        break;

    case 164:
    {
        if ( FUNC_15 ( VAR_19->text, VAR_18 ) == 0 ) {
            FUNC_3 ( VAR_19->list_view );
        }
        break;
    }
    case 163:
    {
        if ( FUNC_15 ( VAR_19->text, VAR_18 ) == 0 ) {
            FUNC_6 ( VAR_19->list_view );
        }
        break;
    }
    case 187:
    case 161:
    case 162:
    case 152:
    case 151:
    case 150:
    case 149:
    case 153:
    case 160:
    case 159:
    case 154:
    {
        int VAR_23 = FUNC_15 ( VAR_19->text, VAR_18 );
        if ( VAR_23 == 1 ) {

            VAR_19->refilter = VAR_11;
        }
        else if ( VAR_23 == 2 ) {

        }
        break;
    }
    case 192:
    {
        unsigned int VAR_24 = FUNC_1 ( VAR_19->list_view );
        VAR_19->selected_line = VAR_12;
        if ( VAR_24 < VAR_19->filtered_lines ) {
            ( VAR_19->selected_line ) = VAR_19->line_map[VAR_24];
            VAR_19->retv = VAR_8;
        }
        else {

            VAR_19->retv = VAR_4;
        }
        VAR_19->retv |= VAR_3;
        VAR_19->quit = VAR_11;
        break;
    }
    case 191:
    {
        VAR_19->selected_line = VAR_12;
        VAR_19->retv = VAR_4;
        VAR_19->quit = VAR_11;
        break;
    }
    case 190:
    {

        unsigned int VAR_25 = FUNC_1 ( VAR_19->list_view );
        VAR_19->selected_line = VAR_12;
        if ( VAR_25 < VAR_19->filtered_lines ) {
            ( VAR_19->selected_line ) = VAR_19->line_map[VAR_25];
            VAR_19->retv = VAR_8;
        }
        else {

            VAR_19->retv = VAR_4;
        }

        VAR_19->quit = VAR_11;
        break;
    }
    }
}

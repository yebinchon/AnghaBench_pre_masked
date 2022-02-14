
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int language_id; int encoding_id; int platform_id; } ;
typedef TYPE_1__ tt_name_record ;
typedef size_t LANGID ;


 size_t FUNC_0 (size_t*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 size_t FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (size_t) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__ const*) ;
 size_t* VAR_2 ;

__attribute__((used)) static int FUNC_6( const tt_name_record *VAR_3, LANGID VAR_4 )
{
    LANGID VAR_5;

    switch (FUNC_1(VAR_3->platform_id))
    {
    case 128:
        switch (FUNC_1(VAR_3->encoding_id))
        {
        case 131:
        case 132:
            VAR_5 = FUNC_1(VAR_3->language_id);
            break;
        default:
            return 0;
        }
        break;
    case 129:
        if (!FUNC_2( FUNC_5( VAR_3 ))) return 0;
        VAR_5 = FUNC_1(VAR_3->language_id);
        if (VAR_5 >= FUNC_0(VAR_2)) return 0;
        VAR_5 = VAR_2[VAR_5];
        break;
    case 130:
        switch (FUNC_1(VAR_3->encoding_id))
        {
        case 135:
        case 134:
        case 133:
            VAR_5 = FUNC_1(VAR_3->language_id);
            if (VAR_5 >= FUNC_0(VAR_2)) return 0;
            VAR_5 = VAR_2[VAR_5];
            break;
        default:
            return 0;
        }
        break;
    default:
        return 0;
    }
    if (VAR_5 == VAR_4) return 3;
    if (FUNC_4( VAR_5 ) == FUNC_4( VAR_4 )) return 2;
    if (VAR_5 == FUNC_3( VAR_0, VAR_1 )) return 1;
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {size_t n; int * str; } ;
struct TYPE_4__ {char member_0; char member_1; char member_2; int member_3; } ;
typedef int * LPCWSTR ;
typedef TYPE_2__ COND_input ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*,int *,int) ;

__attribute__((used)) static int FUNC_2( COND_input *VAR_0 )
{
    static const struct {
        const WCHAR str[4];
        int id;
    } VAR_1[] = {
        { {'~','<','=',0}, 139 },
        { {'~','>','<',0}, 134 },
        { {'~','>','>',0}, 135 },
        { {'~','<','>',0}, 136 },
        { {'~','>','=',0}, 141 },
        { {'~','<','<',0}, 138 },
        { {'~','=',0}, 142 },
        { {'~','<',0}, 137 },
        { {'~','>',0}, 140 },
        { {'>','=',0}, 144 },
        { {'>','<',0}, 128 },
        { {'<','<',0}, 132 },
        { {'<','>',0}, 130 },
        { {'<','=',0}, 133 },
        { {'>','>',0}, 129 },
        { {'>',0}, 143 },
        { {'<',0}, 131 },
        { {0}, 0 }
    };
    LPCWSTR VAR_2 = &VAR_0->str[VAR_0->n];
    int VAR_3 = 0, VAR_4;

    while ( 1 )
    {
        VAR_4 = FUNC_0( VAR_1[VAR_3].str );
        if ( !VAR_4 || 0 == FUNC_1( VAR_1[VAR_3].str, VAR_2, VAR_4 ) )
            break;
        VAR_3++;
    }
    VAR_0->n += VAR_4;
    return VAR_1[VAR_3].id;
}

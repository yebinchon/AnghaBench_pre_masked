
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum directions { ____Placeholder_directions } directions ;
typedef int WORD ;
typedef int WCHAR ;
struct TYPE_3__ {int fLegacyBidiClass; } ;
typedef TYPE_1__ SCRIPT_CONTROL ;
typedef unsigned int DWORD ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int FUNC_0 (int const) ;

__attribute__((used)) static void FUNC_1(const WCHAR *VAR_9, WORD *VAR_10, DWORD VAR_11, const SCRIPT_CONTROL *VAR_12)
{
    static const enum directions VAR_13[16] =
    {
        134,
        134,
        130,
        137,
        136,
        135,
        141,
        138,
        140,
        129,
        128,
        132,
        142,
        133,
        139,
        131
    };

    unsigned VAR_14;

    for (VAR_14 = 0; VAR_14 < VAR_11; ++VAR_14)
    {
        VAR_10[VAR_14] = VAR_13[FUNC_0(VAR_9[VAR_14]) >> 12];
        switch (VAR_10[VAR_14])
        {
        case 136:
            if (!VAR_12->fLegacyBidiClass) break;
            switch (VAR_9[VAR_14])
            {
            case '-':
            case '+': VAR_10[VAR_14] = VAR_4; break;
            case '/': VAR_10[VAR_14] = 138; break;
            }
            break;
        case 131:
            switch (VAR_9[VAR_14])
            {
            case 0x202A: VAR_10[VAR_14] = VAR_1; break;
            case 0x202B: VAR_10[VAR_14] = VAR_6; break;
            case 0x202C: VAR_10[VAR_14] = 131; break;
            case 0x202D: VAR_10[VAR_14] = VAR_3; break;
            case 0x202E: VAR_10[VAR_14] = VAR_8; break;
            case 0x2066: VAR_10[VAR_14] = VAR_2; break;
            case 0x2067: VAR_10[VAR_14] = VAR_7; break;
            case 0x2068: VAR_10[VAR_14] = VAR_0; break;
            case 0x2069: VAR_10[VAR_14] = VAR_5; break;
            }
            break;
        }
    }
}

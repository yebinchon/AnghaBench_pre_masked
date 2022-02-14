
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
struct TYPE_4__ {int wgBlank; int wgDefault; } ;
struct TYPE_5__ {TYPE_1__ sfp; } ;
typedef TYPE_2__ ScriptCache ;
typedef int SCRIPT_ANALYSIS ;
typedef int INT ;
typedef int HDC ;



__attribute__((used)) static void FUNC_0(HDC VAR_0, ScriptCache *VAR_1, SCRIPT_ANALYSIS *VAR_2, WCHAR* VAR_3, INT VAR_4, WORD* VAR_5, INT* VAR_6, INT VAR_7, WORD *VAR_8)
{
    int VAR_9;
    for (VAR_9=0; VAR_9 < VAR_4; VAR_9++)
    {
        switch (VAR_3[VAR_9])
        {
            case 0x000A:
            case 0x000D:
                VAR_5[VAR_9] = VAR_1->sfp.wgBlank;
                break;
            default:
                if (VAR_3[VAR_9] < 0x1C)
                    VAR_5[VAR_9] = VAR_1->sfp.wgDefault;
                else
                    VAR_5[VAR_9] = VAR_1->sfp.wgBlank;
        }
    }
}

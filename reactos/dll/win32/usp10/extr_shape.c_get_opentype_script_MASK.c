
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {scalar_t__ newOtTag; } ;
struct TYPE_9__ {scalar_t__ scriptTag; } ;
struct TYPE_8__ {size_t eScript; } ;
struct TYPE_7__ {scalar_t__ userScript; } ;
typedef TYPE_1__ ScriptCache ;
typedef TYPE_2__ SCRIPT_ANALYSIS ;
typedef scalar_t__ OPENTYPE_TAG ;
typedef int HDC ;
typedef scalar_t__ BOOL ;
 int FUNC_0 (int ,int *,int) ;



 scalar_t__ FUNC_1 (char,char,char,char) ;


 TYPE_6__* VAR_0 ;



 TYPE_3__* VAR_1 ;

__attribute__((used)) static OPENTYPE_TAG FUNC_2(HDC VAR_2, const SCRIPT_ANALYSIS *VAR_3,
        const ScriptCache *VAR_4, BOOL VAR_5)
{
    UINT VAR_6;

    if (VAR_4->userScript)
    {
        if (VAR_5 && VAR_0[VAR_3->eScript].newOtTag
                && VAR_4->userScript == VAR_1[VAR_3->eScript].scriptTag)
            return VAR_0[VAR_3->eScript].newOtTag;

        return VAR_4->userScript;
    }

    if (VAR_5 && VAR_0[VAR_3->eScript].newOtTag)
        return VAR_0[VAR_3->eScript].newOtTag;

    if (VAR_1[VAR_3->eScript].scriptTag)
        return VAR_1[VAR_3->eScript].scriptTag;




    VAR_6 = FUNC_0(VAR_2, ((void*)0), 0x0);
    switch (VAR_6)
    {
        case 142:
        case 140: return FUNC_1('l','a','t','n');
        case 139: return FUNC_1('h','a','n','i');
        case 138: return FUNC_1('l','a','t','n');
        case 137: return FUNC_1('h','a','n','i');
        case 136: return FUNC_1('g','r','e','k');
        case 135: return FUNC_1('h','a','n','g');
        case 132: return FUNC_1('c','y','r','l');
        case 131: return FUNC_1('k','a','n','a');
        case 129: return FUNC_1('l','a','t','n');
        case 128: return FUNC_1('l','a','t','n');
        case 133: return FUNC_1('l','a','t','n');
        case 141: return FUNC_1('a','r','a','b');
        case 134: return FUNC_1('h','e','b','r');
        case 130: return FUNC_1('t','h','a','i');
        default: return FUNC_1('l','a','t','n');
    }
}

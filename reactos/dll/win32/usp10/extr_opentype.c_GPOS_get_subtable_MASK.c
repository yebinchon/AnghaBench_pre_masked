
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int PosFormat; int ExtensionOffset; } ;
struct TYPE_4__ {int LookupType; int * SubTable; } ;
typedef TYPE_1__ OT_LookupTable ;
typedef TYPE_2__ GPOS_ExtensionPosFormat1 ;
typedef int BYTE ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static const BYTE *FUNC_3(const OT_LookupTable *VAR_1, int VAR_2)
{
    int VAR_3 = FUNC_2(VAR_1->SubTable[VAR_2]);

    if (FUNC_2(VAR_1->LookupType) == VAR_0)
    {
        const GPOS_ExtensionPosFormat1 *VAR_4 = (const GPOS_ExtensionPosFormat1 *)((const BYTE *)VAR_1 + VAR_3);
        if (FUNC_2(VAR_4->PosFormat) == 1)
        {
            VAR_3 += FUNC_1(VAR_4->ExtensionOffset);
        }
        else
        {
            FUNC_0("Unhandled Extension Positioning Format %i\n",FUNC_2(VAR_4->PosFormat));
        }
    }
    return (const BYTE *)VAR_1 + VAR_3;
}

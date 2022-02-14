
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef enum gsub_lookup_type { ____Placeholder_gsub_lookup_type } gsub_lookup_type ;
typedef int WORD ;
struct TYPE_15__ {int SubstFormat; int ExtensionLookupType; } ;
struct TYPE_14__ {int * Lookup; } ;
struct TYPE_13__ {int * SubTable; int SubTableCount; int LookupFlag; int LookupType; } ;
typedef TYPE_1__ OT_LookupTable ;
typedef TYPE_2__ OT_LookupList ;
typedef size_t INT ;
typedef TYPE_3__ GSUB_ExtensionPosFormat1 ;
typedef int BYTE ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 size_t VAR_0 ;







 size_t FUNC_2 (TYPE_1__ const*,int *,size_t,size_t,size_t*) ;
 size_t FUNC_3 (TYPE_2__ const*,TYPE_1__ const*,int *,size_t,size_t,size_t*) ;
 size_t FUNC_4 (TYPE_2__ const*,TYPE_1__ const*,int *,size_t,size_t,size_t*) ;
 size_t FUNC_5 (TYPE_1__ const*,int *,size_t,size_t,size_t*) ;
 size_t FUNC_6 (TYPE_1__ const*,int *,size_t,size_t,size_t*) ;
 size_t FUNC_7 (TYPE_1__ const*,int *,size_t,size_t,size_t*) ;
 int FUNC_8 (char*,int,...) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static INT FUNC_10(const OT_LookupList* VAR_1, INT VAR_2, WORD *VAR_3, INT VAR_4, INT VAR_5, INT *VAR_6)
{
    int VAR_7;
    enum gsub_lookup_type VAR_8;
    const OT_LookupTable *VAR_9;

    VAR_7 = FUNC_1(VAR_1->Lookup[VAR_2]);
    VAR_9 = (const OT_LookupTable*)((const BYTE*)VAR_1 + VAR_7);
    VAR_8 = FUNC_1(VAR_9->LookupType);
    FUNC_8("type %#x, flag %#x, subtables %u.\n", VAR_8,
            FUNC_1(VAR_9->LookupFlag),FUNC_1(VAR_9->SubTableCount));

    if (VAR_8 == 131)
    {
        if (FUNC_1(VAR_9->SubTableCount))
        {
            const GSUB_ExtensionPosFormat1 *VAR_10 = (const GSUB_ExtensionPosFormat1 *)((const BYTE *)VAR_9 + FUNC_1(VAR_9->SubTable[0]));
            if (FUNC_1(VAR_10->SubstFormat) == 1)
            {
                VAR_8 = FUNC_1(VAR_10->ExtensionLookupType);
                FUNC_8("extension type %i\n",VAR_8);
            }
            else
            {
                FUNC_0("Unhandled Extension Substitution Format %i\n",FUNC_1(VAR_10->SubstFormat));
            }
        }
        else
        {
            FUNC_9("lookup type is Extension Substitution but no extension subtable exists\n");
        }
    }
    switch(VAR_8)
    {
        case 128:
            return FUNC_7(VAR_9, VAR_3, VAR_4, VAR_5, VAR_6);
        case 129:
            return FUNC_6(VAR_9, VAR_3, VAR_4, VAR_5, VAR_6);
        case 134:
            return FUNC_2(VAR_9, VAR_3, VAR_4, VAR_5, VAR_6);
        case 130:
            return FUNC_5(VAR_9, VAR_3, VAR_4, VAR_5, VAR_6);
        case 133:
            return FUNC_4(VAR_1, VAR_9, VAR_3, VAR_4, VAR_5, VAR_6);
        case 132:
            return FUNC_3(VAR_1, VAR_9, VAR_3, VAR_4, VAR_5, VAR_6);
        case 131:
            FUNC_0("Extension Substitution types not valid here\n");
            break;
        default:
            FUNC_0("Unhandled GSUB lookup type %#x.\n", VAR_8);
    }
    return VAR_0;
}

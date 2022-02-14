
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_51__ TYPE_8__ ;
typedef struct TYPE_50__ TYPE_7__ ;
typedef struct TYPE_49__ TYPE_6__ ;
typedef struct TYPE_48__ TYPE_5__ ;
typedef struct TYPE_47__ TYPE_4__ ;
typedef struct TYPE_46__ TYPE_3__ ;
typedef struct TYPE_45__ TYPE_2__ ;
typedef struct TYPE_44__ TYPE_1__ ;


typedef enum gpos_lookup_type { ____Placeholder_gpos_lookup_type } gpos_lookup_type ;
typedef int WORD ;
struct TYPE_51__ {int du; int dv; } ;
struct TYPE_50__ {int PosFormat; int ExtensionLookupType; } ;
struct TYPE_49__ {int * Lookup; } ;
struct TYPE_48__ {int * SubTable; int SubTableCount; int LookupFlag; int LookupType; } ;
struct TYPE_44__ {int tmAscent; int tmDescent; int tmInternalLeading; } ;
struct TYPE_47__ {TYPE_1__ otmTextMetrics; } ;
struct TYPE_46__ {int y; int x; int member_1; int member_0; } ;
struct TYPE_45__ {int fLogicalOrder; int fRTL; } ;
typedef int ScriptCache ;
typedef TYPE_2__ SCRIPT_ANALYSIS ;
typedef TYPE_3__ POINT ;
typedef TYPE_4__ OUTLINETEXTMETRICW ;
typedef TYPE_5__ OT_LookupTable ;
typedef TYPE_6__ OT_LookupList ;
typedef int LOGFONTW ;
typedef TYPE_7__ GPOS_ExtensionPosFormat1 ;
typedef TYPE_8__ GOFFSET ;
typedef int BYTE ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_2 (int const*,TYPE_4__ const*,int const*,TYPE_2__ const*,int*,TYPE_6__ const*,TYPE_5__ const*,int const*,unsigned int,unsigned int,TYPE_8__*) ;
 unsigned int FUNC_3 (int const*,TYPE_4__ const*,int const*,TYPE_2__ const*,int*,TYPE_6__ const*,TYPE_5__ const*,int const*,unsigned int,unsigned int,TYPE_8__*) ;
 int FUNC_4 (TYPE_5__ const*,TYPE_2__ const*,int const*,unsigned int,unsigned int,int,TYPE_3__*) ;
 int FUNC_5 (int const*,TYPE_5__ const*,TYPE_2__ const*,int const*,unsigned int,unsigned int,int,TYPE_3__*) ;
 int FUNC_6 (TYPE_5__ const*,TYPE_2__ const*,int const*,unsigned int,unsigned int,int,TYPE_3__*) ;
 int FUNC_7 (TYPE_5__ const*,TYPE_2__ const*,int const*,unsigned int,unsigned int,int,TYPE_3__*) ;
 int FUNC_8 (TYPE_5__ const*,TYPE_2__ const*,int const*,unsigned int,unsigned int,int,TYPE_3__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_5__ const*,TYPE_2__ const*,int const*,unsigned int,unsigned int,int,TYPE_3__*,TYPE_3__*) ;
 int FUNC_10 (TYPE_4__ const*,int const*,int ,int ,double*,double*) ;
 int FUNC_11 (char*,int,...) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (double) ;

__attribute__((used)) static unsigned int FUNC_14(const ScriptCache *VAR_1, const OUTLINETEXTMETRICW *VAR_2,
        const LOGFONTW *VAR_3, const SCRIPT_ANALYSIS *VAR_4, int *VAR_5, const OT_LookupList *VAR_6,
        unsigned int VAR_7, const WORD *VAR_8, unsigned int VAR_9, unsigned int VAR_10,
        GOFFSET *VAR_11)
{
    int VAR_12;
    const OT_LookupTable *VAR_13;
    int VAR_14 = VAR_2->otmTextMetrics.tmAscent + VAR_2->otmTextMetrics.tmDescent - VAR_2->otmTextMetrics.tmInternalLeading;
    enum gpos_lookup_type VAR_15;

    VAR_12 = FUNC_1(VAR_6->Lookup[VAR_7]);
    VAR_13 = (const OT_LookupTable*)((const BYTE*)VAR_6 + VAR_12);
    VAR_15 = FUNC_1(VAR_13->LookupType);
    FUNC_11("type %#x, flag %#x, subtables %u.\n", VAR_15,
            FUNC_1(VAR_13->LookupFlag), FUNC_1(VAR_13->SubTableCount));

    if (VAR_15 == VAR_0)
    {
        if (FUNC_1(VAR_13->SubTableCount))
        {
            const GPOS_ExtensionPosFormat1 *VAR_16 = (const GPOS_ExtensionPosFormat1 *)((const BYTE *)VAR_13 + FUNC_1(VAR_13->SubTable[0]));
            if (FUNC_1(VAR_16->PosFormat) == 1)
            {
                VAR_15 = FUNC_1(VAR_16->ExtensionLookupType);
                FUNC_11("extension type %i\n",VAR_15);
            }
            else
            {
                FUNC_0("Unhandled Extension Positioning Format %i\n",FUNC_1(VAR_16->PosFormat));
            }
        }
        else
        {
            FUNC_12("lookup type is Extension Positioning but no extension subtable exists\n");
        }
    }
    switch (VAR_15)
    {
        case 134:
        {
            double VAR_17, VAR_18;
            POINT VAR_19 = {0,0};
            POINT VAR_20 = {0,0};
            FUNC_9(VAR_13, VAR_4, VAR_8, VAR_9, VAR_10, VAR_14, &VAR_19, &VAR_20);
            if (VAR_19.x || VAR_19.y)
            {
                FUNC_10(VAR_2, VAR_3, VAR_19.x, VAR_19.y, &VAR_17, &VAR_18);
                VAR_11[VAR_9].du += FUNC_13(VAR_17);
                VAR_11[VAR_9].dv += FUNC_13(VAR_18);
            }
            if (VAR_20.x || VAR_20.y)
            {
                FUNC_10(VAR_2, VAR_3, VAR_20.x, VAR_20.y, &VAR_17, &VAR_18);
                VAR_5[VAR_9] += FUNC_13(VAR_17);
                if (VAR_20.y)
                    FUNC_0("Unhandled adjustment to Y advancement\n");
            }
            break;
        }

        case 135:
        {
            POINT VAR_21[2]= {{0,0},{0,0}};
            POINT VAR_22[2]= {{0,0},{0,0}};
            double VAR_23, VAR_24;
            int VAR_25;
            int VAR_26 = (VAR_4->fRTL && !VAR_4->fLogicalOrder) ? -1 : 1;
            int VAR_27 = (VAR_4->fRTL && VAR_4->fLogicalOrder) ? -1 : 1;

            VAR_25 = FUNC_8(VAR_13, VAR_4, VAR_8,
                    VAR_9, VAR_10, VAR_14, VAR_22, VAR_21);
            if (VAR_22[0].x || VAR_22[0].y)
            {
                FUNC_10(VAR_2, VAR_3, VAR_22[0].x, VAR_22[0].y, &VAR_23, &VAR_24);
                VAR_11[VAR_9].du += FUNC_13(VAR_23) * VAR_27;
                VAR_11[VAR_9].dv += FUNC_13(VAR_24);
            }
            if (VAR_21[0].x || VAR_21[0].y)
            {
                FUNC_10(VAR_2, VAR_3, VAR_21[0].x, VAR_21[0].y, &VAR_23, &VAR_24);
                VAR_5[VAR_9] += FUNC_13(VAR_23);
            }
            if (VAR_22[1].x || VAR_22[1].y)
            {
                FUNC_10(VAR_2, VAR_3, VAR_22[1].x, VAR_22[1].y, &VAR_23, &VAR_24);
                VAR_11[VAR_9 + VAR_26].du += FUNC_13(VAR_23) * VAR_27;
                VAR_11[VAR_9 + VAR_26].dv += FUNC_13(VAR_24);
            }
            if (VAR_21[1].x || VAR_21[1].y)
            {
                FUNC_10(VAR_2, VAR_3, VAR_21[1].x, VAR_21[1].y, &VAR_23, &VAR_24);
                VAR_5[VAR_9 + VAR_26] += FUNC_13(VAR_23);
            }
            return VAR_25;
        }

        case 133:
        {
            POINT VAR_28 = {0,0};
            double VAR_29, VAR_30;
            int VAR_31 = (VAR_4->fRTL && !VAR_4->fLogicalOrder) ? -1 : 1;

            FUNC_4(VAR_13, VAR_4, VAR_8, VAR_9, VAR_10, VAR_14, &VAR_28);
            if (VAR_28.x || VAR_28.y)
            {
                FUNC_10(VAR_2, VAR_3, VAR_28.x, VAR_28.y, &VAR_29, &VAR_30);

                VAR_11[VAR_9].dv = FUNC_13(VAR_30) + VAR_11[VAR_9+VAR_31].dv;
            }
            break;
        }

        case 132:
        {
            double VAR_32, VAR_33;
            POINT VAR_34 = {0,0};
            int VAR_35 = FUNC_5(VAR_1, VAR_13, VAR_4,
                    VAR_8, VAR_9, VAR_10, VAR_14, &VAR_34);
            if (VAR_35 != -1)
            {
                FUNC_10(VAR_2, VAR_3, VAR_34.x, VAR_34.y, &VAR_32, &VAR_33);
                if (!VAR_4->fRTL) VAR_11[VAR_9].du = FUNC_13(VAR_32) - VAR_5[VAR_35];
                else
                {
                    if (VAR_4->fLogicalOrder) VAR_32 *= -1;
                    VAR_11[VAR_9].du = FUNC_13(VAR_32);
                }
                VAR_11[VAR_9].dv = FUNC_13(VAR_33);
            }
            break;
        }

        case 131:
        {
            double VAR_36, VAR_37;
            POINT VAR_38 = {0,0};
            FUNC_6(VAR_13, VAR_4, VAR_8, VAR_9, VAR_10, VAR_14, &VAR_38);
            if (VAR_38.x || VAR_38.y)
            {
                FUNC_10(VAR_2, VAR_3, VAR_38.x, VAR_38.y, &VAR_36, &VAR_37);
                VAR_11[VAR_9].du = (FUNC_13(VAR_36) - VAR_5[VAR_9-1]);
                VAR_11[VAR_9].dv = FUNC_13(VAR_37);
            }
            break;
        }

        case 130:
        {
            double VAR_39, VAR_40;
            POINT VAR_41 = {0,0};
            int VAR_42 = (VAR_4->fRTL && !VAR_4->fLogicalOrder) ? -1 : 1;
            if (FUNC_7(VAR_13, VAR_4, VAR_8, VAR_9, VAR_10, VAR_14, &VAR_41))
            {
                FUNC_10(VAR_2, VAR_3, VAR_41.x, VAR_41.y, &VAR_39, &VAR_40);
                if (VAR_4->fRTL && VAR_4->fLogicalOrder) VAR_39 *= -1;
                VAR_11[VAR_9].du = FUNC_13(VAR_39) + VAR_11[VAR_9 - VAR_42].du;
                VAR_11[VAR_9].dv = FUNC_13(VAR_40) + VAR_11[VAR_9 - VAR_42].dv;
            }
            break;
        }

        case 129:
            return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                    VAR_6, VAR_13, VAR_8, VAR_9, VAR_10, VAR_11);

        case 128:
            return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                    VAR_6, VAR_13, VAR_8, VAR_9, VAR_10, VAR_11);

        default:
            FUNC_0("Unhandled GPOS lookup type %#x.\n", VAR_15);
    }
    return 1;
}

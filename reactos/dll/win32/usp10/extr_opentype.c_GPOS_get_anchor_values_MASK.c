
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_9__ {int AnchorFormat; int YCoordinate; int XCoordinate; } ;
struct TYPE_8__ {int YCoordinate; int XCoordinate; } ;
struct TYPE_7__ {int YDeviceTable; int XDeviceTable; int YCoordinate; int XCoordinate; } ;
struct TYPE_6__ {short x; short y; } ;
typedef TYPE_1__ POINT ;
typedef int OT_DeviceTable ;
typedef TYPE_2__ GPOS_AnchorFormat3 ;
typedef TYPE_3__ GPOS_AnchorFormat2 ;
typedef TYPE_4__ GPOS_AnchorFormat1 ;
typedef int BYTE ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 short FUNC_2 (int const*,int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(const void *VAR_0, POINT *VAR_1, WORD VAR_2)
{
    const GPOS_AnchorFormat1* VAR_3 = (const GPOS_AnchorFormat1*)VAR_0;

    switch (FUNC_1(VAR_3->AnchorFormat))
    {
        case 1:
        {
            FUNC_3("Anchor Format 1\n");
            VAR_1->x = (short)FUNC_1(VAR_3->XCoordinate);
            VAR_1->y = (short)FUNC_1(VAR_3->YCoordinate);
            break;
        }
        case 2:
        {
            const GPOS_AnchorFormat2* VAR_4 = (const GPOS_AnchorFormat2*)VAR_0;
            FUNC_3("Anchor Format 2\n");
            VAR_1->x = (short)FUNC_1(VAR_4->XCoordinate);
            VAR_1->y = (short)FUNC_1(VAR_4->YCoordinate);
            break;
        }
        case 3:
        {
            int VAR_5;
            const GPOS_AnchorFormat3* VAR_6 = (const GPOS_AnchorFormat3*)VAR_0;
            FUNC_3("Anchor Format 3\n");
            VAR_1->x = (short)FUNC_1(VAR_6->XCoordinate);
            VAR_1->y = (short)FUNC_1(VAR_6->YCoordinate);
            VAR_5 = FUNC_1(VAR_6->XDeviceTable);
            FUNC_3("ppem %i\n",VAR_2);
            if (VAR_5)
            {
                const OT_DeviceTable* VAR_7 = ((void*)0);
                VAR_7 = (const OT_DeviceTable*)((const BYTE*)VAR_6 + VAR_5);
                VAR_1->x += FUNC_2(VAR_7, VAR_2);
            }
            VAR_5 = FUNC_1(VAR_6->YDeviceTable);
            if (VAR_5)
            {
                const OT_DeviceTable* VAR_8 = ((void*)0);
                VAR_8 = (const OT_DeviceTable*)((const BYTE*)VAR_6 + VAR_5);
                VAR_1->y += FUNC_2(VAR_8, VAR_2);
            }
            break;
        }
        default:
            FUNC_0("Unknown Anchor Format %i\n",FUNC_1(VAR_3->AnchorFormat));
            VAR_1->x = 0;
            VAR_1->y = 0;
    }
}

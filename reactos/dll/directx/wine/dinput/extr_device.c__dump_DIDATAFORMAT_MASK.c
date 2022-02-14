
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dwSize; int dwObjSize; int dwFlags; unsigned int dwNumObjs; TYPE_1__* rgodf; int dwDataSize; } ;
struct TYPE_4__ {int dwFlags; int dwType; int dwOfs; int pguid; } ;
typedef int DIOBJECTDATAFORMAT ;
typedef TYPE_2__ DIDATAFORMAT ;




 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(const DIDATAFORMAT *VAR_0) {
    unsigned int VAR_1;

    FUNC_0("Dumping DIDATAFORMAT structure:\n");
    FUNC_0("  - dwSize: %d\n", VAR_0->dwSize);
    if (VAR_0->dwSize != sizeof(DIDATAFORMAT)) {
        FUNC_1("Non-standard DIDATAFORMAT structure size %d\n", VAR_0->dwSize);
    }
    FUNC_0("  - dwObjsize: %d\n", VAR_0->dwObjSize);
    if (VAR_0->dwObjSize != sizeof(DIOBJECTDATAFORMAT)) {
        FUNC_1("Non-standard DIOBJECTDATAFORMAT structure size %d\n", VAR_0->dwObjSize);
    }
    FUNC_0("  - dwFlags: 0x%08x (", VAR_0->dwFlags);
    switch (VAR_0->dwFlags) {
        case 129: FUNC_0("DIDF_ABSAXIS"); break;
 case 128: FUNC_0("DIDF_RELAXIS"); break;
 default: FUNC_0("unknown"); break;
    }
    FUNC_0(")\n");
    FUNC_0("  - dwDataSize: %d\n", VAR_0->dwDataSize);
    FUNC_0("  - dwNumObjs: %d\n", VAR_0->dwNumObjs);

    for (VAR_1 = 0; VAR_1 < VAR_0->dwNumObjs; VAR_1++) {
 FUNC_0("  - Object %d:\n", VAR_1);
 FUNC_0("      * GUID: %s ('%s')\n", FUNC_5(VAR_0->rgodf[VAR_1].pguid), FUNC_4(VAR_0->rgodf[VAR_1].pguid));
        FUNC_0("      * dwOfs: %d\n", VAR_0->rgodf[VAR_1].dwOfs);
        FUNC_0("      * dwType: 0x%08x\n", VAR_0->rgodf[VAR_1].dwType);
 FUNC_0("        "); FUNC_2(VAR_0->rgodf[VAR_1].dwType); FUNC_0("\n");
        FUNC_0("      * dwFlags: 0x%08x\n", VAR_0->rgodf[VAR_1].dwFlags);
 FUNC_0("        "); FUNC_3(VAR_0->rgodf[VAR_1].dwFlags); FUNC_0("\n");
    }
}

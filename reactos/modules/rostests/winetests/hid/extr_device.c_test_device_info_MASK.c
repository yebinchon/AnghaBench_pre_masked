
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int device_name ;
typedef int attributes ;
typedef int WCHAR ;
struct TYPE_6__ {int Size; int VersionNumber; int ProductID; int VendorID; } ;
struct TYPE_5__ {int Usage; int UsagePage; } ;
typedef int PHIDP_PREPARSED_DATA ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_1__ HIDP_CAPS ;
typedef TYPE_2__ HIDD_ATTRIBUTES ;
typedef int HANDLE ;
typedef int BOOL ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,int) ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int,char*,scalar_t__) ;
 int FUNC_7 (char*,int ,int ,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(HANDLE VAR_1)
{
    PHIDP_PREPARSED_DATA VAR_2;
    HIDP_CAPS VAR_3;
    HIDD_ATTRIBUTES VAR_4;
    NTSTATUS VAR_5;
    BOOL VAR_6;
    WCHAR VAR_7[128];

    VAR_6 = FUNC_3(VAR_1, &VAR_2);
    FUNC_6(VAR_6, "Failed to get preparsed data(0x%x)\n", FUNC_0());
    VAR_5 = FUNC_5(VAR_2, &VAR_3);
    FUNC_6(VAR_5 == VAR_0, "Failed to get Caps(0x%x)\n", VAR_5);
    VAR_6 = FUNC_4(VAR_1, VAR_7, sizeof(VAR_7));
    FUNC_6(VAR_6, "Failed to get product string(0x%x)\n", FUNC_0());
    FUNC_7("Found device %s (%02x, %02x)\n", FUNC_8(VAR_7), VAR_3.UsagePage, VAR_3.Usage);
    VAR_6 = FUNC_1(VAR_2);
    FUNC_6(VAR_6, "Failed to free preparsed data(0x%x)\n", FUNC_0());
    VAR_6 = FUNC_2(VAR_1, &VAR_4);
    FUNC_6(VAR_6, "Failed to get device attributes (0x%x)\n", FUNC_0());
    FUNC_6(VAR_4.Size == sizeof(VAR_4), "Unexpected HIDD_ATTRIBUTES size: %d\n", VAR_4.Size);
    FUNC_7("Device attributes: vid:%04x pid:%04x ver:%04x\n", VAR_4.VendorID, VAR_4.ProductID, VAR_4.VersionNumber);
}

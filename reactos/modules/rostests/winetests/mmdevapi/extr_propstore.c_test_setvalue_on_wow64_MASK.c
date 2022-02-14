
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int regval ;
typedef char WCHAR ;
struct TYPE_13__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_12__ {int member_0; int member_1; int member_2; TYPE_2__ member_3; } ;
struct TYPE_16__ {int member_1; TYPE_1__ member_0; } ;
struct TYPE_14__ {char* pwszVal; int ulVal; } ;
struct TYPE_15__ {TYPE_3__ u; int vt; } ;
typedef TYPE_4__ PROPVARIANT ;
typedef TYPE_5__ PROPERTYKEY ;
typedef int LPBYTE ;
typedef int LONG ;
typedef int IPropertyStore ;
typedef scalar_t__ HRESULT ;
typedef int HKEY ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,TYPE_5__ const*,TYPE_4__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_5__ const*,TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__ const VAR_6 ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ,int,int *) ;
 int FUNC_6 (int ,char const*,int *,int*,int ,int*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int,char*,int) ;
 char* VAR_11 ;
 char* VAR_12 ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(IPropertyStore *VAR_13)
{
    PROPVARIANT VAR_14;
    HRESULT VAR_15;
    LONG VAR_16;
    WCHAR *VAR_17;
    HKEY VAR_18, VAR_19, VAR_20;
    DWORD VAR_21, VAR_22, VAR_23;

    static const PROPERTYKEY VAR_24 = {
        {0x1da5d803, 0xd492, 0x4edd, {0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x00}}, 0x7f
    };
    static const WCHAR VAR_25[] = {'{','1','D','A','5','D','8','0','3','-','D','4','9','2','-','4','E','D','D','-','8','C','2','3','-','E','0','C','0','F','F','E','E','7','F','0','0','}',',','1','2','7',0};

    FUNC_3(&VAR_14);

    VAR_14.vt = VAR_9;
    VAR_15 = FUNC_1(VAR_13, &VAR_6, &VAR_14);
    FUNC_7(VAR_15 == VAR_8, "Failed to get Endpoint GUID: %08x\n", VAR_15);

    VAR_17 = VAR_14.u.pwszVal;

    VAR_14.vt = VAR_10;
    VAR_14.u.ulVal = 0xAB;

    VAR_15 = FUNC_2(VAR_13, &VAR_24, &VAR_14);
    FUNC_7(VAR_15 == VAR_8 || VAR_15 == VAR_2, "SetValue failed: %08x\n", VAR_15);
    if (VAR_15 != VAR_8)
    {
        FUNC_8("Missing permission to write to registry\n");
        return;
    }

    VAR_14.u.ulVal = 0x00;

    VAR_15 = FUNC_1(VAR_13, &VAR_24, &VAR_14);
    FUNC_7(VAR_15 == VAR_8, "GetValue failed: %08x\n", VAR_15);
    FUNC_7(VAR_14.u.ulVal == 0xAB, "Got wrong value: 0x%x\n", VAR_14.u.ulVal);


    VAR_16 = FUNC_5(VAR_3, VAR_12, 0, VAR_4|VAR_5, &VAR_18);
    FUNC_7(VAR_16 == VAR_1, "Couldn't open mmdevices Render key: %u\n", VAR_16);

    VAR_16 = FUNC_5(VAR_18, VAR_17, 0, VAR_4|VAR_5, &VAR_20);
    FUNC_7(VAR_16 == VAR_1, "Couldn't open mmdevice guid key: %u\n", VAR_16);

    VAR_16 = FUNC_5(VAR_20, VAR_11, 0, VAR_4|VAR_5, &VAR_19);
    FUNC_7(VAR_16 == VAR_1, "Couldn't open mmdevice property key: %u\n", VAR_16);


    VAR_23 = sizeof(VAR_22);
    VAR_16 = FUNC_6(VAR_19, VAR_25, ((void*)0), &VAR_21, (LPBYTE)&VAR_22, &VAR_23);
    FUNC_7(VAR_16 == VAR_1, "Couldn't get bogus propertykey value: %u\n", VAR_16);
    FUNC_7(VAR_21 == VAR_7, "Got wrong value type: %u\n", VAR_21);
    FUNC_7(VAR_22 == 0xAB, "Got wrong value: 0x%x\n", VAR_22);

    FUNC_4(VAR_19);
    FUNC_4(VAR_20);
    FUNC_4(VAR_18);

    FUNC_0(VAR_17);


    VAR_16 = FUNC_5(VAR_3, VAR_12, 0, VAR_4, &VAR_18);
    FUNC_7(VAR_16 == VAR_0, "Wrong error when opening mmdevices Render key: %u\n", VAR_16);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int temp ;
typedef int PROPERTYKEY ;
typedef int IPropertyStore ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(IPropertyStore *VAR_5)
{
    HRESULT VAR_6;
    DWORD VAR_7;
    DWORD VAR_8;
    PROPERTYKEY VAR_9;
    BOOL VAR_10 = VAR_2;
    BOOL VAR_11 = VAR_2;
    char VAR_12[128];
    VAR_12[sizeof(VAR_12)-1] = 0;

    VAR_6 = FUNC_1(VAR_5, &VAR_7);

    FUNC_4(VAR_6 == VAR_3, "Failed with %08x\n", VAR_6);
    FUNC_4(VAR_7 > 0, "Propcount %d should be greater than zero\n", VAR_7);

    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
 VAR_6 = FUNC_0(VAR_5, VAR_8, &VAR_9);
 FUNC_4(VAR_6 == VAR_3, "Failed with %08x\n", VAR_6);
 if (FUNC_2(VAR_9, VAR_1))
     VAR_10 = VAR_4;
 if (FUNC_2(VAR_9, VAR_0))
     VAR_11 = VAR_4;
    }
    FUNC_4(VAR_10 ||
            FUNC_3(!VAR_10) , "DEVPKEY_Device_FriendlyName not found\n");
    FUNC_4(VAR_11, "DEVPKEY_Device_DeviceDesc not found\n");
}

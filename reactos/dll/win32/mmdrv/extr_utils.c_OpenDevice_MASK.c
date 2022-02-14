
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int ***** PHANDLE ;
typedef int MMRESULT ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;

 int **** FUNC_0 (int *,scalar_t__,int ,int *,int ,int ,int *) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int ***** VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_2 () ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;


 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,scalar_t__,scalar_t__) ;

MMRESULT FUNC_5(UINT VAR_14, DWORD VAR_15, PHANDLE VAR_16,
                    DWORD VAR_17)
{
    FUNC_1("OpenDevice()\n");
    WCHAR VAR_18[VAR_11];
    *VAR_16 = *VAR_4;

    if (VAR_15 > VAR_10)
        return VAR_7;

    switch(VAR_14)
    {
        case 128 :
            FUNC_4(VAR_18, L"\\\\.%ls%d", VAR_13 + FUNC_3("\\Device"), VAR_15);
            break;
        case 129 :
            FUNC_4(VAR_18, L"\\\\.%ls%d", VAR_12 + FUNC_3("\\Device"), VAR_15);
            break;
        case 130 :
            FUNC_4(VAR_18, L"\\\\.%ls%d", VAR_6 + FUNC_3("\\Device"), VAR_15);
            break;
        case 131 :
            FUNC_4(VAR_18, L"\\\\.%ls%d", VAR_5 + FUNC_3("\\Device"), VAR_15);
            break;
  case 132 :
    FUNC_4(VAR_18, L"\\\\.%ls%d", VAR_0 + FUNC_3("\\Device"), VAR_15);
    break;
        default :
            FUNC_1("No Auido Device Found");
            return VAR_7;
    };

    FUNC_1("Attempting to open %S\n", VAR_18);

    *VAR_16 = FUNC_0(VAR_18, VAR_17, VAR_2, ((void*)0),
                                VAR_9, VAR_17 != VAR_3 ? VAR_1 : 0,
                                ((void*)0));

    FUNC_1("DeviceHandle == 0x%x\n", (int)*VAR_16);

    if (VAR_16 == VAR_4)
        return FUNC_2();

    return VAR_8;
}

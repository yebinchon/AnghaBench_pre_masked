
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int testfilterW ;
typedef int clsidstring ;
typedef char WCHAR ;
typedef int ULONG ;
struct TYPE_3__ {int Clsid; int Name; } ;
typedef TYPE_1__ REGFILTER ;
typedef scalar_t__ LRESULT ;
typedef int IFilterMapper2 ;
typedef int IFilterMapper ;
typedef int IEnumRegFilters ;
typedef int IEnumMoniker ;
typedef scalar_t__ HRESULT ;
typedef int HKEY ;
typedef int CLSID ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int *,void**) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int,TYPE_1__**,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int **,int ,int ,int ,int ,int ,int *,int *,int *,int ,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *,void**) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int **,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_9 (int *,int ,char const*,int ) ;
 scalar_t__ FUNC_10 (int *,int ,char const*,int ,int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_11 (int *,int ,char const*,int ,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_14 (int *,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ,char*,int ,int *,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_17 (int ,char*) ;
 int FUNC_18 (int ,int *,int ,int ,int *,int) ;
 scalar_t__ VAR_11 ;
 int FUNC_19 (int *,char*,int) ;
 int VAR_12 ;
 int FUNC_20 (char const*,int *) ;
 int FUNC_21 (char*,char*) ;
 int FUNC_22 (int ,char const*) ;
 int FUNC_23 (char*,char const*) ;
 int FUNC_24 (int,char*,...) ;
 int FUNC_25 (char*) ;

__attribute__((used)) static void FUNC_26(void)
{
    static const WCHAR VAR_13[] = {'T','e','s','t','f','i','l','t','e','r',0};
    static const WCHAR VAR_14[] = {'C','L','S','I','D','\\',0};
    static const WCHAR VAR_15[] = {'P','i','n','1',0};
    IEnumRegFilters *VAR_16;
    IEnumMoniker *VAR_17;
    IFilterMapper2 *VAR_18;
    IFilterMapper *VAR_19;
    REGFILTER *VAR_20;
    WCHAR VAR_21[40];
    WCHAR VAR_22[50];
    ULONG VAR_23;
    CLSID VAR_24;
    LRESULT VAR_25;
    HRESULT VAR_26;
    BOOL VAR_27;
    HKEY VAR_28;



    FUNC_0(&VAR_24);
    FUNC_19(&VAR_24, VAR_21, sizeof(VAR_21));
    FUNC_23(VAR_22, VAR_14);
    FUNC_21(VAR_22, VAR_21);
    VAR_25 = FUNC_16(VAR_5, VAR_22, 0, ((void*)0), 0, VAR_8, ((void*)0), &VAR_28, ((void*)0));
    if (VAR_25 == VAR_2)
    {
        FUNC_25("Not authorized to register filters\n");
        return;
    }




    VAR_26 = FUNC_1(&VAR_1, ((void*)0), VAR_0, &VAR_7, (void **)&VAR_18);
    FUNC_24(VAR_26 == VAR_11, "CoCreateInstance failed with %x\n", VAR_26);

    VAR_26 = FUNC_6(VAR_18, &VAR_6, (void **)&VAR_19);
    FUNC_24(VAR_26 == VAR_11, "IFilterMapper2_QueryInterface failed with %x\n", VAR_26);


    FUNC_18(VAR_28, ((void*)0), 0, VAR_10, (BYTE *)VAR_13, sizeof(VAR_13));
    FUNC_15(VAR_28);

    VAR_26 = FUNC_9(VAR_19, VAR_24, VAR_13, VAR_9);
    FUNC_24(VAR_26 == VAR_11, "RegisterFilter failed: %#x\n", VAR_26);

    VAR_26 = FUNC_10(VAR_19, VAR_24, VAR_15, VAR_12, VAR_3, VAR_3, VAR_3, VAR_4, ((void*)0));
    FUNC_24(VAR_26 == VAR_11, "RegisterPin failed: %#x\n", VAR_26);

    VAR_26 = FUNC_11(VAR_19, VAR_24, VAR_15, VAR_4, VAR_4);
    FUNC_24(VAR_26 == VAR_11, "RegisterPinType failed: %#x\n", VAR_26);

    VAR_26 = FUNC_5(VAR_18, &VAR_17, 0, VAR_12, VAR_9, VAR_12,
            0, ((void*)0), ((void*)0), &VAR_4, VAR_3, VAR_3, 0, ((void*)0), ((void*)0), &VAR_4);
    FUNC_24(VAR_26 == VAR_11, "IFilterMapper2_EnumMatchingFilters failed: %x\n", VAR_26);
    FUNC_24(FUNC_20(VAR_13, VAR_17), "IFilterMapper2 didn't find filter\n");
    FUNC_2(VAR_17);

    VAR_27 = VAR_3;
    VAR_26 = FUNC_8(VAR_19, &VAR_16, VAR_9, VAR_12, VAR_4, VAR_4,
        VAR_3, VAR_3, VAR_4, VAR_4);
    FUNC_24(VAR_26 == VAR_11, "IFilterMapper_EnumMatchingFilters failed with %x\n", VAR_26);
    while(!VAR_27 && FUNC_3(VAR_16, 1, &VAR_20, &VAR_23) == VAR_11)
    {
        if (!FUNC_22(VAR_20->Name, VAR_13) && FUNC_14(&VAR_24, &VAR_20->Clsid))
            VAR_27 = VAR_12;
    }
    FUNC_4(VAR_16);
    FUNC_24(VAR_27, "IFilterMapper didn't find filter\n");

    VAR_26 = FUNC_13(VAR_19, VAR_24);
    FUNC_24(VAR_26 == VAR_11, "FilterMapper_UnregisterFilter failed with %x\n", VAR_26);

    VAR_26 = FUNC_5(VAR_18, &VAR_17, 0, VAR_12, VAR_9, VAR_12,
            0, ((void*)0), ((void*)0), &VAR_4, VAR_3, VAR_3, 0, ((void*)0), ((void*)0), &VAR_4);
    FUNC_24(VAR_26 == VAR_11, "IFilterMapper2_EnumMatchingFilters failed: %x\n", VAR_26);
    FUNC_24(!FUNC_20(VAR_13, VAR_17), "IFilterMapper2 shouldn't find filter\n");
    FUNC_2(VAR_17);

    VAR_27 = VAR_3;
    VAR_26 = FUNC_8(VAR_19, &VAR_16, VAR_9, VAR_12, VAR_4, VAR_4,
        VAR_3, VAR_3, VAR_4, VAR_4);
    FUNC_24(VAR_26 == VAR_11, "IFilterMapper_EnumMatchingFilters failed with %x\n", VAR_26);
    while(!VAR_27 && FUNC_3(VAR_16, 1, &VAR_20, &VAR_23) == VAR_11)
    {
        if (!FUNC_22(VAR_20->Name, VAR_13) && FUNC_14(&VAR_24, &VAR_20->Clsid))
            VAR_27 = VAR_12;
    }
    FUNC_4(VAR_16);
    FUNC_24(!VAR_27, "IFilterMapper shouldn't find filter\n");

    VAR_25 = FUNC_17(VAR_5, VAR_22);
    FUNC_24(!VAR_25, "RegDeleteKeyA failed: %lu\n", VAR_25);

    VAR_26 = FUNC_9(VAR_19, VAR_24, VAR_13, VAR_9);
    FUNC_24(VAR_26 == VAR_11, "RegisterFilter failed: %#x\n", VAR_26);

    VAR_26 = FUNC_13(VAR_19, VAR_24);
    FUNC_24(VAR_26 == VAR_11, "FilterMapper_UnregisterFilter failed with %x\n", VAR_26);

    FUNC_12(VAR_19);
    FUNC_7(VAR_18);
}

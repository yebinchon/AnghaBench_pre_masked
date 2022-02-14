
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int product ;
typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef int MSIPACKAGE ;
typedef int * LPVOID ;
typedef scalar_t__ LPCWSTR ;
typedef int LPBYTE ;
typedef scalar_t__ INT ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int ) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int *,int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int,int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int *,scalar_t__*,int *,int *,int *,int *) ;
 int FUNC_9 (int ,int ,int *,int *,int ,scalar_t__*) ;
 int VAR_9 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int *,scalar_t__,int *) ;
 int FUNC_12 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *) ;

__attribute__((used)) static UINT FUNC_17(MSIRECORD *VAR_12, LPVOID VAR_13)
{
    MSIPACKAGE *VAR_14 = VAR_13;
    WCHAR VAR_15[VAR_9];
    DWORD VAR_16 = 0, VAR_17 = 0, VAR_18 = sizeof(VAR_15)/sizeof(VAR_15[0]);
    LPCWSTR VAR_19;
    HKEY VAR_20 = 0;
    UINT VAR_21 = VAR_0;
    MSIRECORD *VAR_22;

    VAR_19 = FUNC_5(VAR_12,1);

    VAR_21 = FUNC_1(VAR_19, &VAR_20, VAR_1);
    if (VAR_21 != VAR_0)
        return VAR_0;

    VAR_22 = FUNC_2(1);
    VAR_17 = FUNC_4(VAR_12,5);

    while (VAR_21 == VAR_0)
    {
        VAR_21 = FUNC_8(VAR_20, VAR_16, VAR_15, &VAR_18, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        if (VAR_21 == VAR_0)
        {
            WCHAR VAR_23[VAR_2];
            LPCWSTR VAR_24, VAR_25, VAR_26;
            DWORD VAR_27 = 0, VAR_28, VAR_29 = 0x100;
            HKEY VAR_30;
            INT VAR_31;

            FUNC_10("Looking at index %u product %s\n", VAR_16, FUNC_13(VAR_15));

            FUNC_16(VAR_15, VAR_23);
            if (FUNC_0(VAR_23, ((void*)0), VAR_7, &VAR_30, VAR_1) &&
                FUNC_0(VAR_23, ((void*)0), VAR_8, &VAR_30, VAR_1) &&
                FUNC_0(VAR_23, ((void*)0), VAR_6, &VAR_30, VAR_1))
            {
                FUNC_10("product key not found\n");
                VAR_21 = VAR_0;
                VAR_16 ++;
                continue;
            }

            VAR_29 = sizeof(DWORD);
            FUNC_9(VAR_30, VAR_5, ((void*)0), ((void*)0), (LPBYTE)&VAR_27, &VAR_29);


            VAR_24 = FUNC_5(VAR_12,2);
            if (VAR_24)
            {
                VAR_28 = FUNC_14(VAR_24);
                VAR_31 = VAR_27 - VAR_28;
                if (VAR_31 < 0 || (VAR_31 == 0 && !(VAR_17 & VAR_11)))
                {
                    FUNC_10("version below minimum\n");
                    FUNC_7(VAR_30);
                    VAR_16 ++;
                    continue;
                }
            }


            VAR_24 = FUNC_5(VAR_12,3);
            if (VAR_24)
            {
                VAR_28 = FUNC_14(VAR_24);
                VAR_31 = VAR_27 - VAR_28;
                if (VAR_31 > 0 || (VAR_31 == 0 && !(VAR_17 & VAR_10)))
                {
                    FUNC_7(VAR_30);
                    VAR_16 ++;
                    continue;
                }
                FUNC_10("version above maximum\n");
            }


            VAR_29 = sizeof(DWORD);
            FUNC_9(VAR_30, VAR_4, ((void*)0), ((void*)0), (LPBYTE)&VAR_27, &VAR_29);
            FUNC_7(VAR_30);
            VAR_25 = FUNC_5(VAR_12,4);
            if (!FUNC_12(VAR_27, VAR_25, VAR_17))
            {
                VAR_16 ++;
                FUNC_10("language doesn't match\n");
                continue;
            }
            FUNC_10("found related product\n");

            VAR_26 = FUNC_5(VAR_12, 7);
            FUNC_11(VAR_14, VAR_26, VAR_23);
            FUNC_6(VAR_22, 1, VAR_23);
            FUNC_3(VAR_14, VAR_3, VAR_22);
        }
        VAR_16 ++;
    }
    FUNC_7(VAR_20);
    FUNC_15( &VAR_22->hdr);

    return VAR_0;
}

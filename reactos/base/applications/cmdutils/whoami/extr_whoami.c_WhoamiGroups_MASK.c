
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmpBuffer ;
typedef int szGroupName ;
typedef int szDomainName ;
typedef int WhoamiTable ;
typedef int WCHAR ;
typedef int UINT ;
struct TYPE_4__ {size_t GroupCount; TYPE_1__* Groups; } ;
struct TYPE_3__ {int Attributes; int Sid; } ;
typedef size_t SID_NAME_USE ;
typedef TYPE_2__* PTOKEN_GROUPS ;
typedef int * LPWSTR ;
typedef int LPVOID ;
typedef size_t DWORD ;
typedef int BYTE ;


 int FUNC_0 (int ,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *,size_t*,int *,size_t*,size_t*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 int FUNC_3 (int *,size_t,int *) ;
 int VAR_20 ;
 int VAR_21 ;
 int * FUNC_4 (size_t,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int,int) ;
 int FUNC_11 (int *,int) ;
 size_t FUNC_12 (int *) ;
 int FUNC_13 (int *,size_t,char*,int *,char*,int *) ;
 size_t FUNC_14 (scalar_t__,int ) ;
 scalar_t__ FUNC_15 (int *) ;

int FUNC_16(void)
{
    DWORD VAR_22 = 0;
    LPWSTR VAR_23 = 0;

    static WCHAR VAR_24[255] = {0};
    static WCHAR VAR_25[255] = {0};

    DWORD VAR_26 = FUNC_12(VAR_24);
    DWORD VAR_27 = FUNC_12(VAR_24);

    SID_NAME_USE VAR_28 = 0;
    BYTE VAR_29[12] =
    {
                                    -1,
                                    -1,
                                    -1,
                                    -1,
                                    VAR_9,
                                    VAR_11,
                                    -1,
                                    -1,
                                    -1,
                                    -1,
                                    VAR_10
    };

    PTOKEN_GROUPS VAR_30 = (PTOKEN_GROUPS)FUNC_6(VAR_20);
    UINT VAR_31;
    WhoamiTable *VAR_32 = ((void*)0);

    if (VAR_30 == ((void*)0))
    {
        return 1;
    }


    VAR_31 = 1;

    VAR_32 = FUNC_4(VAR_30->GroupCount + 1, 4);

    FUNC_8(VAR_8);

    FUNC_10(VAR_32, FUNC_7(VAR_5), 0, 0);
    FUNC_10(VAR_32, FUNC_7(VAR_7), 0, 1);
    FUNC_10(VAR_32, FUNC_7(VAR_6), 0, 2);
    FUNC_10(VAR_32, FUNC_7(VAR_4), 0, 3);

    for (VAR_22 = 0; VAR_22 < VAR_30->GroupCount; VAR_22++)
    {
        FUNC_2(((void*)0),
                          VAR_30->Groups[VAR_22].Sid,
                          (LPWSTR)&VAR_24,
                          &VAR_26,
                          (LPWSTR)&VAR_25,
                          &VAR_27,
                          &VAR_28);


        if ((VAR_28 == VAR_19 || VAR_28 == VAR_17 ||
            VAR_28 == VAR_18) && !(VAR_30->Groups[VAR_22].Attributes & VAR_14))
        {
                wchar_t VAR_33[666];





            if (VAR_30->Groups[VAR_22].Attributes == 0x60)
                VAR_30->Groups[VAR_22].Attributes = 0x07;


            FUNC_13((LPWSTR)&VAR_33,
                       FUNC_12(VAR_33),
                       L"%s%s%s",
                       VAR_25,
                       VAR_27 ? L"\\" : L"",
                       VAR_24);

            FUNC_10(VAR_32, VAR_33, VAR_31, 0);


            FUNC_10(VAR_32, FUNC_7(VAR_29[VAR_28]), VAR_31, 1);


            FUNC_0(VAR_30->Groups[VAR_22].Sid, &VAR_23);

            FUNC_10(VAR_32, VAR_23, VAR_31, 2);

            FUNC_1(VAR_23);


            FUNC_11(VAR_33, sizeof(VAR_33));

            if (VAR_30->Groups[VAR_22].Attributes & VAR_15)
                FUNC_3(VAR_33, FUNC_12(VAR_33), FUNC_7(VAR_2));
            if (VAR_30->Groups[VAR_22].Attributes & VAR_13)
                FUNC_3(VAR_33, FUNC_12(VAR_33), FUNC_7(VAR_1));
            if (VAR_30->Groups[VAR_22].Attributes & VAR_12)
                FUNC_3(VAR_33, FUNC_12(VAR_33), FUNC_7(VAR_0));
            if (VAR_30->Groups[VAR_22].Attributes & VAR_16)
                FUNC_3(VAR_33, FUNC_12(VAR_33), FUNC_7(VAR_3));


            VAR_33[FUNC_14(FUNC_15(VAR_33) - 2, 0)] = VAR_21;

            FUNC_10(VAR_32, VAR_33, VAR_31, 3);

            VAR_31++;
        }


        FUNC_11(VAR_24, sizeof(VAR_24));
        FUNC_11(VAR_25, sizeof(VAR_25));

        VAR_26 = 255;
        VAR_27 = 255;
    }

    FUNC_9(VAR_32);


    FUNC_5((LPVOID)VAR_30);

    return 0;
}

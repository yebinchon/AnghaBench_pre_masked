
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {scalar_t__ pwszName; } ;
typedef TYPE_1__* PCCRYPT_OID_INFO ;
typedef scalar_t__* LPSTR ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int ,scalar_t__*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,scalar_t__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int ,int *,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int ,int ,int,int ) ;
 scalar_t__* FUNC_7 () ;
 int VAR_10 ;
 scalar_t__* FUNC_8 (scalar_t__*,char) ;

__attribute__((used)) static void FUNC_9(HWND VAR_11)
{
    HWND VAR_12 = FUNC_2(VAR_11, VAR_4);
    WCHAR VAR_13[VAR_7];
    LPSTR VAR_14;
    int VAR_15;

    FUNC_5(VAR_10, VAR_6, VAR_13, FUNC_0(VAR_13));
    VAR_15 = FUNC_6(VAR_12, VAR_0, -1, (LPARAM)VAR_13);
    FUNC_6(VAR_12, VAR_2, VAR_15, (LPARAM)VAR_9);
    FUNC_5(VAR_10, VAR_5, VAR_13, FUNC_0(VAR_13));
    VAR_15 = FUNC_6(VAR_12, VAR_0, -1, (LPARAM)VAR_13);
    FUNC_6(VAR_12, VAR_2, VAR_15, (LPARAM)VAR_8);
    FUNC_6(VAR_12, VAR_1, 0, 0);
    if ((VAR_14 = FUNC_7()))
    {
        LPSTR VAR_16, VAR_17;

        for (VAR_16 = VAR_14, VAR_17 = FUNC_8(VAR_16, ','); VAR_16 && *VAR_16;
         VAR_16 = VAR_17 ? VAR_17 + 1 : ((void*)0),
         VAR_17 = VAR_16 ? FUNC_8(VAR_16, ',') : ((void*)0))
        {
            PCCRYPT_OID_INFO VAR_18;

            if (VAR_17)
                *VAR_17 = 0;
            if ((VAR_18 = FUNC_1(VAR_3, VAR_16, 0)))
            {
                VAR_15 = FUNC_6(VAR_12, VAR_0, 0,
                 (LPARAM)VAR_18->pwszName);
                FUNC_6(VAR_12, VAR_2, VAR_15, (LPARAM)VAR_18);
            }
        }
        FUNC_4(FUNC_3(), 0, VAR_14);
    }
}

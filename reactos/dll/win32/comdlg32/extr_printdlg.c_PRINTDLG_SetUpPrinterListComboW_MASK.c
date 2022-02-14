
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_4__ {scalar_t__ pPrinterName; } ;
typedef TYPE_1__* LPPRINTER_INFO_2W ;
typedef int * LPCWSTR ;
typedef int * LPBYTE ;
typedef int LPARAM ;
typedef size_t INT ;
typedef int HWND ;
typedef size_t DWORD ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int,int *,size_t,size_t*,size_t*) ;
 int FUNC_2 (int *,size_t*) ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (int ,int ,size_t) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int VAR_4 ;
 size_t FUNC_6 (int ,int ,int ,size_t,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static INT FUNC_10(HWND VAR_5, UINT VAR_6, LPCWSTR VAR_7)
{
    DWORD VAR_8, VAR_9;
    INT VAR_10;
    LPPRINTER_INFO_2W VAR_11;
    FUNC_1(VAR_4, ((void*)0), 2, ((void*)0), 0, &VAR_8, &VAR_9);
    VAR_11 = FUNC_4(FUNC_3(), 0, VAR_8);
    FUNC_1(VAR_4, ((void*)0), 2, (LPBYTE)VAR_11, VAR_8, &VAR_8,
    &VAR_9);

    for(VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
        FUNC_6(VAR_5, VAR_6, VAR_0, 0,
       (LPARAM)VAR_11[VAR_10].pPrinterName );
    }
    FUNC_5(FUNC_3(), 0, VAR_11);
    if(!VAR_7 ||
       (VAR_10 = FUNC_6(VAR_5, VAR_6, VAR_2, -1,
    (LPARAM)VAR_7)) == VAR_1) {
        WCHAR VAR_12[260];
        DWORD VAR_13 = FUNC_0(VAR_12);
        if (VAR_7 != ((void*)0))
            FUNC_8("Can't find %s in printer list so trying to find default\n",
         FUNC_9(VAR_7));
 if(!FUNC_2(VAR_12, &VAR_13))
     return VAR_9;
 VAR_10 = FUNC_6(VAR_5, VAR_6, VAR_2, -1, (LPARAM)VAR_12);
 if(VAR_10 == VAR_1)
     FUNC_7("Can't find default printer in printer list\n");
    }
    FUNC_6(VAR_5, VAR_6, VAR_3, VAR_10, 0);
    return VAR_9;
}

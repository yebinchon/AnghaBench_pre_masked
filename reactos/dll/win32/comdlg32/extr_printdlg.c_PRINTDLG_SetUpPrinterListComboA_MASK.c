
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {scalar_t__ pPrinterName; } ;
typedef TYPE_1__* LPPRINTER_INFO_2A ;
typedef int * LPCSTR ;
typedef int * LPBYTE ;
typedef int LPARAM ;
typedef size_t INT ;
typedef int HWND ;
typedef size_t DWORD ;


 size_t FUNC_0 (char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *,int,int *,size_t,size_t*,size_t*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,size_t*) ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 (int ,int ,size_t) ;
 int FUNC_6 (int ,int ,TYPE_1__*) ;
 int VAR_5 ;
 size_t FUNC_7 (int ,int ,int ,size_t,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static INT FUNC_10(HWND VAR_6, UINT VAR_7, LPCSTR VAR_8)
{
    DWORD VAR_9, VAR_10;
    INT VAR_11;
    LPPRINTER_INFO_2A VAR_12;
    FUNC_1(VAR_5, ((void*)0), 2, ((void*)0), 0, &VAR_9, &VAR_10);
    VAR_12 = FUNC_5(FUNC_4(), 0, VAR_9);
    FUNC_1(VAR_5, ((void*)0), 2, (LPBYTE)VAR_12, VAR_9, &VAR_9,
    &VAR_10);

    FUNC_7(VAR_6, VAR_7, VAR_3, 0, 0);

    for(VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
        FUNC_7(VAR_6, VAR_7, VAR_0, 0,
       (LPARAM)VAR_12[VAR_11].pPrinterName );
    }
    FUNC_6(FUNC_4(), 0, VAR_12);
    if(!VAR_8 ||
       (VAR_11 = FUNC_7(VAR_6, VAR_7, VAR_2, -1,
    (LPARAM)VAR_8)) == VAR_1) {

        char VAR_13[260];
        DWORD VAR_14 = FUNC_0(VAR_13);
        if (VAR_8 != ((void*)0))
            FUNC_8("Can't find %s in printer list so trying to find default\n",
         FUNC_9(VAR_8));
 if(!FUNC_3(VAR_13, &VAR_14))
     return VAR_10;
 VAR_11 = FUNC_7(VAR_6, VAR_7, VAR_2, -1, (LPARAM)VAR_13);
 if(VAR_11 == VAR_1)
     FUNC_2("Can't find default printer in printer list\n");
    }
    FUNC_7(VAR_6, VAR_7, VAR_4, VAR_11, 0);
    return VAR_10;
}

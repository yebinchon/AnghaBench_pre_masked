
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int infoW ;
typedef char WCHAR ;
struct TYPE_3__ {int cbSize; int uMax; char const* lpszSubKey; int * lpfnCompare; int * hKey; scalar_t__ fFlags; } ;
typedef TYPE_1__ MRUINFOW ;
typedef void* HKEY ;
typedef void* HANDLE ;


 void* FUNC_0 (int ,char*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,void*,void**) ;
 int VAR_2 ;
 int FUNC_3 (int,char*,void*) ;
 void* FUNC_4 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    static const WCHAR VAR_3[] = {'M','R','U','T','e','s','t',0};
    MRUINFOW VAR_4;
    void *VAR_5;
    HKEY VAR_6;
    HANDLE VAR_7;

    if (!&FUNC_4)
    {
        FUNC_6("CreateMRUListLazyW entry point not found\n");
        return;
    }


    VAR_5 = FUNC_0(VAR_2, "CreateMRUListLazyW");
    FUNC_3(VAR_5 == ((void*)0), "got %p\n", VAR_5);

    FUNC_3(!FUNC_2(VAR_0, VAR_1, &VAR_6),
       "Couldn't create test key \"%s\"\n", VAR_1);

    VAR_4.cbSize = sizeof(VAR_4);
    VAR_4.uMax = 1;
    VAR_4.fFlags = 0;
    VAR_4.lpszSubKey = VAR_3;
    VAR_4.hKey = VAR_6;
    VAR_4.lpfnCompare = ((void*)0);

    VAR_7 = FUNC_4(&VAR_4, 0, 0, 0);
    FUNC_3(VAR_7 != ((void*)0), "got %p\n", VAR_7);
    FUNC_5(VAR_7);


    VAR_4.cbSize = sizeof(VAR_4) - 1;
    VAR_4.uMax = 1;
    VAR_4.fFlags = 0;
    VAR_4.lpszSubKey = VAR_3;
    VAR_4.hKey = VAR_6;
    VAR_4.lpfnCompare = ((void*)0);

    VAR_7 = FUNC_4(&VAR_4, 0, 0, 0);
    FUNC_3(VAR_7 != ((void*)0), "got %p\n", VAR_7);
    FUNC_5(VAR_7);


    VAR_4.cbSize = sizeof(VAR_4) + 1;
    VAR_4.uMax = 1;
    VAR_4.fFlags = 0;
    VAR_4.lpszSubKey = VAR_3;
    VAR_4.hKey = VAR_6;
    VAR_4.lpfnCompare = ((void*)0);

    VAR_7 = FUNC_4(&VAR_4, 0, 0, 0);
    FUNC_3(VAR_7 != ((void*)0), "got %p\n", VAR_7);
    FUNC_5(VAR_7);


    VAR_4.cbSize = 0;
    VAR_4.uMax = 1;
    VAR_4.fFlags = 0;
    VAR_4.lpszSubKey = VAR_3;
    VAR_4.hKey = VAR_6;
    VAR_4.lpfnCompare = ((void*)0);

    VAR_7 = FUNC_4(&VAR_4, 0, 0, 0);
    FUNC_3(VAR_7 != ((void*)0), "got %p\n", VAR_7);
    FUNC_5(VAR_7);


    VAR_4.cbSize = sizeof(VAR_4);
    VAR_4.uMax = 1;
    VAR_4.fFlags = 0;
    VAR_4.lpszSubKey = VAR_3;
    VAR_4.hKey = ((void*)0);
    VAR_4.lpfnCompare = ((void*)0);

    VAR_7 = FUNC_4(&VAR_4, 0, 0, 0);
    FUNC_3(VAR_7 == ((void*)0), "got %p\n", VAR_7);

    FUNC_1(VAR_6);
}

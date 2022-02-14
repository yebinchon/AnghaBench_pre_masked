
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_4__ {int lVal; char* pwszVal; char* pszVal; int * bstrVal; int boolVal; } ;
struct TYPE_5__ {TYPE_1__ u; void* vt; } ;
typedef TYPE_2__ PROPVARIANT ;
typedef char* LPCWSTR ;
typedef char CHAR ;


 char* FUNC_0 (TYPE_2__*,char*) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int,char*,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    PROPVARIANT VAR_8;
    static WCHAR VAR_9[] = {'t', 'e', 's', 't', 0};
    static WCHAR VAR_10[] = {'t', 'e', 's', 't', '2', 0};
    static WCHAR VAR_11[] = {0};
    static WCHAR VAR_12[] = {' ', 0};
    static CHAR VAR_13[] = "test2";
    static CHAR VAR_14[] = "";
    static CHAR VAR_15[] = " ";
    LPCWSTR VAR_16;

    VAR_8.vt = VAR_3;
    VAR_16 = FUNC_0(&VAR_8, VAR_9);
    FUNC_4(VAR_16 == VAR_9, "Unexpected value %s\n", FUNC_5(VAR_16));

    VAR_8.vt = VAR_7;
    VAR_16 = FUNC_0(&VAR_8, VAR_9);
    FUNC_4(VAR_16 == VAR_9, "Unexpected value %s\n", FUNC_5(VAR_16));

    VAR_8.vt = VAR_1;
    VAR_8.u.boolVal = VAR_0;
    VAR_16 = FUNC_0(&VAR_8, VAR_9);
    FUNC_4(VAR_16 == VAR_9, "Unexpected value %s\n", FUNC_5(VAR_16));

    VAR_8.vt = VAR_4;
    VAR_8.u.lVal = 15;
    VAR_16 = FUNC_0(&VAR_8, VAR_9);
    FUNC_4(VAR_16 == VAR_9, "Unexpected value %s\n", FUNC_5(VAR_16));



    VAR_8.vt = VAR_6;
    VAR_8.u.pwszVal = ((void*)0);
    VAR_16 = FUNC_0(&VAR_8, VAR_9);
    FUNC_4(VAR_16 == VAR_9, "Unexpected value %s\n", FUNC_5(VAR_16));

    VAR_8.vt = VAR_6;
    VAR_8.u.pwszVal = VAR_11;
    VAR_16 = FUNC_0(&VAR_8, VAR_9);
    FUNC_4(VAR_16 == VAR_11, "Unexpected value %s\n", FUNC_5(VAR_16));

    VAR_8.vt = VAR_6;
    VAR_8.u.pwszVal = VAR_12;
    VAR_16 = FUNC_0(&VAR_8, VAR_9);
    FUNC_4(VAR_16 == VAR_12, "Unexpected value %s\n", FUNC_5(VAR_16));

    VAR_8.vt = VAR_6;
    VAR_8.u.pwszVal = VAR_10;
    VAR_16 = FUNC_0(&VAR_8, VAR_9);
    FUNC_4(VAR_16 == VAR_10, "Unexpected value %s\n", FUNC_5(VAR_16));



    VAR_8.vt = VAR_5;
    VAR_8.u.pszVal = ((void*)0);
    VAR_16 = FUNC_0(&VAR_8, VAR_9);
    FUNC_4(VAR_16 == VAR_9, "Unexpected value %s\n", FUNC_5(VAR_16));

    VAR_8.vt = VAR_5;
    VAR_8.u.pszVal = VAR_14;
    VAR_16 = FUNC_0(&VAR_8, VAR_9);
    FUNC_4(VAR_16 == VAR_9, "Unexpected value %s\n", FUNC_5(VAR_16));

    VAR_8.vt = VAR_5;
    VAR_8.u.pszVal = VAR_15;
    VAR_16 = FUNC_0(&VAR_8, VAR_9);
    FUNC_4(VAR_16 == VAR_9, "Unexpected value %s\n", FUNC_5(VAR_16));

    VAR_8.vt = VAR_5;
    VAR_8.u.pszVal = VAR_13;
    VAR_16 = FUNC_0(&VAR_8, VAR_9);
    FUNC_4(VAR_16 == VAR_9, "Unexpected value %s\n", FUNC_5(VAR_16));



    VAR_8.vt = VAR_2;
    VAR_8.u.bstrVal = ((void*)0);
    VAR_16 = FUNC_0(&VAR_8, VAR_9);
    FUNC_4(!FUNC_3(VAR_16, VAR_11), "Unexpected value %s\n", FUNC_5(VAR_16));

    VAR_8.vt = VAR_2;
    VAR_8.u.bstrVal = FUNC_1(VAR_11);
    VAR_16 = FUNC_0(&VAR_8, VAR_9);
    FUNC_4(!FUNC_3(VAR_16, VAR_11), "Unexpected value %s\n", FUNC_5(VAR_16));
    FUNC_2(VAR_8.u.bstrVal);

    VAR_8.vt = VAR_2;
    VAR_8.u.bstrVal = FUNC_1(VAR_12);
    VAR_16 = FUNC_0(&VAR_8, VAR_9);
    FUNC_4(!FUNC_3(VAR_16, VAR_12), "Unexpected value %s\n", FUNC_5(VAR_16));
    FUNC_2(VAR_8.u.bstrVal);

    VAR_8.vt = VAR_2;
    VAR_8.u.bstrVal = FUNC_1(VAR_10);
    VAR_16 = FUNC_0(&VAR_8, VAR_9);
    FUNC_4(!FUNC_3(VAR_16, VAR_10), "Unexpected value %s\n", FUNC_5(VAR_16));
    FUNC_2(VAR_8.u.bstrVal);
}

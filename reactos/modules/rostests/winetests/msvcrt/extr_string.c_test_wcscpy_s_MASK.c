
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (char*,int,char const*) ;
 int FUNC_5 (char*,int,char const*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    static const WCHAR VAR_5[] = { 'T','h','i','s','A','L','o','n','g','s','t','r','i','n','g',0 };
    static WCHAR VAR_6[18];
    static WCHAR VAR_7[8];
    int VAR_8;

    if(!&FUNC_4)
    {
        FUNC_6("wcscpy_s not found\n");
        return;
    }


    VAR_4 = VAR_0;
    VAR_8 = FUNC_4(((void*)0), 18, VAR_5);
    FUNC_3(VAR_8 == VAR_1, "p_wcscpy_s expect EINVAL got %d\n", VAR_8);
    FUNC_3(VAR_4 == VAR_1, "expected errno EINVAL got %d\n", VAR_4);


    VAR_4 = VAR_0;
    VAR_6[0] = 'A';
    VAR_8 = FUNC_4(VAR_6, 18, ((void*)0));
    FUNC_3(VAR_8 == VAR_1, "expected EINVAL got %d\n", VAR_8);
    FUNC_3(VAR_4 == VAR_1, "expected errno EINVAL got %d\n", VAR_4);
    FUNC_3(VAR_6[0] == 0, "szDest[0] not 0, got %c\n", VAR_6[0]);


    VAR_4 = VAR_0;
    VAR_6[0] = 'A';
    VAR_8 = FUNC_4(VAR_6, 0, VAR_5);



    FUNC_3(VAR_8 == VAR_2 || VAR_8 == VAR_1, "expected ERANGE/EINVAL got %d\n", VAR_8);
    FUNC_3(VAR_4 == VAR_2 || VAR_4 == VAR_1, "expected errno ERANGE/EINVAL got %d\n", VAR_4);
    FUNC_3(VAR_6[0] == 0 || VAR_8 == VAR_1, "szDest[0] not 0\n");


    VAR_8 = FUNC_4(VAR_6, 18, VAR_5);
    FUNC_3(VAR_8 == 0, "expected 0 got %d\n", VAR_8);
    FUNC_3(FUNC_1(VAR_6, VAR_5) == 0, "szDest != szLongText\n");


    VAR_8 = FUNC_4(VAR_6, 18, VAR_6);
    FUNC_3(VAR_8 == 0, "expected 0 got %d\n", VAR_8);
    FUNC_3(FUNC_1(VAR_6, VAR_5) == 0, "szDest != szLongText\n");


    VAR_4 = VAR_0;
    VAR_6[0] = 'A';
    VAR_8 = FUNC_4(VAR_7, 8, VAR_5);
    FUNC_3(VAR_8 == VAR_2 || VAR_8 == VAR_1, "expected ERANGE/EINVAL got %d\n", VAR_8);
    FUNC_3(VAR_4 == VAR_2 || VAR_4 == VAR_1, "expected errno ERANGE/EINVAL got %d\n", VAR_4);
    FUNC_3(VAR_7[0] == 0, "szDestShort[0] not 0\n");

    if(!&FUNC_5)
    {
        FUNC_6("wcsncpy_s not found\n");
        return;
    }

    VAR_8 = FUNC_5(((void*)0), 18, VAR_5, FUNC_0(VAR_5));
    FUNC_3(VAR_8 == VAR_1, "p_wcsncpy_s expect EINVAL got %d\n", VAR_8);

    VAR_6[0] = 'A';
    VAR_8 = FUNC_5(VAR_6, 18, ((void*)0), 1);
    FUNC_3(VAR_8 == VAR_1, "expected EINVAL got %d\n", VAR_8);
    FUNC_3(VAR_6[0] == 0, "szDest[0] not 0\n");

    VAR_6[0] = 'A';
    VAR_8 = FUNC_5(VAR_6, 18, ((void*)0), 0);
    FUNC_3(VAR_8 == 0, "expected ERROR_SUCCESS got %d\n", VAR_8);
    FUNC_3(VAR_6[0] == 0, "szDest[0] not 0\n");

    VAR_6[0] = 'A';
    VAR_8 = FUNC_5(VAR_6, 0, VAR_5, FUNC_0(VAR_5));
    FUNC_3(VAR_8 == VAR_2 || VAR_8 == VAR_1, "expected ERANGE/EINVAL got %d\n", VAR_8);
    FUNC_3(VAR_6[0] == 0 || VAR_8 == VAR_1, "szDest[0] not 0\n");

    VAR_8 = FUNC_5(VAR_6, 18, VAR_5, FUNC_0(VAR_5));
    FUNC_3(VAR_8 == 0, "expected 0 got %d\n", VAR_8);
    FUNC_3(FUNC_1(VAR_6, VAR_5) == 0, "szDest != szLongText\n");

    VAR_6[0] = 'A';
    VAR_8 = FUNC_5(VAR_7, 8, VAR_5, FUNC_0(VAR_5));
    FUNC_3(VAR_8 == VAR_2 || VAR_8 == VAR_1, "expected ERANGE/EINVAL got %d\n", VAR_8);
    FUNC_3(VAR_7[0] == 0, "szDestShort[0] not 0\n");

    VAR_6[0] = 'A';
    VAR_8 = FUNC_5(VAR_6, 5, VAR_5, -1);
    FUNC_3(VAR_8 == VAR_3, "expected STRUNCATE got %d\n", VAR_8);
    FUNC_3(VAR_6[4] == 0, "szDest[4] not 0\n");
    FUNC_3(!FUNC_2(VAR_6, VAR_5, 4*sizeof(WCHAR)), "szDest = %s\n", FUNC_7(VAR_6));

    VAR_8 = FUNC_5(((void*)0), 0, (void*)0xdeadbeef, 0);
    FUNC_3(VAR_8 == 0, "ret = %d\n", VAR_8);

    VAR_7[0] = '1';
    VAR_7[1] = 0;
    VAR_8 = FUNC_5(VAR_7+1, 4, VAR_7, -1);
    FUNC_3(VAR_8 == VAR_3, "expected ERROR_SUCCESS got %d\n", VAR_8);
    FUNC_3(VAR_7[0]=='1' && VAR_7[1]=='1' && VAR_7[2]=='1' && VAR_7[3]=='1',
            "szDestShort = %s\n", FUNC_7(VAR_7));
}

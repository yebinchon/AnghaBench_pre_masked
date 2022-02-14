
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int string ;
typedef int name ;
typedef int buffer ;
typedef int LSTATUS ;
typedef int HKEY ;
typedef size_t DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,char*,size_t*,int *,int *,int*,size_t*) ;
 int FUNC_4 (int ,char*,int *,int *,int*,size_t*) ;
 int FUNC_5 (int ,char*,int ,int ,int*,size_t) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int*,char const*,size_t) ;
 int FUNC_7 (int*,int,int) ;
 int FUNC_8 (int,char*,...) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,size_t) ;

__attribute__((used)) static void FUNC_11(void)
{
    HKEY VAR_4;
    LSTATUS VAR_5;
    static const char VAR_6[] = "FullString";
    char VAR_7[11];
    BYTE VAR_8[11];
    DWORD VAR_9, VAR_10, VAR_11;

    VAR_5 = FUNC_1(VAR_3, "string_termination", &VAR_4);
    FUNC_8(VAR_5 == VAR_1, "Expected ERROR_SUCCESS, got %d\n", VAR_5);


    VAR_9=sizeof(VAR_6)-1;
    VAR_5 = FUNC_5(VAR_4, "stringtest", 0, VAR_2, (BYTE*)VAR_6, VAR_9);
    FUNC_8(VAR_5 == VAR_1, "RegSetValueExA failed: %d\n", VAR_5);
    VAR_10=VAR_9;
    VAR_5 = FUNC_4(VAR_4, "stringtest", ((void*)0), ((void*)0), VAR_8, &VAR_10);
    FUNC_8(VAR_5 == VAR_0, "RegQueryValueExA returned: %d\n", VAR_5);


    VAR_9=sizeof(VAR_6)-2;
    VAR_5 = FUNC_5(VAR_4, "stringtest", 0, VAR_2, (BYTE*)VAR_6, VAR_9);
    FUNC_8(VAR_5 == VAR_1, "RegSetValueExA failed: %d\n", VAR_5);
    VAR_10=0;
    VAR_5 = FUNC_4(VAR_4, "stringtest", ((void*)0), ((void*)0), ((void*)0), &VAR_10);
    FUNC_8(VAR_5 == VAR_1, "RegQueryValueExA failed: %d\n", VAR_5);
    FUNC_8(VAR_10 == VAR_9, "wrong size %u != %u\n", VAR_10, VAR_9);


    VAR_10=VAR_9;
    FUNC_7(VAR_8, 0xbd, sizeof(VAR_8));
    VAR_5 = FUNC_4(VAR_4, "stringtest", ((void*)0), ((void*)0), VAR_8, &VAR_10);
    FUNC_8(VAR_5 == VAR_1, "RegQueryValueExA failed: %d\n", VAR_5);
    FUNC_8(VAR_10 == VAR_9, "wrong size: %u != %u\n", VAR_10, VAR_9);
    FUNC_8(FUNC_6(VAR_8, VAR_6, VAR_10) == 0, "bad string: %s/%u != %s\n",
       FUNC_10((char*)VAR_8, VAR_10), VAR_10, VAR_6);
    FUNC_8(VAR_8[VAR_9] == 0xbd, "buffer overflow at %u %02x\n", VAR_9, VAR_8[VAR_9]);


    VAR_10=VAR_9+1;
    FUNC_7(VAR_8, 0xbd, sizeof(VAR_8));
    VAR_5 = FUNC_4(VAR_4, "stringtest", ((void*)0), ((void*)0), VAR_8, &VAR_10);
    FUNC_8(VAR_5 == VAR_1, "RegQueryValueExA failed: %d\n", VAR_5);
    FUNC_8(VAR_10 == VAR_9, "wrong size: %u != %u\n", VAR_10, VAR_9);
    FUNC_8(FUNC_6(VAR_8, VAR_6, VAR_10) == 0, "bad string: %s/%u != %s\n",
       FUNC_10((char*)VAR_8, VAR_10), VAR_10, VAR_6);
    FUNC_8(VAR_8[VAR_9] == 0, "buffer overflow at %u %02x\n", VAR_9, VAR_8[VAR_9]);


    VAR_10=VAR_9;
    FUNC_7(VAR_8, 0xbd, sizeof(VAR_8));
    VAR_11=sizeof(VAR_7);
    VAR_5 = FUNC_3(VAR_4, 0, VAR_7, &VAR_11, ((void*)0), ((void*)0), VAR_8, &VAR_10);
    FUNC_8(VAR_5 == VAR_1, "RegEnumValueA failed: %d\n", VAR_5);
    FUNC_8(FUNC_9(VAR_7, "stringtest") == 0, "wrong name: %s\n", VAR_7);
    FUNC_8(VAR_10 == VAR_9, "wrong size: %u != %u\n", VAR_10, VAR_9);
    FUNC_8(FUNC_6(VAR_8, VAR_6, VAR_10) == 0, "bad string: %s/%u != %s\n",
       FUNC_10((char*)VAR_8, VAR_10), VAR_10, VAR_6);
    FUNC_8(VAR_8[VAR_9] == 0xbd, "buffer overflow at %u %02x\n", VAR_9, VAR_8[VAR_9]);


    VAR_10=VAR_9+1;
    FUNC_7(VAR_8, 0xbd, sizeof(VAR_8));
    VAR_11=sizeof(VAR_7);
    VAR_5 = FUNC_3(VAR_4, 0, VAR_7, &VAR_11, ((void*)0), ((void*)0), VAR_8, &VAR_10);
    FUNC_8(VAR_5 == VAR_1, "RegEnumValueA failed: %d\n", VAR_5);
    FUNC_8(FUNC_9(VAR_7, "stringtest") == 0, "wrong name: %s\n", VAR_7);
    FUNC_8(VAR_10 == VAR_9, "wrong size: %u != %u\n", VAR_10, VAR_9);
    FUNC_8(FUNC_6(VAR_8, VAR_6, VAR_10) == 0, "bad string: %s/%u != %s\n",
       FUNC_10((char*)VAR_8, VAR_10), VAR_10, VAR_6);
    FUNC_8(VAR_8[VAR_9] == 0, "buffer overflow at %u %02x\n", VAR_9, VAR_8[VAR_9]);

    FUNC_2(VAR_4, "");
    FUNC_0(VAR_4);
}

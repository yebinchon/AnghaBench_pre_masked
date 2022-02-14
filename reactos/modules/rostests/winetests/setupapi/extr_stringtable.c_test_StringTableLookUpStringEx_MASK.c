
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int data ;
typedef int buffer ;
typedef unsigned char WCHAR ;
typedef int * HSTRING_TABLE ;
typedef unsigned int DWORD ;


 int VAR_0 ;
 unsigned char* VAR_1 ;
 unsigned char* VAR_2 ;
 int FUNC_0 (char*,unsigned int*,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int,char*,...) ;
 unsigned int FUNC_3 (int *,unsigned char*,int ) ;
 unsigned int FUNC_4 (int *,unsigned char*,int,unsigned int*,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int * FUNC_8 (int,int ) ;
 unsigned int FUNC_9 (int *,unsigned char*,int ,char*,int) ;
 unsigned char* VAR_3 ;

__attribute__((used)) static void FUNC_10(void)
{
    static WCHAR VAR_4[] = {'U','I','L','E','V','E','L',0};
    DWORD VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    HSTRING_TABLE VAR_11, VAR_12;
    char VAR_13[4];

    VAR_11 = FUNC_7();
    FUNC_2(VAR_11 != ((void*)0),"Failed to Initialize String Table\n");

    VAR_7 = FUNC_3(VAR_11, VAR_3, 0);
    FUNC_2(VAR_7 != ~0u, "failed to add 'string' to string table\n");

    VAR_8 = FUNC_3(VAR_11, VAR_1, 0);
    FUNC_2(VAR_8 != ~0u,"failed to add 'String' to string table\n");

    VAR_9 = FUNC_3(VAR_11, VAR_2, 0);
    FUNC_2(VAR_9 != ~0u, "failed to add 'foo' to string table\n");

    VAR_12 = FUNC_6(VAR_11);
    FUNC_2(VAR_12 != ((void*)0), "Failed to duplicate String Table\n");


    VAR_5 = FUNC_9(VAR_11, VAR_3, 0, ((void*)0), 0);
    FUNC_2(VAR_5 != ~0u, "Failed find string in String Table 1\n");
    FUNC_2(VAR_5 == VAR_7,
        "Lookup for string (%x) does not match previous handle (%x) in String Table 1\n",
        VAR_5, VAR_7);

    VAR_5 = FUNC_9(VAR_12, VAR_3, 0, ((void*)0), 0);
    FUNC_2(VAR_5 != ~0u, "Failed find string in String Table 2\n");

    VAR_5 = FUNC_9(VAR_11, VAR_1, 0, ((void*)0), 0);
    FUNC_2(VAR_5 != ~0u, "Failed find String in String Table 1\n");

    VAR_5 = FUNC_9(VAR_12, VAR_1, 0, ((void*)0), 0);
    FUNC_2(VAR_5 != ~0u, "Failed find String in String Table 2\n");

    VAR_5=FUNC_9(VAR_11, VAR_2, 0, ((void*)0), 0);
    FUNC_2(VAR_5 != ~0u, "Failed find foo in String Table 1\n");
    FUNC_2(VAR_5 == VAR_9,
        "Lookup for foo (%x) does not match previous handle (%x) in String Table 1\n",
        VAR_5, VAR_9);

    VAR_5 = FUNC_9(VAR_12, VAR_2, 0, ((void*)0), 0);
    FUNC_2(VAR_5 != ~0u, "Failed find foo in String Table 2\n");


    VAR_5 = FUNC_9(VAR_11, VAR_3,VAR_0, ((void*)0), 0);
    VAR_6 = FUNC_9(VAR_11, VAR_1, VAR_0, ((void*)0), 0);
    FUNC_2(VAR_5 != VAR_6, "Lookup of string equals String in Table 1\n");
    FUNC_2(VAR_5 == VAR_8,
        "Lookup for String (%x) does not match previous handle (%x) in String Table 1\n",
        VAR_5, VAR_8);

    FUNC_5(VAR_11);

    VAR_11 = FUNC_8(0x1000, 0);
    FUNC_2(VAR_11 != ((void*)0), "failed to initialize string table\n");

    VAR_10 = 0xaaaaaaaa;
    VAR_5 = FUNC_4(VAR_11, VAR_4, 0x5, &VAR_10, sizeof(VAR_10));
    FUNC_2(VAR_5 != ~0u, "failed to add 'UILEVEL' to string table\n");

    FUNC_1(VAR_13, 0x55, sizeof(VAR_13));
    VAR_5 = FUNC_9(VAR_11, VAR_4, VAR_0, VAR_13, 0);
    FUNC_2(VAR_5 != ~0u, "failed find 'UILEVEL' in string table\n");
    FUNC_2(FUNC_0(VAR_13, &VAR_10, 4), "unexpected data\n");

    FUNC_1(VAR_13, 0x55, sizeof(VAR_13));
    VAR_5 = FUNC_9(VAR_11, VAR_4, VAR_0, VAR_13, 2);
    FUNC_2(VAR_5 != ~0u, "failed find 'UILEVEL' in string table\n");
    FUNC_2(!FUNC_0(VAR_13, &VAR_10, 2), "unexpected data\n");

    FUNC_1(VAR_13, 0x55, sizeof(VAR_13));
    VAR_5 = FUNC_9(VAR_11, VAR_4, VAR_0, VAR_13, sizeof(VAR_13));
    FUNC_2(VAR_5 != ~0u, "failed find 'UILEVEL' in string table\n");
    FUNC_2(!FUNC_0(VAR_13, &VAR_10, 4), "unexpected data\n");

    FUNC_5(VAR_11);
    FUNC_5(VAR_12);
}

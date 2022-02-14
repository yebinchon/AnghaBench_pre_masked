
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,char*,int,char*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char,int) ;
 int FUNC_6 (int,char*,int,...) ;
 scalar_t__ FUNC_7 (char*,char*,int*,int) ;
 int FUNC_8 (char*) ;
 char* VAR_6 ;

__attribute__((used)) static void FUNC_9(void)
{
    WCHAR VAR_7[VAR_2];
    DWORD VAR_8;
    DWORD VAR_9;
    HRESULT VAR_10;
    int VAR_11;


    if (!&FUNC_7) {
        FUNC_8("UrlCanonicalizeW not found\n");
        return;
    }
    VAR_9 = FUNC_4(VAR_6);


    VAR_8 = (VAR_9-1);
    FUNC_5(VAR_7, '#', (VAR_9+4) * sizeof(WCHAR));
    VAR_7[VAR_9+4] = '\0';
    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_7(VAR_6, VAR_7, &VAR_8, VAR_5 | VAR_4);
    FUNC_6( (VAR_10 == VAR_1) && (VAR_8 == (VAR_9 + 1)),
        "got 0x%x with %u and size %u for %u (expected 'E_POINTER' and size %u)\n",
        VAR_10, FUNC_1(), VAR_8, FUNC_4(VAR_7), VAR_9+1);



    VAR_8 = VAR_9;
    FUNC_5(VAR_7, '#', (VAR_9+4) * sizeof(WCHAR));
    VAR_7[VAR_9+4] = '\0';
    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_7(VAR_6, VAR_7, &VAR_8, VAR_5 | VAR_4);
    FUNC_6( (VAR_10 == VAR_1) && (VAR_8 == (VAR_9 + 1)),
        "got 0x%x with %u and size %u for %u (expected 'E_POINTER' and size %u)\n",
        VAR_10, FUNC_1(), VAR_8, FUNC_4(VAR_7), VAR_9+1);


    VAR_8 = VAR_9 +1;
    FUNC_5(VAR_7, '#', (VAR_9+4) * sizeof(WCHAR));
    VAR_7[VAR_9+4] = '\0';
    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_7(VAR_6, VAR_7, &VAR_8, VAR_5 | VAR_4);
    FUNC_6( (VAR_10 == VAR_3) && (VAR_8 == VAR_9),
        "got 0x%x with %u and size %u for %u (expected 'S_OK' and size %u)\n",
        VAR_10, FUNC_1(), VAR_8, FUNC_4(VAR_7), VAR_9);


    VAR_8 = (VAR_9+2);
    FUNC_5(VAR_7, '#', (VAR_9+4) * sizeof(WCHAR));
    VAR_7[VAR_9+4] = '\0';
    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_7(VAR_6, VAR_7, &VAR_8, VAR_5 | VAR_4);
    FUNC_6( (VAR_10 == VAR_3) && (VAR_8 == VAR_9),
        "got 0x%x with %u and size %u for %u (expected 'S_OK' and size %u)\n",
        VAR_10, FUNC_1(), VAR_8, FUNC_4(VAR_7), VAR_9);


    for (VAR_11 = 1; VAR_11 < 65536; VAR_11++)
    {
        WCHAR VAR_12[128];
        BOOL VAR_13;
        int VAR_14;

        FUNC_2(VAR_0, 0, "http://www.winehq.org/X", -1, VAR_12, FUNC_0(VAR_12));
        VAR_14 = FUNC_4(VAR_12) - 1;
        VAR_12[VAR_14] = VAR_11;
        VAR_9 = VAR_2;
        FUNC_7(VAR_12, VAR_7, &VAR_9, 0);
        VAR_13 = FUNC_4(VAR_7) < FUNC_4(VAR_12);
        FUNC_6(VAR_13 == (VAR_11 <= 32), "Incorrect char chopping for char %d\n", VAR_11);
    }
}

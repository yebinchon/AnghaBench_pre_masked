
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int temp_path ;
typedef int psadobe ;
typedef int di ;
typedef int buf ;
typedef int WORD ;
struct TYPE_3__ {int cbSize; char* lpszDocName; char* lpszOutput; scalar_t__ fwType; int * lpszDatatype; } ;
typedef int HDC ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef TYPE_1__ DOCINFOA ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,char*,int *) ;
 int FUNC_5 (int ,int ,int ,int *,int,char*) ;
 int VAR_1 ;
 int FUNC_6 (char*,char*,int ,char*) ;
 int FUNC_7 (int,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (scalar_t__,char*,int,int*,int *) ;
 int FUNC_9 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_10 (char*,char const*,int) ;
 int FUNC_11 (char*,int ,int) ;
 int FUNC_12 (int,char*,...) ;
 char* FUNC_13 (char*,char) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static void FUNC_17(HDC VAR_6)
{
    static const char VAR_7[10] = "%!PS-Adobe";
    char VAR_8[1024], *VAR_9;
    char VAR_10[VAR_3], VAR_11[VAR_3];
    DOCINFOA VAR_12;
    DWORD VAR_13;
    HANDLE VAR_14;

    FUNC_7(sizeof(VAR_10), VAR_10);
    FUNC_6(VAR_10, "ps", 0, VAR_11);

    VAR_12.cbSize = sizeof(VAR_12);
    VAR_12.lpszDocName = "Let's dance";
    VAR_12.lpszOutput = VAR_11;
    VAR_12.lpszDatatype = ((void*)0);
    VAR_12.fwType = 0;
    VAR_13 = FUNC_9(VAR_6, &VAR_12);
    FUNC_12(VAR_13 > 0, "StartDoc failed: %d\n", VAR_13);

    FUNC_15(VAR_8 + 2, "\n% ===> before DOWNLOADHEADER <===\n");
    *(WORD *)VAR_8 = FUNC_16(VAR_8 + 2);
    VAR_13 = FUNC_4(VAR_6, VAR_5, 0, VAR_8, ((void*)0));
    FUNC_12(VAR_13 == *(WORD *)VAR_8, "POSTSCRIPT_PASSTHROUGH failed: %d\n", VAR_13);

    FUNC_15(VAR_8, "deadbeef");
    VAR_13 = FUNC_5(VAR_6, VAR_0, 0, ((void*)0), sizeof(VAR_8), VAR_8 );
    FUNC_12(VAR_13 == 1, "DOWNLOADHEADER failed\n");
    FUNC_12(FUNC_14(VAR_8, "deadbeef") != 0, "DOWNLOADHEADER failed\n");

    FUNC_15(VAR_8 + 2, "\n% ===> after DOWNLOADHEADER <===\n");
    *(WORD *)VAR_8 = FUNC_16(VAR_8 + 2);
    VAR_13 = FUNC_4(VAR_6, VAR_5, 0, VAR_8, ((void*)0));
    FUNC_12(VAR_13 == *(WORD *)VAR_8, "POSTSCRIPT_PASSTHROUGH failed: %d\n", VAR_13);

    VAR_13 = FUNC_3(VAR_6);
    FUNC_12(VAR_13 == 1, "EndDoc failed\n");

    VAR_14 = FUNC_1(VAR_11, VAR_1, 0, ((void*)0), VAR_4, 0, 0);
    FUNC_12(VAR_14 != VAR_2, "CreateFile failed\n");
    FUNC_11(VAR_8, 0, sizeof(VAR_8));
    VAR_13 = FUNC_8(VAR_14, VAR_8, sizeof(VAR_8), &VAR_13, ((void*)0));
    FUNC_12(VAR_13, "ReadFile failed\n");
    FUNC_0(VAR_14);


    VAR_8[sizeof(VAR_8) - 1] = 0;
    VAR_9 = VAR_8;
    while (*VAR_9)
    {
        if (!(VAR_9[0] == 0x1b && VAR_9[1] == '%') && FUNC_10(VAR_9, "@PJL", 4) != 0)
            break;

        VAR_9 = FUNC_13(VAR_9, '\n');
        if (!VAR_9) break;

        while (*VAR_9 == '\r' || *VAR_9 == '\n') VAR_9++;
    }
    FUNC_12(VAR_9 && !FUNC_10(VAR_9, VAR_7, sizeof(VAR_7)), "wrong signature: %.14s\n", VAR_9 ? VAR_9 : VAR_8);

    FUNC_2(VAR_11);
}

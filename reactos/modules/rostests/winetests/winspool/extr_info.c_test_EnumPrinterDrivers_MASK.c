
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pName; } ;
struct TYPE_3__ {int pName; int pDriverPath; } ;
typedef TYPE_1__* LPDRIVER_INFO_2A ;
typedef int * LPBYTE ;
typedef int DWORD ;
typedef TYPE_2__ DRIVER_INFO_1A ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int *,int,int*,int*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int * VAR_4 ;
 scalar_t__ FUNC_6 (int,int ) ;
 int FUNC_7 (int,char*,int,...) ;
 int VAR_5 ;
 int FUNC_8 (int *,int *,int,int *,int ,int*,int*) ;
 int FUNC_9 (char*,...) ;
 int * FUNC_10 (int ,char) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    static char VAR_6[] = "all";

    DWORD VAR_7;
    LPBYTE VAR_8;
    DWORD VAR_9;
    DWORD VAR_10;
    DWORD VAR_11;
    DWORD VAR_12;


    for(VAR_12 = 0; VAR_12 < 10; VAR_12++) {
        VAR_9 = 0xdeadbeef;
        VAR_11 = 0xdeadbeef;
        FUNC_5(0xdeadbeef);
        VAR_7 = FUNC_0(((void*)0), ((void*)0), VAR_12, ((void*)0), 0, &VAR_9, &VAR_11);
        if (FUNC_6(VAR_7, FUNC_1())) return;


        if(!VAR_12 || (VAR_12 == 7) || (VAR_12 > 8)) {

            FUNC_7( (!VAR_7 && (FUNC_1() == VAR_2)) ||
                (VAR_7 && (VAR_11 == 0)),
                "(%d) got %u with %u and 0x%x "
                "(expected '0' with ERROR_INVALID_LEVEL or '!=0' and 0x0)\n",
                VAR_12, VAR_7, FUNC_1(), VAR_11);
            continue;
        }


        if (!VAR_7 && (FUNC_1() == VAR_2)) {
            FUNC_9("Level %d not supported\n", VAR_12);
            continue;
        }

        FUNC_7( ((!VAR_7) && (FUNC_1() == VAR_0)) ||
            (VAR_7 && (VAR_4 == ((void*)0))),
            "(%u) got %u with %u for %s (expected '0' with "
            "ERROR_INSUFFICIENT_BUFFER or '!= 0' without a printer)\n",
            VAR_12, VAR_7, FUNC_1(), VAR_4);

        if (!VAR_9) {
            FUNC_9("no valid buffer size returned\n");
            continue;
        }


        if (!VAR_5 && &FUNC_8)
        {
            DWORD VAR_13;
            DWORD VAR_14;
            FUNC_8(((void*)0), ((void*)0), VAR_12, ((void*)0), 0, &VAR_13, &VAR_14);
            FUNC_7(VAR_13 == VAR_9, "level %d: EnumPrinterDriversA returned different size %d than EnumPrinterDriversW (%d)\n", VAR_12, VAR_9, VAR_13);
        }

        VAR_8 = FUNC_3(FUNC_2(), 0, VAR_9 + 4);
        if (VAR_8 == ((void*)0)) continue;

        FUNC_5(0xdeadbeef);
        VAR_10 = 0xdeadbeef;
        VAR_7 = FUNC_0(((void*)0), ((void*)0), VAR_12, VAR_8, VAR_9, &VAR_10, &VAR_11);
        FUNC_7(VAR_7, "(%u) got %u with %u (expected '!=0')\n", VAR_12, VAR_7, FUNC_1());
        FUNC_7(VAR_10 == VAR_9, "(%d) returned %d (expected %d)\n", VAR_12, VAR_10, VAR_9);


        if (VAR_12 > 1) {
            LPDRIVER_INFO_2A VAR_15 = (LPDRIVER_INFO_2A) VAR_8;

            FUNC_7( FUNC_10(VAR_15->pDriverPath, '\\') != ((void*)0),
                "(%u) got %s for %s (expected a full path)\n",
                VAR_12, VAR_15->pDriverPath, VAR_15->pName);

        }

        FUNC_5(0xdeadbeef);
        VAR_11 = 0xdeadbeef;
        VAR_10 = 0xdeadbeef;
        VAR_7 = FUNC_0(((void*)0), ((void*)0), VAR_12, VAR_8, VAR_9+1, &VAR_10, &VAR_11);
        FUNC_7(VAR_7, "(%u) got %u with %u (expected '!=0')\n", VAR_12, VAR_7, FUNC_1());
        FUNC_7(VAR_10 == VAR_9, "(%u) returned %u (expected %u)\n", VAR_12, VAR_10, VAR_9);

        FUNC_5(0xdeadbeef);
        VAR_10 = 0xdeadbeef;
        VAR_7 = FUNC_0(((void*)0), ((void*)0), VAR_12, VAR_8, VAR_9-1, &VAR_10, &VAR_11);
        FUNC_7( !VAR_7 && (FUNC_1() == VAR_0),
            "(%u) got %u with %u (expected '0' with ERROR_INSUFFICIENT_BUFFER)\n",
            VAR_12, VAR_7, FUNC_1());
        FUNC_7(VAR_10 == VAR_9, "(%u) returned %u (expected %u)\n", VAR_12, VAR_10, VAR_9);
        FUNC_5(0xdeadbeef);
        VAR_10 = 0xdeadbeef;
        VAR_11 = 0xdeadbeef;
        VAR_7 = FUNC_0(((void*)0), ((void*)0), VAR_12, VAR_8, VAR_9, ((void*)0), &VAR_11);
        FUNC_7( VAR_7 || FUNC_1() == VAR_3,
            "(%u) got %u with %u (expected '!=0' or '0' with "
            "RPC_X_NULL_REF_POINTER)\n", VAR_12, VAR_7, FUNC_1());

        VAR_10 = 0xdeadbeef;
        VAR_11 = 0xdeadbeef;
        FUNC_5(0xdeadbeef);
        VAR_7 = FUNC_0(((void*)0), ((void*)0), VAR_12, VAR_8, VAR_9, &VAR_10, ((void*)0));
        FUNC_7( VAR_7 || FUNC_1() == VAR_3,
            "(%u) got %u with %u (expected '!=0' or '0' with "
            "RPC_X_NULL_REF_POINTER)\n", VAR_12, VAR_7, FUNC_1());

        FUNC_4(FUNC_2(), 0, VAR_8);
    }

    VAR_10 = 0;
    VAR_11 = 0;
    FUNC_5(0xdeadbeef);
    VAR_7 = FUNC_0(((void*)0), VAR_6, 1, ((void*)0), 0, &VAR_10, &VAR_11);
    if (VAR_7)
    {
        FUNC_9("no printer drivers found\n");
        return;
    }
    if (FUNC_1() == VAR_1)
    {
        FUNC_11("NT4 and below don't support the 'all' environment value\n");
        return;
    }
    FUNC_7(FUNC_1() == VAR_0, "unexpected error %u\n", FUNC_1());

    VAR_8 = FUNC_3(FUNC_2(), 0, VAR_10);
    VAR_7 = FUNC_0(((void*)0), VAR_6, 1, VAR_8, VAR_10, &VAR_10, &VAR_11);
    FUNC_7(VAR_7, "EnumPrinterDriversA failed %u\n", FUNC_1());
    if (VAR_7 && VAR_11 > 0)
    {
        DRIVER_INFO_1A *VAR_16 = (DRIVER_INFO_1A *)VAR_8;
        FUNC_7((LPBYTE) VAR_16->pName == ((void*)0) || (LPBYTE) VAR_16->pName < VAR_8 ||
            (LPBYTE) VAR_16->pName >= (LPBYTE)(VAR_16 + VAR_11),
            "Driver Information not in sequence; pName %p, top of data %p\n",
            VAR_16->pName, VAR_16 + VAR_11);
    }

    FUNC_4(FUNC_2(), 0, VAR_8);
}

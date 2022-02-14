
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPBYTE ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int) ;
 int * VAR_1 ;
 int FUNC_5 (int,char*,int,int,scalar_t__,int,int) ;
 int FUNC_6 (int *,int,int *,int,int*,int*) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_7(void)
{
    DWORD VAR_3;
    DWORD VAR_4;
    LPBYTE VAR_5;
    DWORD VAR_6;
    DWORD VAR_7;
    DWORD VAR_8;

    if (!&FUNC_6) return;


    for(VAR_4 = 0; VAR_4 < 4; VAR_4++) {

        VAR_6 = 0xdeadbeef;
        VAR_8 = 0xdeadbeef;
        FUNC_4(0xdeadbeef);
        VAR_3 = FUNC_6(((void*)0), VAR_4, ((void*)0), 0, &VAR_6, &VAR_8);


        if(!VAR_4 || (VAR_4 > 2)) {


            FUNC_5( (VAR_6 == 0) && (VAR_8 == 0),
                "(%d) returned %d with %u and %d, %d (expected 0, 0)\n",
                VAR_4, VAR_3, FUNC_0(), VAR_6, VAR_8);
            continue;
        }

        FUNC_5( !VAR_3 && (FUNC_0() == VAR_0),
            "(%d) returned %d with %u and %d, %d (expected '0' with "
            "ERROR_INSUFFICIENT_BUFFER)\n",
            VAR_4, VAR_3, FUNC_0(), VAR_6, VAR_8);

        VAR_5 = FUNC_2(FUNC_1(), 0, VAR_6 * 2);
        if (VAR_5 == ((void*)0)) continue;

        VAR_7 = 0xdeadbeef;
        VAR_8 = 0xdeadbeef;
        FUNC_4(0xdeadbeef);
        VAR_3 = FUNC_6(((void*)0), VAR_4, VAR_5, VAR_6, &VAR_7, &VAR_8);
        FUNC_5( VAR_3, "(%d) returned %d with %u and %d, %d (expected '!= 0')\n",
            VAR_4, VAR_3, FUNC_0(), VAR_7, VAR_8);


        VAR_7 = 0xdeadbeef;
        VAR_8 = 0xdeadbeef;
        FUNC_4(0xdeadbeef);
        VAR_3 = FUNC_6(((void*)0), VAR_4, VAR_5, VAR_6+1, &VAR_7, &VAR_8);
        FUNC_5( VAR_3, "(%d) returned %d with %u and %d, %d (expected '!= 0')\n",
            VAR_4, VAR_3, FUNC_0(), VAR_7, VAR_8);

        VAR_7 = 0xdeadbeef;
        VAR_8 = 0xdeadbeef;
        FUNC_4(0xdeadbeef);
        VAR_3 = FUNC_6(((void*)0), VAR_4, VAR_5, VAR_6-1, &VAR_7, &VAR_8);
        FUNC_5( !VAR_3 && (FUNC_0() == VAR_0),
            "(%d) returned %d with %u and %d, %d (expected '0' with "
            "ERROR_INSUFFICIENT_BUFFER)\n",
            VAR_4, VAR_3, FUNC_0(), VAR_7, VAR_8);

        if (0)
        {

            FUNC_6(((void*)0), VAR_4, ((void*)0), VAR_6, &VAR_7, &VAR_8);
            FUNC_6(((void*)0), VAR_4, VAR_5, VAR_6, ((void*)0), &VAR_8);
            FUNC_6(((void*)0), VAR_4, VAR_5, VAR_6, &VAR_7, ((void*)0));
        }


        VAR_7 = 0xdeadbeef;
        VAR_8 = 0xdeadbeef;
        FUNC_4(0xdeadbeef);
        VAR_3 = FUNC_6(VAR_1, VAR_4, VAR_5, VAR_6+1, &VAR_7, &VAR_8);
        FUNC_5( VAR_3, "(%d) returned %d with %u and %d, %d (expected '!= 0')\n",
            VAR_4, VAR_3, FUNC_0(), VAR_7, VAR_8);

        VAR_7 = 0xdeadbeef;
        VAR_8 = 0xdeadbeef;
        FUNC_4(0xdeadbeef);
        VAR_3 = FUNC_6(VAR_2, VAR_4, VAR_5, VAR_6+1, &VAR_7, &VAR_8);
        FUNC_5( VAR_3, "(%d) returned %d with %u and %d, %d (expected '!= 0')\n",
            VAR_4, VAR_3, FUNC_0(), VAR_7, VAR_8);

        FUNC_3(FUNC_1(), 0, VAR_5);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int abContainerName ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_6 ;
 int FUNC_4 (int,char*,scalar_t__,...) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    BYTE VAR_7[VAR_3 + 2];
    DWORD VAR_8;
    BOOL VAR_9, VAR_10 = VAR_2;



    FUNC_2(0xdeadbeef);
    VAR_9 = FUNC_0(VAR_6, VAR_4, ((void*)0), &VAR_8, VAR_0);
    FUNC_4 (VAR_9, "%08x\n", FUNC_1());
    FUNC_4 (VAR_8 == VAR_3 + 1 ||
        FUNC_3(VAR_8 != VAR_3 + 1),
        "Expected dwBufferLen to be (MAX_PATH + 1), it was : %d\n", VAR_8);


    VAR_8 = (DWORD)sizeof(VAR_7);
    VAR_9 = FUNC_0(VAR_6, VAR_4, VAR_7, &VAR_8, VAR_0);
    FUNC_4 (VAR_9 && VAR_8 == (DWORD)sizeof(VAR_7), "%08x\n", FUNC_1());


    do {
        if (!FUNC_5((const char*)VAR_7, "winetest")) VAR_10 = VAR_5;
        VAR_8 = (DWORD)sizeof(VAR_7);
    } while (FUNC_0(VAR_6, VAR_4, VAR_7, &VAR_8, 0));

    FUNC_4 (VAR_10 && FUNC_1() == VAR_1, "%d, %08x\n", VAR_10, FUNC_1());
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPVOID ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
    LPVOID VAR_0;

    VAR_0 = FUNC_0(0);
    FUNC_4(VAR_0 != ((void*)0), "CryptMemAlloc failed: %08x\n", FUNC_3());
    FUNC_1(VAR_0);

    VAR_0 = FUNC_0(0);
    VAR_0 = FUNC_2(VAR_0, 1);
    FUNC_4(VAR_0 != ((void*)0), "CryptMemRealloc failed: %08x\n", FUNC_3());
    FUNC_1(VAR_0);
}

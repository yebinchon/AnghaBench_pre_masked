
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int TUNNEL ;
typedef int SIZE_T ;


 void* FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int const*,int const*,int) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_3 (void*,int ,int) ;
 int FUNC_4 (int,char*) ;

void FUNC_5()
{
    SIZE_T VAR_3;
    VAR_1 = FUNC_0(VAR_0, sizeof(TUNNEL));
    FUNC_4(VAR_1 != ((void*)0), "PTUNEL is NULL after allocated memory\n");
    VAR_2 = FUNC_0(VAR_0, sizeof(TUNNEL));
    FUNC_4(VAR_2 != ((void*)0), "PTUNEL is NULL after allocated memory\n");

    FUNC_3((void*)VAR_1, 0, sizeof(TUNNEL));
    FUNC_3((void*)VAR_2, 0, sizeof(TUNNEL));

    FUNC_1(VAR_1);

    VAR_3 = FUNC_2((const VOID*)VAR_1, (const VOID*)VAR_2, sizeof(TUNNEL));

    FUNC_4 ( VAR_3 != sizeof(TUNNEL), "FsRtlInitializeTunnelCache function did not change anything in the memory at the address PTUNEL.\n");
}

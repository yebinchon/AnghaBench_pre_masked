
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int * PVOID ;
typedef int PUNICODE_STRING ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int ,int ,int ,int*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;

BOOLEAN FUNC_3(ULONG VAR_3, PUNICODE_STRING VAR_4, PUNICODE_STRING VAR_5, PUNICODE_STRING VAR_6)
{

    ULONG VAR_7 = VAR_0;
    PVOID VAR_8 = FUNC_0(VAR_1, VAR_0*2);
    FUNC_2(VAR_8 != ((void*)0), "Buff in FsRtlFindInTunnelCache is NULL after allocated memory\n");

    return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, &VAR_7, VAR_8);
}

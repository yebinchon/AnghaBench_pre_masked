
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONGLONG ;
struct TYPE_14__ {struct TYPE_14__* Buffer; } ;
typedef int TUNNEL ;
typedef int SIZE_T ;
typedef TYPE_1__* PVOID ;
typedef TYPE_1__* PUNICODE_STRING ;
typedef scalar_t__ LONG ;
typedef int BOOLEAN ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,TYPE_1__*,TYPE_1__*,int ,int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_4 (int const*,int const*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (void*,int ,int ) ;
 int FUNC_7 (int,char*) ;

void FUNC_8(ULONGLONG VAR_4, PUNICODE_STRING VAR_5, PUNICODE_STRING VAR_6, BOOLEAN VAR_7)
{
    SIZE_T VAR_8;
    LONG VAR_9;
    PUNICODE_STRING VAR_10;
    PUNICODE_STRING VAR_11;
    PVOID VAR_12;
    PVOID VAR_13;

    VAR_13 = FUNC_1(VAR_1, VAR_0);
    FUNC_7(VAR_13 != ((void*)0), "Buff in TestFsRtlAddToTunnelCache is NULL after allocated memory\n");
    VAR_12 = FUNC_1(VAR_1, VAR_0);
    FUNC_7(VAR_12 != ((void*)0), "Buff in TestFsRtlAddToTunnelCache is NULL after allocated memory\n");


    VAR_10 = FUNC_0(VAR_5);


    VAR_11 = FUNC_0(VAR_6);

    FUNC_6((void*)VAR_13, 0, VAR_0);
    FUNC_6((void*)VAR_12, 0, VAR_0);

    FUNC_3(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, VAR_0, VAR_13);

    VAR_8 = FUNC_4((const VOID*)VAR_13, (const VOID*)VAR_12, VAR_0);

    FUNC_7( VAR_8 != sizeof(TUNNEL),"FsRtlAddToTunnelCache function did not change anything in the memory at the address Buf.\n");

    VAR_9 = FUNC_5(VAR_6, VAR_11, VAR_3);
    FUNC_7 (VAR_9 == 0, "long name after call FsRtlAddToTunnelCache != long name befo call FsRtlAddToTunnelCache\n\n");
    VAR_9 = FUNC_5(VAR_5, VAR_10, VAR_3);
    FUNC_7 (VAR_9 == 0, "short name after call FsRtlAddToTunnelCache != short name befo call FsRtlAddToTunnelCache\n\n");

    if (VAR_10->Buffer) FUNC_2(VAR_10->Buffer);
    FUNC_2(VAR_10);
    if (VAR_11->Buffer) FUNC_2(VAR_11->Buffer);
    FUNC_2(VAR_11);
    FUNC_2(VAR_12);
    FUNC_2(VAR_13);
}

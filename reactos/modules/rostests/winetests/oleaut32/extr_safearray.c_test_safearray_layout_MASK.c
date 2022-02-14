
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ref; int IRecordInfo_iface; } ;
struct TYPE_6__ {int cElements; scalar_t__ lLbound; } ;
typedef TYPE_1__ SAFEARRAYBOUND ;
typedef int SAFEARRAY ;
typedef TYPE_2__ IRecordInfoImpl ;
typedef int IRecordInfo ;
typedef int * HRESULT ;
typedef int GUID ;
typedef int * DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int * VAR_2 ;
 int * FUNC_3 (int *,int,TYPE_1__*) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int,char*,...) ;
 int * FUNC_9 (int ,int,TYPE_1__*,int *) ;
 int * FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(void)
{
    IRecordInfoImpl *VAR_6;
    IRecordInfo *VAR_7;
    GUID VAR_8, *VAR_9;
    SAFEARRAYBOUND VAR_10;
    SAFEARRAY *VAR_11;
    DWORD *VAR_12;
    HRESULT VAR_13;

    VAR_10.lLbound = 0;
    VAR_10.cElements = 10;


    VAR_11 = FUNC_3(VAR_5, 1, &VAR_10);
    FUNC_8(VAR_11 != ((void*)0), "got %p\n", VAR_11);

    VAR_9 = (GUID*)VAR_11 - 1;
    FUNC_8(FUNC_2(VAR_9, &VAR_1), "got %s\n", FUNC_10(VAR_9));

    VAR_13 = FUNC_6(VAR_11, &VAR_0);
    FUNC_8(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
    FUNC_8(FUNC_2(VAR_9, &VAR_0), "got %s\n", FUNC_10(VAR_9));

    FUNC_7(VAR_9, &VAR_1, sizeof(GUID));
    VAR_13 = FUNC_5(VAR_11, &VAR_8);
    FUNC_8(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
    FUNC_8(FUNC_2(&VAR_8, &VAR_1), "got %s\n", FUNC_10(&VAR_8));

    VAR_13 = FUNC_4(VAR_11);
    FUNC_8(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);


    VAR_11 = FUNC_3(VAR_4, 1, &VAR_10);
    FUNC_8(VAR_11 != ((void*)0), "got %p\n", VAR_11);

    VAR_12 = (DWORD*)VAR_11 - 1;
    FUNC_8(*VAR_12 == VAR_4, "got %d\n", *VAR_12);

    VAR_13 = FUNC_4(VAR_11);
    FUNC_8(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);


    VAR_6 = FUNC_0();
    VAR_6->ref = 1;

    VAR_11 = FUNC_9(VAR_3, 1, &VAR_10, &VAR_6->IRecordInfo_iface);
    FUNC_8(VAR_11 != ((void*)0), "failed to create array\n");

    VAR_7 = *((IRecordInfo**)VAR_11 - 1);
    FUNC_8(VAR_7 == &VAR_6->IRecordInfo_iface, "got %p\n", VAR_7);

    VAR_13 = FUNC_4(VAR_11);
    FUNC_8(VAR_13 == VAR_2, "got 0x%08x\n", VAR_13);
    FUNC_1(&VAR_6->IRecordInfo_iface);
}

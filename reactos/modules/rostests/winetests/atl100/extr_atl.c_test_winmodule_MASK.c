
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int winmod ;
struct TYPE_10__ {void* m_pThis; struct TYPE_10__* m_pNext; int m_dwThreadID; } ;
typedef TYPE_2__ _AtlCreateWndData ;
struct TYPE_12__ {int LockCount; } ;
struct TYPE_9__ {void* m_aT; int m_nSize; int m_nAllocSize; } ;
struct TYPE_11__ {int cbSize; TYPE_2__* m_pCreateWndList; TYPE_4__ m_csWindowCreate; TYPE_1__ m_rgWindowClassAtoms; } ;
typedef TYPE_3__ _ATL_WIN_MODULE ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*,void*) ;
 void* FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
    _AtlCreateWndData VAR_2[3];
    _ATL_WIN_MODULE VAR_3;
    void *VAR_4;
    HRESULT VAR_5;

    VAR_3.cbSize = 0xdeadbeef;
    VAR_5 = FUNC_2(&VAR_3);
    FUNC_5(VAR_5 == VAR_0, "AtlWinModuleInit failed: %08x\n", VAR_5);

    VAR_3.cbSize = sizeof(VAR_3);
    VAR_3.m_pCreateWndList = (void*)0xdeadbeef;
    VAR_3.m_csWindowCreate.LockCount = 0xdeadbeef;
    VAR_3.m_rgWindowClassAtoms.m_aT = (void*)0xdeadbeef;
    VAR_3.m_rgWindowClassAtoms.m_nSize = 0xdeadbeef;
    VAR_3.m_rgWindowClassAtoms.m_nAllocSize = 0xdeadbeef;
    VAR_5 = FUNC_2(&VAR_3);
    FUNC_5(VAR_5 == VAR_1, "AtlWinModuleInit failed: %08x\n", VAR_5);
    FUNC_5(!VAR_3.m_pCreateWndList, "winmod.m_pCreateWndList = %p\n", VAR_3.m_pCreateWndList);
    FUNC_5(VAR_3.m_csWindowCreate.LockCount == -1, "winmod.m_csWindowCreate.LockCount = %d\n",
       VAR_3.m_csWindowCreate.LockCount);
    FUNC_5(VAR_3.m_rgWindowClassAtoms.m_aT == (void*)0xdeadbeef, "winmod.m_rgWindowClassAtoms.m_aT = %p\n",
       VAR_3.m_rgWindowClassAtoms.m_aT);
    FUNC_5(VAR_3.m_rgWindowClassAtoms.m_nSize == 0xdeadbeef, "winmod.m_rgWindowClassAtoms.m_nSize = %d\n",
       VAR_3.m_rgWindowClassAtoms.m_nSize);
    FUNC_5(VAR_3.m_rgWindowClassAtoms.m_nAllocSize == 0xdeadbeef, "winmod.m_rgWindowClassAtoms.m_nAllocSize = %d\n",
       VAR_3.m_rgWindowClassAtoms.m_nAllocSize);

    FUNC_4(&VAR_3.m_csWindowCreate);

    FUNC_0(&VAR_3, VAR_2, (void*)0xdead0001);
    FUNC_5(VAR_3.m_pCreateWndList == VAR_2, "winmod.m_pCreateWndList != create_data\n");
    FUNC_5(VAR_2[0].m_pThis == (void*)0xdead0001, "unexpected create_data[0].m_pThis %p\n", VAR_2[0].m_pThis);
    FUNC_5(VAR_2[0].m_dwThreadID == FUNC_3(), "unexpected create_data[0].m_dwThreadID %x\n",
       VAR_2[0].m_dwThreadID);
    FUNC_5(!VAR_2[0].m_pNext, "unexpected create_data[0].m_pNext %p\n", VAR_2[0].m_pNext);

    FUNC_0(&VAR_3, VAR_2+1, (void*)0xdead0002);
    FUNC_5(VAR_3.m_pCreateWndList == VAR_2+1, "winmod.m_pCreateWndList != create_data\n");
    FUNC_5(VAR_2[1].m_pThis == (void*)0xdead0002, "unexpected create_data[1].m_pThis %p\n", VAR_2[1].m_pThis);
    FUNC_5(VAR_2[1].m_dwThreadID == FUNC_3(), "unexpected create_data[1].m_dwThreadID %x\n",
       VAR_2[1].m_dwThreadID);
    FUNC_5(VAR_2[1].m_pNext == VAR_2, "unexpected create_data[1].m_pNext %p\n", VAR_2[1].m_pNext);

    FUNC_0(&VAR_3, VAR_2+2, (void*)0xdead0003);
    FUNC_5(VAR_3.m_pCreateWndList == VAR_2+2, "winmod.m_pCreateWndList != create_data\n");
    FUNC_5(VAR_2[2].m_pThis == (void*)0xdead0003, "unexpected create_data[2].m_pThis %p\n", VAR_2[2].m_pThis);
    FUNC_5(VAR_2[2].m_dwThreadID == FUNC_3(), "unexpected create_data[2].m_dwThreadID %x\n",
       VAR_2[2].m_dwThreadID);
    FUNC_5(VAR_2[2].m_pNext == VAR_2+1, "unexpected create_data[2].m_pNext %p\n", VAR_2[2].m_pNext);

    VAR_4 = FUNC_1(&VAR_3);
    FUNC_5(VAR_4 == (void*)0xdead0003, "unexpected AtlWinModuleExtractCreateWndData result %p\n", VAR_4);
    FUNC_5(VAR_3.m_pCreateWndList == VAR_2+1, "winmod.m_pCreateWndList != create_data\n");
    FUNC_5(VAR_2[2].m_pNext == VAR_2+1, "unexpected create_data[2].m_pNext %p\n", VAR_2[2].m_pNext);

    VAR_2[1].m_dwThreadID = 0xdeadbeef;

    VAR_4 = FUNC_1(&VAR_3);
    FUNC_5(VAR_4 == (void*)0xdead0001, "unexpected AtlWinModuleExtractCreateWndData result %p\n", VAR_4);
    FUNC_5(VAR_3.m_pCreateWndList == VAR_2+1, "winmod.m_pCreateWndList != create_data\n");
    FUNC_5(!VAR_2[0].m_pNext, "unexpected create_data[0].m_pNext %p\n", VAR_2[0].m_pNext);
    FUNC_5(!VAR_2[1].m_pNext, "unexpected create_data[1].m_pNext %p\n", VAR_2[1].m_pNext);

    VAR_4 = FUNC_1(&VAR_3);
    FUNC_5(!VAR_4, "unexpected AtlWinModuleExtractCreateWndData result %p\n", VAR_4);
    FUNC_5(VAR_3.m_pCreateWndList == VAR_2+1, "winmod.m_pCreateWndList != create_data\n");
}

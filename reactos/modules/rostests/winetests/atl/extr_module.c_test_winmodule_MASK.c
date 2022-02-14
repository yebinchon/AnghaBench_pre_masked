
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int winmod ;
struct TYPE_9__ {void* m_pThis; struct TYPE_9__* m_pNext; int m_dwThreadID; } ;
typedef TYPE_2__ _AtlCreateWndData ;
struct TYPE_8__ {int LockCount; } ;
struct TYPE_10__ {int cbSize; TYPE_2__* m_pCreateWndList; TYPE_1__ m_csWindowCreate; } ;
typedef TYPE_3__ _ATL_MODULEW ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*,void*) ;
 void* FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *,int *) ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
    _AtlCreateWndData VAR_1[3];
    _ATL_MODULEW VAR_2;
    void *VAR_3;
    HRESULT VAR_4;

    VAR_2.cbSize = sizeof(VAR_2);
    VAR_2.m_pCreateWndList = (void*)0xdeadbeef;
    VAR_2.m_csWindowCreate.LockCount = 0xdeadbeef;
    VAR_4 = FUNC_2(&VAR_2, ((void*)0), ((void*)0));
    FUNC_4(VAR_4 == VAR_0, "AtlModuleInit failed: %08x\n", VAR_4);
    FUNC_4(!VAR_2.m_pCreateWndList, "winmod.m_pCreateWndList = %p\n", VAR_2.m_pCreateWndList);
    FUNC_4(VAR_2.m_csWindowCreate.LockCount == -1, "winmod.m_csWindowCreate.LockCount = %d\n",
       VAR_2.m_csWindowCreate.LockCount);

    FUNC_0(&VAR_2, VAR_1, (void*)0xdead0001);
    FUNC_4(VAR_2.m_pCreateWndList == VAR_1, "winmod.m_pCreateWndList != create_data\n");
    FUNC_4(VAR_1[0].m_pThis == (void*)0xdead0001, "unexpected create_data[0].m_pThis %p\n", VAR_1[0].m_pThis);
    FUNC_4(VAR_1[0].m_dwThreadID == FUNC_3(), "unexpected create_data[0].m_dwThreadID %x\n",
       VAR_1[0].m_dwThreadID);
    FUNC_4(!VAR_1[0].m_pNext, "unexpected create_data[0].m_pNext %p\n", VAR_1[0].m_pNext);

    FUNC_0(&VAR_2, VAR_1+1, (void*)0xdead0002);
    FUNC_4(VAR_2.m_pCreateWndList == VAR_1+1, "winmod.m_pCreateWndList != create_data\n");
    FUNC_4(VAR_1[1].m_pThis == (void*)0xdead0002, "unexpected create_data[1].m_pThis %p\n", VAR_1[1].m_pThis);
    FUNC_4(VAR_1[1].m_dwThreadID == FUNC_3(), "unexpected create_data[1].m_dwThreadID %x\n",
       VAR_1[1].m_dwThreadID);
    FUNC_4(VAR_1[1].m_pNext == VAR_1, "unexpected create_data[1].m_pNext %p\n", VAR_1[1].m_pNext);

    FUNC_0(&VAR_2, VAR_1+2, (void*)0xdead0003);
    FUNC_4(VAR_2.m_pCreateWndList == VAR_1+2, "winmod.m_pCreateWndList != create_data\n");
    FUNC_4(VAR_1[2].m_pThis == (void*)0xdead0003, "unexpected create_data[2].m_pThis %p\n", VAR_1[2].m_pThis);
    FUNC_4(VAR_1[2].m_dwThreadID == FUNC_3(), "unexpected create_data[2].m_dwThreadID %x\n",
       VAR_1[2].m_dwThreadID);
    FUNC_4(VAR_1[2].m_pNext == VAR_1+1, "unexpected create_data[2].m_pNext %p\n", VAR_1[2].m_pNext);

    VAR_3 = FUNC_1(&VAR_2);
    FUNC_4(VAR_3 == (void*)0xdead0003, "unexpected AtlModuleExtractCreateWndData result %p\n", VAR_3);
    FUNC_4(VAR_2.m_pCreateWndList == VAR_1+1, "winmod.m_pCreateWndList != create_data\n");
    FUNC_4(VAR_1[2].m_pNext == VAR_1+1, "unexpected create_data[2].m_pNext %p\n", VAR_1[2].m_pNext);

    VAR_1[1].m_dwThreadID = 0xdeadbeef;

    VAR_3 = FUNC_1(&VAR_2);
    FUNC_4(VAR_3 == (void*)0xdead0001, "unexpected AtlModuleExtractCreateWndData result %p\n", VAR_3);
    FUNC_4(VAR_2.m_pCreateWndList == VAR_1+1, "winmod.m_pCreateWndList != create_data\n");
    FUNC_4(!VAR_1[0].m_pNext, "unexpected create_data[0].m_pNext %p\n", VAR_1[0].m_pNext);
    FUNC_4(!VAR_1[1].m_pNext, "unexpected create_data[1].m_pNext %p\n", VAR_1[1].m_pNext);

    VAR_3 = FUNC_1(&VAR_2);
    FUNC_4(!VAR_3, "unexpected AtlModuleExtractCreateWndData result %p\n", VAR_3);
    FUNC_4(VAR_2.m_pCreateWndList == VAR_1+1, "winmod.m_pCreateWndList != create_data\n");
}

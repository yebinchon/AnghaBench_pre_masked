
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vars ;
typedef int params ;
typedef int VARIANT ;
typedef scalar_t__ ULONG ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_8__ {int refCount; int * pt; scalar_t__ ptCount; TYPE_1__ IConnectionPointContainer_iface; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int refCount; TYPE_2__ IDispatch_iface; } ;
typedef int IUnknown ;
typedef int IConnectionPoint ;
typedef scalar_t__ HRESULT ;
typedef TYPE_3__ Disp ;
typedef int DWORD ;
typedef int DISPPARAMS ;
typedef TYPE_4__ Contain ;


 int VAR_0 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ FUNC_5 (int *,int *,int ,int *,int*,int **) ;
 scalar_t__ FUNC_6 (int *,int,int *) ;
 scalar_t__ FUNC_7 (int *,int *,int,int ,int,int ,int) ;

__attribute__((used)) static void FUNC_8(void)
{
    HRESULT VAR_8;
    ULONG VAR_9;
    IConnectionPoint *VAR_10;
    Contain *VAR_11;
    Disp *VAR_12;
    DWORD VAR_13 = 0xffffffff;
    DISPPARAMS VAR_14;
    VARIANT VAR_15[10];

    VAR_11 = FUNC_1(FUNC_0(),0,sizeof(Contain));
    VAR_11->IConnectionPointContainer_iface.lpVtbl = &VAR_6;
    VAR_11->refCount = 1;
    VAR_11->ptCount = 0;
    VAR_11->pt = ((void*)0);

    VAR_12 = FUNC_1(FUNC_0(),0,sizeof(Disp));
    VAR_12->IDispatch_iface.lpVtbl = &VAR_7;
    VAR_12->refCount = 1;

    VAR_8 = FUNC_5((IUnknown*)VAR_12, &VAR_1, VAR_3, (IUnknown*)VAR_11, &VAR_13, &VAR_10);
    FUNC_4(VAR_8 == VAR_2, "pConnectToConnectionPoint failed with %x\n",VAR_8);
    FUNC_4(VAR_10 != ((void*)0), "returned ConnectionPoint is NULL\n");
    FUNC_4(VAR_13 != 0xffffffff, "invalid cookie returned\n");

    VAR_8 = FUNC_6(VAR_10,0xa0,((void*)0));
    FUNC_4(VAR_8 == VAR_2, "pConnectToConnectionPoint failed with %x\n",VAR_8);

    FUNC_3(&VAR_14, 0xc0, sizeof(VAR_14));
    FUNC_3(VAR_15, 0xc0, sizeof(VAR_15));
    VAR_8 = FUNC_7(&VAR_14, VAR_15, 2, VAR_5, 0xdeadbeef, VAR_4, 0xdeadcafe);
    FUNC_4(VAR_8 == VAR_2, "SHPackDispParams failed: %08x\n", VAR_8);

    VAR_8 = FUNC_6(VAR_10,0xa1,&VAR_14);
    FUNC_4(VAR_8 == VAR_2, "pConnectToConnectionPoint failed with %x\n",VAR_8);

    VAR_8 = FUNC_5(((void*)0), &VAR_1, VAR_0, (IUnknown*)VAR_11, &VAR_13, ((void*)0));
    FUNC_4(VAR_8 == VAR_2, "pConnectToConnectionPoint failed with %x\n",VAR_8);




    VAR_9 = FUNC_2((IUnknown*)VAR_11);
    FUNC_4(VAR_9 == 0, "leftover IConnectionPointContainer reference %i\n",VAR_9);
    VAR_9 = FUNC_2((IUnknown*)VAR_12);
    FUNC_4(VAR_9 == 0, "leftover IDispatch reference %i\n",VAR_9);
}

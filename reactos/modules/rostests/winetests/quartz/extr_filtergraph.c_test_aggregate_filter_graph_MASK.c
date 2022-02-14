
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * member_0; } ;
struct TYPE_4__ {int AddRef_called; int Release_called; int IUnknown_iface; int member_2; int member_1; TYPE_1__ member_0; } ;
typedef TYPE_2__ IUnknownImpl ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 int FUNC_3 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_4(void)
{
    HRESULT VAR_8;
    IUnknown *VAR_9;
    IUnknown *VAR_10;
    IUnknownImpl VAR_11 = { VAR_6 , 0, 0 };

    VAR_8 = FUNC_0(&VAR_1, &VAR_11.IUnknown_iface, VAR_0,
                          &VAR_5, (void **)&VAR_9);
    FUNC_3(VAR_8 == VAR_7, "CoCreateInstance returned %x\n", VAR_8);
    FUNC_3(VAR_9 != &VAR_11.IUnknown_iface, "pgraph = %p, expected not %p\n", *VAR_9, &VAR_11.IUnknown_iface);

    VAR_8 = FUNC_1(VAR_9, &VAR_5, (void **)&VAR_10);
    FUNC_3(VAR_8 == VAR_7, "CoCreateInstance returned %x\n", VAR_8);
    FUNC_3(VAR_10 != &VAR_11.IUnknown_iface, "punk = %p, expected not %p\n", *VAR_10, &VAR_11.IUnknown_iface);
    FUNC_2(VAR_10);

    FUNC_3(VAR_11.AddRef_called == 0, "IUnknownImpl_AddRef called %d times\n", VAR_11.AddRef_called);
    FUNC_3(VAR_11.Release_called == 0, "IUnknownImpl_Release called %d times\n", VAR_11.Release_called);
    VAR_11.AddRef_called = 0;
    VAR_11.Release_called = 0;

    VAR_8 = FUNC_1(VAR_9, &VAR_2, (void **)&VAR_10);
    FUNC_3(VAR_8 == VAR_7, "CoCreateInstance returned %x\n", VAR_8);
    FUNC_3(VAR_10 != &VAR_11.IUnknown_iface, "punk = %p, expected not %p\n", *VAR_10, &VAR_11.IUnknown_iface);
    FUNC_2(VAR_10);

    FUNC_3(VAR_11.AddRef_called == 1, "IUnknownImpl_AddRef called %d times\n", VAR_11.AddRef_called);
    FUNC_3(VAR_11.Release_called == 1, "IUnknownImpl_Release called %d times\n", VAR_11.Release_called);
    VAR_11.AddRef_called = 0;
    VAR_11.Release_called = 0;

    VAR_8 = FUNC_1(VAR_9, &VAR_3, (void **)&VAR_10);
    FUNC_3(VAR_8 == VAR_7, "CoCreateInstance returned %x\n", VAR_8);
    FUNC_3(VAR_10 != &VAR_11.IUnknown_iface, "punk = %p, expected not %p\n", *VAR_10, &VAR_11.IUnknown_iface);
    FUNC_2(VAR_10);

    FUNC_3(VAR_11.AddRef_called == 1, "IUnknownImpl_AddRef called %d times\n", VAR_11.AddRef_called);
    FUNC_3(VAR_11.Release_called == 1, "IUnknownImpl_Release called %d times\n", VAR_11.Release_called);
    VAR_11.AddRef_called = 0;
    VAR_11.Release_called = 0;

    VAR_8 = FUNC_1(VAR_9, &VAR_4, (void **)&VAR_10);
    FUNC_3(VAR_8 == VAR_7, "CoCreateInstance returned %x\n", VAR_8);
    FUNC_3(VAR_10 != &VAR_11.IUnknown_iface, "punk = %p, expected not %p\n", *VAR_10, &VAR_11.IUnknown_iface);
    FUNC_2(VAR_10);

    FUNC_3(VAR_11.AddRef_called == 1, "IUnknownImpl_AddRef called %d times\n", VAR_11.AddRef_called);
    FUNC_3(VAR_11.Release_called == 1, "IUnknownImpl_Release called %d times\n", VAR_11.Release_called);

    FUNC_2(VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sfvc ;
typedef int * ULONG ;
struct TYPE_4__ {int cbSize; int * pshf; } ;
typedef TYPE_1__ SFV_CREATE ;
typedef int IUnknown ;
typedef int IShellView ;
typedef int IShellFolder ;
typedef int * HRESULT ;


 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *,void**) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_1__*,int **) ;
 int * FUNC_5 (int **) ;
 int * VAR_3 ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (int,char*,int *) ;

__attribute__((used)) static void FUNC_8(void)
{
    IShellFolder *VAR_4;
    IShellView *VAR_5;
    SFV_CREATE VAR_6;
    ULONG VAR_7;
    IUnknown *VAR_8;
    HRESULT VAR_9;

    VAR_9 = FUNC_5(&VAR_4);
    FUNC_7(VAR_9 == VAR_3, "got (0x%08x)\n", VAR_9);

    if (0)
    {

        FUNC_4(((void*)0), ((void*)0));
    }

    VAR_5 = (void *)0xdeadbeef;
    VAR_9 = FUNC_4(((void*)0), &VAR_5);
    FUNC_7(VAR_9 == VAR_0, "Got 0x%08x\n", VAR_9);
    FUNC_7(VAR_5 == ((void*)0), "psv = %p\n", VAR_5);

    FUNC_6(&VAR_6, 0, sizeof(VAR_6));
    VAR_5 = (void *)0xdeadbeef;
    VAR_9 = FUNC_4(&VAR_6, &VAR_5);
    FUNC_7(VAR_9 == VAR_0, "Got 0x%08x\n", VAR_9);
    FUNC_7(VAR_5 == ((void*)0), "psv = %p\n", VAR_5);

    FUNC_6(&VAR_6, 0, sizeof(VAR_6));
    VAR_6.cbSize = sizeof(VAR_6) - 1;
    VAR_5 = (void *)0xdeadbeef;
    VAR_9 = FUNC_4(&VAR_6, &VAR_5);
    FUNC_7(VAR_9 == VAR_0, "Got 0x%08x\n", VAR_9);
    FUNC_7(VAR_5 == ((void*)0), "psv = %p\n", VAR_5);

    FUNC_6(&VAR_6, 0, sizeof(VAR_6));
    VAR_6.cbSize = sizeof(VAR_6) + 1;
    VAR_5 = (void *)0xdeadbeef;
    VAR_9 = FUNC_4(&VAR_6, &VAR_5);
    FUNC_7(VAR_9 == VAR_0, "Got 0x%08x\n", VAR_9);
    FUNC_7(VAR_5 == ((void*)0), "psv = %p\n", VAR_5);

if (0)
{

    FUNC_6(&VAR_6, 0, sizeof(VAR_6));
    VAR_6.cbSize = sizeof(VAR_6);
    VAR_5 = (void *)0xdeadbeef;
    VAR_9 = FUNC_4(&VAR_6, &VAR_5);
    FUNC_7(VAR_9 == VAR_1, "Got 0x%08x\n", VAR_9);
    FUNC_7(VAR_5 == ((void*)0), "psv = %p\n", VAR_5);
}
    FUNC_6(&VAR_6, 0, sizeof(VAR_6));
    VAR_6.cbSize = sizeof(VAR_6) - 1;
    VAR_6.pshf = VAR_4;
    VAR_5 = (void *)0xdeadbeef;
    VAR_9 = FUNC_4(&VAR_6, &VAR_5);
    FUNC_7(VAR_9 == VAR_0, "Got 0x%08x\n", VAR_9);
    FUNC_7(VAR_5 == ((void*)0), "psv = %p\n", VAR_5);

    FUNC_6(&VAR_6, 0, sizeof(VAR_6));
    VAR_6.cbSize = sizeof(VAR_6);
    VAR_6.pshf = VAR_4;
    VAR_5 = ((void*)0);
    VAR_9 = FUNC_4(&VAR_6, &VAR_5);
    FUNC_7(VAR_9 == VAR_3, "Got 0x%08x\n", VAR_9);
    FUNC_7(VAR_5 != ((void*)0), "psv = %p\n", VAR_5);

    VAR_9 = FUNC_1(VAR_5, &VAR_2, (void **)&VAR_8);
    FUNC_7(VAR_9 == VAR_3, "got (0x%08x)\n", VAR_9);
    FUNC_7(VAR_8 == (IUnknown *)VAR_5, "got %p\n", VAR_8);
    FUNC_3(VAR_8);

    VAR_7 = FUNC_2(VAR_5);
    FUNC_7(VAR_7 == 0, "refCount = %u\n", VAR_7);

    FUNC_0(VAR_4);
}

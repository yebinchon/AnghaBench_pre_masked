
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int csfv ;
typedef int * ULONG ;
struct TYPE_4__ {int cbSize; int * pshf; } ;
typedef int IUnknown ;
typedef int IShellView ;
typedef int IShellFolder ;
typedef int * HRESULT ;
typedef TYPE_1__ CSFV ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *,void**) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_1__*,int **) ;
 int * FUNC_5 (int **) ;
 int * VAR_2 ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (int,char*,int *) ;

__attribute__((used)) static void FUNC_8(void)
{
    IShellFolder *VAR_3;
    IShellView *VAR_4;
    ULONG VAR_5;
    IUnknown *VAR_6;
    HRESULT VAR_7;
    CSFV VAR_8;

    VAR_7 = FUNC_5(&VAR_3);
    FUNC_7(VAR_7 == VAR_2, "got (0x%08x)\n", VAR_7);

    if (0)
    {

        FUNC_4(((void*)0), ((void*)0));
        FUNC_4(((void*)0), &VAR_4);
        FUNC_4(&VAR_8, ((void*)0));
    }

    FUNC_6(&VAR_8, 0, sizeof(VAR_8));
    VAR_8.pshf = VAR_3;
    VAR_4 = ((void*)0);
    VAR_7 = FUNC_4(&VAR_8, &VAR_4);
    FUNC_7(VAR_7 == VAR_2, "Got 0x%08x\n", VAR_7);
    FUNC_7(VAR_4 != ((void*)0), "psv = %p\n", VAR_4);

    VAR_7 = FUNC_1(VAR_4, &VAR_1, (void **)&VAR_6);
    FUNC_7(VAR_7 == VAR_2, "got (0x%08x)\n", VAR_7);
    FUNC_7(VAR_6 == (IUnknown *)VAR_4, "got %p\n", VAR_6);
    FUNC_3(VAR_6);

    VAR_5 = FUNC_2(VAR_4);
    FUNC_7(VAR_5 == 0, "refCount = %u\n", VAR_5);

if (0)
{

    FUNC_6(&VAR_8, 0, sizeof(VAR_8));
    VAR_8.pshf = ((void*)0);
    VAR_4 = (void *)0xdeadbeef;
    VAR_7 = FUNC_4(&VAR_8, &VAR_4);
    FUNC_7(VAR_7 == VAR_0, "Got 0x%08x\n", VAR_7);
    FUNC_7(VAR_4 == ((void*)0), "psv = %p\n", VAR_4);
}
    FUNC_6(&VAR_8, 0, sizeof(VAR_8));
    VAR_8.cbSize = sizeof(VAR_8);
    VAR_8.pshf = VAR_3;
    VAR_4 = ((void*)0);
    VAR_7 = FUNC_4(&VAR_8, &VAR_4);
    FUNC_7(VAR_7 == VAR_2, "Got 0x%08x\n", VAR_7);
    FUNC_7(VAR_4 != ((void*)0), "psv = %p\n", VAR_4);
    if (VAR_4)
    {
        VAR_5 = FUNC_2(VAR_4);
        FUNC_7(VAR_5 == 0, "refCount = %u\n", VAR_5);
    }

    FUNC_0(VAR_3);
}

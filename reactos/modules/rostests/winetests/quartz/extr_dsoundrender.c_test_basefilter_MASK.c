
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* ULONG ;
typedef void IPin ;
typedef int IEnumPins ;
typedef int IBaseFilter ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int **) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int,void**,void**) ;
 void* FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,int *,void**) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int,char*,void*) ;
 int VAR_5 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (void*) ;

__attribute__((used)) static void FUNC_9(void)
{
    IEnumPins *VAR_6 = ((void*)0);
    IBaseFilter *VAR_7 = ((void*)0);
    IPin *VAR_8[2];
    ULONG VAR_9;
    HRESULT VAR_10;

    FUNC_5(VAR_5, &VAR_2, (void **)&VAR_7);
    if (VAR_7 == ((void*)0))
    {

        FUNC_7("No IBaseFilter\n");
        return;
    }

    VAR_10 = FUNC_0(VAR_7, ((void*)0));
    FUNC_6(VAR_10 == VAR_1, "hr = %08x and not E_POINTER\n", VAR_10);

    VAR_10= FUNC_0(VAR_7, &VAR_6);
    FUNC_6(VAR_10 == VAR_4, "hr = %08x and not S_OK\n", VAR_10);

    VAR_10 = FUNC_2(VAR_6, 1, ((void*)0), ((void*)0));
    FUNC_6(VAR_10 == VAR_1, "hr = %08x and not E_POINTER\n", VAR_10);

    VAR_10 = FUNC_2(VAR_6, 2, VAR_8, ((void*)0));
    FUNC_6(VAR_10 == VAR_0, "hr = %08x and not E_INVALIDARG\n", VAR_10);

    VAR_8[0] = (void *)0xdead;
    VAR_8[1] = (void *)0xdeed;

    VAR_10 = FUNC_2(VAR_6, 2, VAR_8, &VAR_9);
    FUNC_6(VAR_10 == VAR_3, "hr = %08x instead of S_FALSE\n", VAR_10);
    FUNC_6(VAR_8[0] != (void *)0xdead && VAR_8[0] != ((void*)0), "pins[0] = %p\n", VAR_8[0]);
    if (VAR_8[0] != (void *)0xdead && VAR_8[0] != ((void*)0))
    {
        FUNC_8(VAR_8[0]);
        FUNC_4(VAR_8[0]);
    }

    FUNC_6(VAR_8[1] == (void *)0xdeed, "pins[1] = %p\n", VAR_8[1]);

    VAR_9 = FUNC_3(VAR_6);
    FUNC_6(VAR_9 == 0, "ref is %u and not 0!\n", VAR_9);

    FUNC_1(VAR_7);
}

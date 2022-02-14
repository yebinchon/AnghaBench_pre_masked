
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int IUnknown ;
typedef int ITextServices ;
typedef int ITextHost ;
typedef int ITextDocument ;
typedef int IRichEditOle ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,void**) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int **) ;
 int FUNC_9 (int,char*,int) ;

__attribute__((used)) static void FUNC_10(void)
{
    ITextServices *VAR_3;
    ITextHost *VAR_4;
    HRESULT VAR_5;
    IRichEditOle *VAR_6, *VAR_7;
    ITextDocument *VAR_8, *VAR_9;
    ULONG VAR_10;

    if(!FUNC_8(&VAR_3, &VAR_4))
        return;

    VAR_10 = FUNC_7((IUnknown *)VAR_3);
    FUNC_9(VAR_10 == 1, "got wrong ref count: %d\n", VAR_10);


    VAR_5 = FUNC_5(VAR_3, &VAR_0, (void **)&VAR_7);
    FUNC_9(VAR_5 == VAR_2, "ITextServices_QueryInterface: 0x%08x\n", VAR_5);
    VAR_10 = FUNC_7((IUnknown *)VAR_3);
    FUNC_9(VAR_10 == 2, "got wrong ref count: %d\n", VAR_10);
    VAR_10 = FUNC_7((IUnknown *)VAR_7);
    FUNC_9(VAR_10 == 2, "got wrong ref count: %d\n", VAR_10);

    VAR_5 = FUNC_0(VAR_7, &VAR_1, (void **)&VAR_8);
    FUNC_9(VAR_5 == VAR_2, "IRichEditOle_QueryInterface: 0x%08x\n", VAR_5);
    VAR_10 = FUNC_7((IUnknown *)VAR_3);
    FUNC_9(VAR_10 == 3, "got wrong ref count: %d\n", VAR_10);
    VAR_10 = FUNC_7((IUnknown *)VAR_7);
    FUNC_9(VAR_10 == 3, "got wrong ref count: %d\n", VAR_10);

    FUNC_3(VAR_8);
    VAR_10 = FUNC_7((IUnknown *)VAR_3);
    FUNC_9(VAR_10 == 2, "got wrong ref count: %d\n", VAR_10);
    FUNC_1(VAR_7);
    VAR_10 = FUNC_7((IUnknown *)VAR_3);
    FUNC_9(VAR_10 == 1, "got wrong ref count: %d\n", VAR_10);


    VAR_5 = FUNC_5(VAR_3, &VAR_1, (void **)&VAR_9);
    FUNC_9(VAR_5 == VAR_2, "ITextServices_QueryInterface: 0x%08x\n", VAR_5);
    VAR_10 = FUNC_7((IUnknown *)VAR_3);
    FUNC_9(VAR_10 == 2, "got wrong ref count: %d\n", VAR_10);
    VAR_10 = FUNC_7((IUnknown *)VAR_9);
    FUNC_9(VAR_10 == 2, "got wrong ref count: %d\n", VAR_10);

    VAR_5 = FUNC_2(VAR_9, &VAR_0, (void **)&VAR_6);
    FUNC_9(VAR_5 == VAR_2, "ITextDocument_QueryInterface: 0x%08x\n", VAR_5);
    VAR_10 = FUNC_7((IUnknown *)VAR_3);
    FUNC_9(VAR_10 == 3, "got wrong ref count: %d\n", VAR_10);
    VAR_10 = FUNC_7((IUnknown *)VAR_9);
    FUNC_9(VAR_10 == 3, "got wrong ref count: %d\n", VAR_10);

    FUNC_1(VAR_6);
    VAR_10 = FUNC_7((IUnknown *)VAR_3);
    FUNC_9(VAR_10 == 2, "got wrong ref count: %d\n", VAR_10);
    FUNC_3(VAR_9);
    VAR_10 = FUNC_7((IUnknown *)VAR_3);
    FUNC_9(VAR_10 == 1, "got wrong ref count: %d\n", VAR_10);

    FUNC_6(VAR_3);
    FUNC_4(VAR_4);
}

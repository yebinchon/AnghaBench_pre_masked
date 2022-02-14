
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int LPVOID ;
typedef int IUnknown ;
typedef int IFilterMapper2 ;
typedef int IFilterGraph2 ;
typedef int IFilterGraph ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,char*,int) ;

__attribute__((used)) static void FUNC_9(void)
{
    IFilterGraph2* VAR_8 = ((void*)0);
    IFilterMapper2 *VAR_9 = ((void*)0);
    IFilterGraph *VAR_10 = ((void*)0);
    HRESULT VAR_11;
    ULONG VAR_12;

    VAR_11 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_5, (LPVOID*)&VAR_8);
    FUNC_8(VAR_11 == VAR_7, "CoCreateInstance failed with %08x\n", VAR_11);
    if (!VAR_8) goto out;

    VAR_11 = FUNC_1(VAR_8, &VAR_6, (LPVOID*)&VAR_9);
    FUNC_8(VAR_11 == VAR_7, "IFilterGraph2_QueryInterface failed with %08x\n", VAR_11);
    if (!VAR_9) goto out;

    VAR_12 = FUNC_7((IUnknown*)VAR_8);
    FUNC_8(VAR_12 == 2, "unexpected reference count: %u\n", VAR_12);
    VAR_12 = FUNC_7((IUnknown*)VAR_9);
    FUNC_8(VAR_12 == 2, "unexpected reference count: %u\n", VAR_12);

    FUNC_4(VAR_9);
    VAR_12 = FUNC_7((IUnknown*)VAR_8);
    FUNC_8(VAR_12 == 3, "unexpected reference count: %u\n", VAR_12);
    VAR_12 = FUNC_7((IUnknown*)VAR_9);
    FUNC_8(VAR_12 == 3, "unexpected reference count: %u\n", VAR_12);
    FUNC_6(VAR_9);

    VAR_11 = FUNC_5(VAR_9, &VAR_4, (LPVOID*)&VAR_10);
    FUNC_8(VAR_11 == VAR_7, "IFilterMapper2_QueryInterface failed with %08x\n", VAR_11);
    if (!VAR_10) goto out;

    FUNC_6(VAR_9);
    VAR_9 = ((void*)0);
    FUNC_3(VAR_10);
    VAR_10 = ((void*)0);

    VAR_11 = FUNC_0(&VAR_2, ((void*)0), VAR_0, &VAR_6, (LPVOID*)&VAR_9);
    FUNC_8(VAR_11 == VAR_7, "CoCreateInstance failed with %08x\n", VAR_11);
    if (!VAR_9) goto out;

    VAR_11 = FUNC_5(VAR_9, &VAR_4, (LPVOID*)&VAR_10);
    FUNC_8(VAR_11 == VAR_3, "IFilterMapper2_QueryInterface unexpected result: %08x\n", VAR_11);

    out:

    if (VAR_9) FUNC_6(VAR_9);
    if (VAR_10) FUNC_3(VAR_10);
    if (VAR_8) FUNC_2(VAR_8);
}

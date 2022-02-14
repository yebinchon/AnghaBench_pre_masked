
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int IUnknown ;
typedef int IEnumPins ;
typedef int IBaseFilter ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,void**) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int FUNC_8 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_9(void)
{
    IBaseFilter *VAR_6;
    IEnumPins *VAR_7, *VAR_8;
    IUnknown *VAR_9;
    ULONG VAR_10;
    HRESULT VAR_11;

    VAR_11 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_2,
            (void**)&VAR_6);
    FUNC_8(VAR_11 == VAR_5, "SampleGrabber create failed: %08x, expected S_OK\n", VAR_11);
    VAR_11 = FUNC_1(VAR_6, &VAR_7);
    FUNC_8(VAR_11 == VAR_5, "EnumPins create failed: %08x, expected S_OK\n", VAR_11);


    VAR_10 = FUNC_3(VAR_7);
    FUNC_8(VAR_10 == 2, "refcount == %u, expected 2\n", VAR_10);
    VAR_11 = FUNC_4(VAR_7, &VAR_3, (void**)&VAR_8);
    FUNC_8(VAR_11 == VAR_5, "QueryInterface for IID_IEnumPins failed: %08x\n", VAR_11);
    FUNC_8(VAR_7 == VAR_8, "QueryInterface for self failed (%p != %p)\n", *VAR_7, VAR_8);
    FUNC_5(VAR_8);

    VAR_11 = FUNC_4(VAR_7, &VAR_4, (void**)&VAR_9);
    FUNC_8(VAR_11 == VAR_5, "QueryInterface for IID_IUnknown failed: %08x\n", VAR_11);
    VAR_10 = FUNC_6(VAR_9);
    FUNC_8(VAR_10 == 4, "refcount == %u, expected 4\n", VAR_10);
    VAR_10 = FUNC_7(VAR_9);

    while (FUNC_5(VAR_7));
    FUNC_2(VAR_6);
}

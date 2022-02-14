
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int IUnknown ;
typedef int IAVIStream ;
typedef int IAVIEditStream ;
typedef int HRESULT ;


 int FUNC_0 (int **,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int FUNC_8 (int,char*,int) ;

__attribute__((used)) static void FUNC_9(void)
{
    IAVIEditStream *VAR_3;
    IAVIStream *VAR_4;
    IUnknown *VAR_5;
    ULONG VAR_6;
    HRESULT VAR_7;


    VAR_7 = FUNC_0(&VAR_4, ((void*)0));
    FUNC_8(VAR_7 == VAR_2, "AVIEditStream create failed: %08x, expected S_OK\n", VAR_7);
    VAR_6 = FUNC_4(VAR_4);
    FUNC_8(VAR_6 == 2, "refcount == %u, expected 2\n", VAR_6);

    VAR_7 = FUNC_5(VAR_4, &VAR_0, (void**)&VAR_3);
    FUNC_8(VAR_7 == VAR_2, "QueryInterface for IID_IAVIEditStream failed: %08x\n", VAR_7);
    VAR_6 = FUNC_1(VAR_3);
    FUNC_8(VAR_6 == 4, "refcount == %u, expected 4\n", VAR_6);
    VAR_6 = FUNC_3(VAR_3);

    VAR_7 = FUNC_2(VAR_3, &VAR_1, (void**)&VAR_5);
    FUNC_8(VAR_7 == VAR_2, "QueryInterface for IID_IUnknown failed: %08x\n", VAR_7);
    VAR_6 = FUNC_6(VAR_5);
    FUNC_8(VAR_6 == 5, "refcount == %u, expected 5\n", VAR_6);
    FUNC_7(VAR_5);

    while (FUNC_3(VAR_3));
}

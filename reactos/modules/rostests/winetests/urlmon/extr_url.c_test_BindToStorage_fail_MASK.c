
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IMoniker ;
typedef int IBindCtx ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int ,int **) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int *,int *,int *,void**) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (int *,int ,int *,int *,int **,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(void)
{
    IMoniker *VAR_7 = ((void*)0);
    IBindCtx *VAR_8 = ((void*)0);
    IUnknown *VAR_9;
    HRESULT VAR_10;

    VAR_10 = FUNC_0(((void*)0), VAR_6, &VAR_7);
    FUNC_5(VAR_10 == VAR_5, "CreateURLMoniker failed: %08x\n", VAR_10);
    if(FUNC_1(VAR_10))
        return;

    VAR_10 = FUNC_6(((void*)0), 0, ((void*)0), ((void*)0), &VAR_8, 0);
    FUNC_5(VAR_10 == VAR_5, "CreateAsyncBindCtxEx failed: %08x\n", VAR_10);

    VAR_9 = (void*)0xdeadbeef;
    VAR_10 = FUNC_3(VAR_7, VAR_8, ((void*)0), &VAR_1, (void**)&VAR_9);
    FUNC_5(VAR_10 == VAR_3 || VAR_10 == VAR_2,
       "hres=%08x, expected MK_E_SYNTAX or INET_E_DATA_NOT_AVAILABLE\n", VAR_10);
    FUNC_5(VAR_9 == ((void*)0), "got %p\n", VAR_9);

    FUNC_2(VAR_8);

    FUNC_4(VAR_7);

    FUNC_7(VAR_0);
    FUNC_7(VAR_4);
}

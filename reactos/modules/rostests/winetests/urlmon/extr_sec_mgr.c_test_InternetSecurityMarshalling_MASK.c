
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IStream ;
typedef int IInternetSecurityManager ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int *,int *,int ,int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int **) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_9 (int *,int **,int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    IInternetSecurityManager *VAR_7 = ((void*)0);
    IUnknown *VAR_8;
    IStream *VAR_9;
    HRESULT VAR_10;

    FUNC_10("testing marshalling...\n");

    VAR_10 = FUNC_9(((void*)0), &VAR_7, 0);
    FUNC_8(VAR_10 == VAR_5, "CoInternetCreateSecurityManager failed: %08x\n", VAR_10);
    if(FUNC_2(VAR_10))
        return;

    VAR_10 = FUNC_3(VAR_7, &VAR_1, (void**)&VAR_8);
    FUNC_8(VAR_10 == VAR_5, "QueryInterface returned: %08x\n", VAR_10);

    VAR_10 = FUNC_1(((void*)0), VAR_6, &VAR_9);
    FUNC_8(VAR_10 == VAR_5, "CreateStreamOnHGlobal returned: %08x\n", VAR_10);

    VAR_10 = FUNC_0(VAR_9, &VAR_0, VAR_8, VAR_2, ((void*)0), VAR_3);

    FUNC_8(VAR_10 == VAR_5 || FUNC_7(VAR_10 == VAR_4),
        "CoMarshalInterface returned: %08x\n", VAR_10);

    FUNC_5(VAR_9);
    FUNC_6(VAR_8);
    FUNC_4(VAR_7);
}

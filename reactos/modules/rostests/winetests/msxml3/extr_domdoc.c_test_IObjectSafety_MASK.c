
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IXMLDOMDocument ;
typedef int IObjectSafety ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_4 ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int,char*,scalar_t__) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(void)
{
    IXMLDOMDocument *VAR_5;
    IObjectSafety *VAR_6;
    HRESULT VAR_7;

    VAR_5 = FUNC_4(&VAR_3);

    VAR_7 = FUNC_2(VAR_5, &VAR_2, (void**)&VAR_6);
    FUNC_5(VAR_7 == VAR_4, "ret %08x\n", VAR_7 );

    FUNC_6(VAR_6);

    FUNC_1(VAR_6);
    FUNC_3(VAR_5);

    VAR_7 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
        &VAR_2, (void**)&VAR_6);
    FUNC_5(VAR_7 == VAR_4, "Could not create XMLHTTPRequest instance: %08x\n", VAR_7);

    FUNC_6(VAR_6);

    FUNC_1(VAR_6);

}

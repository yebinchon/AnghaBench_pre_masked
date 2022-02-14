
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IActiveScriptProperty ;
typedef int IActiveScriptParse ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int *,int *,int *,int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 () ;

__attribute__((used)) static BOOL FUNC_7(void)
{
    IActiveScriptProperty *VAR_3;
    IActiveScriptParse *VAR_4;
    BSTR VAR_5;
    HRESULT VAR_6;

    VAR_4 = FUNC_6();
    if(!VAR_4)
        return VAR_0;

    VAR_5 = FUNC_5("if(!('localeCompare' in String.prototype)) throw 1;");
    VAR_6 = FUNC_0(VAR_4, VAR_5, ((void*)0), ((void*)0), ((void*)0), 0, 0, 0, ((void*)0), ((void*)0));
    FUNC_4(VAR_5);

    if(VAR_6 == VAR_2)
        VAR_6 = FUNC_1(VAR_4, &VAR_1, (void**)&VAR_3);
    FUNC_2(VAR_4);
    if(VAR_6 == VAR_2)
        FUNC_3(VAR_3);

    return VAR_6 == VAR_2;
}

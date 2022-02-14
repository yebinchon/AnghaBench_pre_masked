
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IActiveScriptProperty ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int,int *,void**) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_6(void)
{
    IActiveScriptProperty *VAR_6;
    BSTR VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_0(&VAR_2, ((void*)0), VAR_1|VAR_0,
            &VAR_4, (void**)&VAR_6);
    if(FUNC_1(VAR_8))
        return VAR_3;
    FUNC_2(VAR_6);

    VAR_7 = FUNC_4("if(!('localeCompare' in String.prototype)) throw 1;");
    VAR_8 = FUNC_5(0, VAR_7);
    FUNC_3(VAR_7);

    return VAR_8 == VAR_5;
}

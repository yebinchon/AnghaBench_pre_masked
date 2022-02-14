
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IActiveScriptParse ;
typedef int HRESULT ;
typedef int BSTR ;


 int FUNC_0 (int *,int ,int *,int *,int *,int ,int ,int ,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static HRESULT FUNC_3(IActiveScriptParse *VAR_0, const char *VAR_1)
{
    BSTR VAR_2;
    HRESULT VAR_3;

    VAR_2 = FUNC_2(VAR_1);
    VAR_3 = FUNC_0(VAR_0, VAR_2, ((void*)0), ((void*)0), ((void*)0), 0, 0, 0, ((void*)0), ((void*)0));
    FUNC_1(VAR_2);

    return VAR_3;
}

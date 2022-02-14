
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REFIID ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_4 ;
 int FUNC_2 (char*,void**,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static HRESULT FUNC_4(REFIID VAR_7, void **VAR_8)
{
    if(FUNC_1(VAR_7, &VAR_3)) {
        FUNC_2("(IID_IUnknown %p)\n", VAR_8);
        *VAR_8 = &VAR_5;
    }else if(FUNC_1(VAR_7, &VAR_1)) {
        FUNC_2("(IID_IActiveScriptSite %p)\n", VAR_8);
        *VAR_8 = &VAR_5;
    }else if(FUNC_1(VAR_7, &VAR_2)) {
        FUNC_2("(IID_IActiveScriptSiteWindow %p)\n", VAR_8);
        *VAR_8 = &VAR_6;
    }else {
        *VAR_8 = ((void*)0);
        FUNC_2("(%s %p)\n", FUNC_3(VAR_7), VAR_8);
        return VAR_0;
    }

    FUNC_0((IUnknown*)*VAR_8);
    return VAR_4;
}

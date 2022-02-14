
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IActiveScriptParse ;
typedef int IActiveScript ;
typedef int HRESULT ;
typedef int CLSID ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int,int *,void**) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;

__attribute__((used)) static BOOL FUNC_6(CLSID *VAR_7, IActiveScript **VAR_8,
        IActiveScriptParse **VAR_9)
{
    IActiveScript *VAR_10;
    IUnknown *VAR_11;
    HRESULT VAR_12;

    VAR_12 = FUNC_0(VAR_7, ((void*)0), VAR_1|VAR_0,
            &VAR_5, (void**)&VAR_11);
    if(FUNC_1(VAR_12))
        return VAR_2;

    VAR_12 = FUNC_4(VAR_11, &VAR_3, (void**)&VAR_10);
    FUNC_5(VAR_11);
    if(FUNC_1(VAR_12))
        return VAR_2;

    VAR_12 = FUNC_2(VAR_10, &VAR_4, (void**)VAR_9);
    if(FUNC_1(VAR_12)) {
        FUNC_3(VAR_10);
        return VAR_2;
    }

    *VAR_8 = VAR_10;
    return VAR_6;
}

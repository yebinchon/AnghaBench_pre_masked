
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IRegExp2 ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int,int *,void**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_6(void)
{
    IRegExp2 *VAR_8;
    IUnknown *VAR_9;
    HRESULT VAR_10;

    VAR_10 = FUNC_0(&VAR_2, ((void*)0),
            VAR_1|VAR_0,
            &VAR_5, (void**)&VAR_9);
    if(VAR_10 == VAR_6)
        return VAR_3;
    FUNC_5(VAR_10 == VAR_7, "CoCreateInstance(CLSID_VBScriptRegExp) failed: %x\n", VAR_10);

    VAR_10 = FUNC_2(VAR_9, &VAR_4, (void**)&VAR_8);
    if(FUNC_4(VAR_10))
        FUNC_1(VAR_8);
    FUNC_3(VAR_9);

    return VAR_10 == VAR_7;
}

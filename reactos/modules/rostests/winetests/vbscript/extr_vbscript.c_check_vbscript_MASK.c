
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IActiveScriptParseProcedure2 ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int,int *,void**) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static BOOL FUNC_3(void)
{
    IActiveScriptParseProcedure2 *VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_0(&VAR_2, ((void*)0), VAR_1|VAR_0,
            &VAR_3, (void**)&VAR_5);
    if(FUNC_2(VAR_6))
        FUNC_1(VAR_5);

    return VAR_6 == VAR_4;
}

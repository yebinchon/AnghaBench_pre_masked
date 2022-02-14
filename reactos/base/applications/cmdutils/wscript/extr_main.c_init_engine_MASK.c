
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IActiveScriptParse ;
typedef int IActiveScript ;
typedef int HRESULT ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static BOOL FUNC_7(IActiveScript *VAR_6, IActiveScriptParse *VAR_7)
{
    HRESULT VAR_8;

    if(!FUNC_6())
        return VAR_0;

    VAR_8 = FUNC_3(VAR_6, &VAR_3);
    if(FUNC_0(VAR_8))
        return VAR_0;

    VAR_8 = FUNC_1(VAR_7);
    if(FUNC_0(VAR_8))
        return VAR_0;

    VAR_8 = FUNC_2(VAR_6, VAR_4, VAR_1);
    if(FUNC_0(VAR_8))
        return VAR_0;

    VAR_8 = FUNC_2(VAR_6, VAR_5, VAR_1);
    if(FUNC_0(VAR_8))
        return VAR_0;

    VAR_8 = FUNC_4(VAR_6, VAR_2);
    return FUNC_5(VAR_8);
}

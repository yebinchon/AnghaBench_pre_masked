
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IWbemPath ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static IWbemPath *FUNC_2(void)
{
    HRESULT VAR_4;
    IWbemPath *VAR_5;

    VAR_4 = FUNC_0( &VAR_1, ((void*)0), VAR_0, &VAR_2, (void **)&VAR_5 );
    if (VAR_4 != VAR_3)
    {
        FUNC_1( "can't create WbemDefPath instance, skipping tests\n" );
        return ((void*)0);
    }
    return VAR_5;
}

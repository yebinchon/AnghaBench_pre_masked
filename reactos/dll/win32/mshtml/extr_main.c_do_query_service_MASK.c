
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REFIID ;
typedef int REFGUID ;
typedef int IUnknown ;
typedef int IServiceProvider ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ,void**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,void**) ;

HRESULT FUNC_4(IUnknown *VAR_1, REFGUID VAR_2, REFIID VAR_3, void **VAR_4)
{
    IServiceProvider *VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_3(VAR_1, &VAR_0, (void**)&VAR_5);
    if(FUNC_0(VAR_6))
        return VAR_6;

    VAR_6 = FUNC_1(VAR_5, VAR_2, VAR_3, VAR_4);
    FUNC_2(VAR_5);
    return VAR_6;
}

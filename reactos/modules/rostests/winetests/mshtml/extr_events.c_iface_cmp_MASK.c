
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_2(IUnknown *VAR_2, IUnknown *VAR_3)
{
    IUnknown *VAR_4, *VAR_5;

    if(VAR_2 == VAR_3)
        return VAR_1;

    FUNC_0(VAR_2, &VAR_0, (void**)&VAR_4);
    FUNC_1(VAR_4);
    FUNC_0(VAR_2, &VAR_0, (void**)&VAR_5);
    FUNC_1(VAR_5);

    return VAR_4 == VAR_5;
}

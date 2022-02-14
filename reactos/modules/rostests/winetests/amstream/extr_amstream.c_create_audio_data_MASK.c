
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,char*,scalar_t__) ;

__attribute__((used)) static IUnknown *FUNC_2(void)
{
    IUnknown *VAR_4 = ((void*)0);
    HRESULT VAR_5 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
            &VAR_2, (void **)&VAR_4);
    FUNC_1(VAR_3 == VAR_5, "got 0x%08x\n", VAR_5);
    return VAR_4;
}

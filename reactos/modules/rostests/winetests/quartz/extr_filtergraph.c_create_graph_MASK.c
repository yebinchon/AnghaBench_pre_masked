
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IFilterGraph2 ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,char*,scalar_t__) ;

__attribute__((used)) static IFilterGraph2 *FUNC_2(void)
{
    IFilterGraph2 *VAR_4;
    HRESULT VAR_5;
    VAR_5 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_2, (void **)&VAR_4);
    FUNC_1(VAR_5 == VAR_3, "Failed to create FilterGraph: %#x\n", VAR_5);
    return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int,int *,void**) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,char*,scalar_t__) ;

__attribute__((used)) static IActiveScript *FUNC_2(void)
{
    IActiveScript *VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_0(&VAR_2, ((void*)0), VAR_1|VAR_0,
            &VAR_3, (void**)&VAR_5);
    FUNC_1(VAR_6 == VAR_4, "CoCreateInstance failed: %08x\n", VAR_6);

    return VAR_5;
}

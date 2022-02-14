
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 int FUNC_0 (scalar_t__ const**) ;

__attribute__((used)) static BOOL FUNC_1(void *VAR_3, const DWORD **VAR_4)
{
    FUNC_0(VAR_4);

    if (**VAR_4 == VAR_2)
    {
        ++(*VAR_4);
        return VAR_1;
    }

    return VAR_0;
}

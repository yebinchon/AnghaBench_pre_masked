
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int open_delegation4 ;
typedef int enum_t ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int*) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_2,
    open_delegation4 *VAR_3)
{
    enum_t VAR_4;
    bool_t VAR_5;

    if (!FUNC_1(VAR_2, (enum_t*)&VAR_4))
        return VAR_0;

    switch (VAR_4)
    {
    case 129:
    case 128:
        return FUNC_0(VAR_2, &VAR_5);
    default:
        return VAR_1;
    }
}

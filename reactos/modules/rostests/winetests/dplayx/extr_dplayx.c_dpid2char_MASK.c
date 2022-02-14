
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;
typedef size_t DWORD ;
typedef scalar_t__ DPID ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static char FUNC_0(DPID* VAR_1, DWORD VAR_2, DPID VAR_3)
{
    UINT VAR_4;
    if ( VAR_3 == VAR_0 )
        return 'S';
    for (VAR_4=0; VAR_4<VAR_2; VAR_4++)
    {
        if ( VAR_3 == VAR_1[VAR_4] )
            return (char)(VAR_4+48);
    }
    return '?';
}

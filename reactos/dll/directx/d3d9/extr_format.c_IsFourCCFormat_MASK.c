
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int D3DFORMAT ;
typedef int CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

BOOL FUNC_1(D3DFORMAT VAR_2)
{
    CHAR* VAR_3 = (CHAR*)&VAR_2;
    if (FUNC_0(VAR_3[0]) &&
        FUNC_0(VAR_3[1]) &&
        FUNC_0(VAR_3[2]) &&
        FUNC_0(VAR_3[3]))
    {
        return VAR_1;
    }

    return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int Guid; } ;
typedef int LPCWSTR ;
typedef TYPE_1__ DIRECTPLAY_GUID ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

UINT
FUNC_1(LPCWSTR VAR_1, DIRECTPLAY_GUID * VAR_2)
{
    UINT VAR_3;
    for(VAR_3 = 0; VAR_3 < 4; VAR_3++)
    {
        if (!FUNC_0(VAR_2[VAR_3].Guid, VAR_1, 40))
            return VAR_3;
    }
    return VAR_0;
}

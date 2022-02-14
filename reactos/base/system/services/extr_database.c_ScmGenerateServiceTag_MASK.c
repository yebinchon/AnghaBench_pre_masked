
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwServiceType; } ;
struct TYPE_5__ {int dwTag; TYPE_1__ Status; } ;
typedef TYPE_2__* PSERVICE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

DWORD
FUNC_0(PSERVICE VAR_5)
{

    if (VAR_4 == -1)
    {
        return VAR_0;
    }


    if (!(VAR_5->Status.dwServiceType & VAR_3))
    {
        return VAR_1;
    }


    VAR_4 = VAR_4 % 0xFFFFFFFF + 1;
    VAR_5->dwTag = VAR_4;

    return VAR_2;
}

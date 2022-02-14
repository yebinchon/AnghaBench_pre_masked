
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int UserBuffer; int * MdlAddress; } ;
typedef int PVOID ;
typedef TYPE_1__* PIRP ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;

PVOID
FUNC_1(PIRP VAR_2,
                  BOOLEAN VAR_3)
{
    if (VAR_2->MdlAddress != ((void*)0))
    {
        return FUNC_0(VAR_2->MdlAddress, (VAR_3 ? VAR_0 : VAR_1));
    }
    else
    {
        return VAR_2->UserBuffer;
    }
}

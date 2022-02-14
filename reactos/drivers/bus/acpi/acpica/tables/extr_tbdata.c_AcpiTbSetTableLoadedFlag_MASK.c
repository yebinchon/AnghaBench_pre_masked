
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_4__ {size_t CurrentTableCount; TYPE_1__* Tables; } ;
struct TYPE_3__ {int Flags; } ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2 (
    UINT32 VAR_3,
    BOOLEAN VAR_4)
{

    (void) FUNC_0 (VAR_0);
    if (VAR_3 < VAR_2.CurrentTableCount)
    {
        if (VAR_4)
        {
            VAR_2.Tables[VAR_3].Flags |=
                VAR_1;
        }
        else
        {
            VAR_2.Tables[VAR_3].Flags &=
                ~VAR_1;
        }
    }

    (void) FUNC_1 (VAR_0);
}

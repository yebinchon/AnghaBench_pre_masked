
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
 scalar_t__ VAR_3 ;

BOOLEAN
FUNC_2 (
    UINT32 VAR_4)
{
    BOOLEAN VAR_5 = VAR_3;


    (void) FUNC_0 (VAR_0);
    if (VAR_4 < VAR_2.CurrentTableCount)
    {
        VAR_5 = (BOOLEAN)
            (VAR_2.Tables[VAR_4].Flags &
            VAR_1);
    }

    (void) FUNC_1 (VAR_0);
    return (VAR_5);
}

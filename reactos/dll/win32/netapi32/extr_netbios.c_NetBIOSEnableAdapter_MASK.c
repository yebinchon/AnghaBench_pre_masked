
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UCHAR ;
struct TYPE_4__ {size_t tableSize; int cs; TYPE_1__* table; } ;
struct TYPE_3__ {scalar_t__ transport; int enabled; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,size_t) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

void FUNC_3(UCHAR VAR_2)
{
    FUNC_2(": %d\n", VAR_2);
    if (VAR_2 < VAR_1.tableSize)
    {
        FUNC_0(&VAR_1.cs);
        if (VAR_1.table[VAR_2].transport != 0)
            VAR_1.table[VAR_2].enabled = VAR_0;
        FUNC_1(&VAR_1.cs);
    }
}

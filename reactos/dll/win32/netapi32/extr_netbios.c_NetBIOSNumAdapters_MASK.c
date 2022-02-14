
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UCHAR ;
struct TYPE_4__ {size_t tableSize; TYPE_1__* table; int enumerated; } ;
struct TYPE_3__ {scalar_t__ transport; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 () ;

UCHAR FUNC_1(void)
{
    UCHAR VAR_1, VAR_2;

    if (!VAR_0.enumerated)
        FUNC_0();
    for (VAR_2 = 0, VAR_1 = 0; VAR_2 < VAR_0.tableSize; VAR_2++)
        if (VAR_0.table[VAR_2].transport != 0)
            VAR_1++;
    return VAR_1;
}

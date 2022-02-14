
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UCHAR ;
struct TYPE_8__ {size_t tableSize; int cs; int enumerated; TYPE_2__* table; } ;
struct TYPE_5__ {int (* enumerate ) () ;} ;
struct TYPE_7__ {TYPE_1__ transport; } ;
struct TYPE_6__ {scalar_t__ transport; scalar_t__ enabled; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 size_t VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void)
{
    UCHAR VAR_5;

    FUNC_0(&VAR_2.cs);
    FUNC_2("before mark\n");

    for (VAR_5 = 0; VAR_5 < VAR_2.tableSize; VAR_5++)
        if (VAR_2.table[VAR_5].enabled && VAR_2.table[VAR_5].transport != 0)
            VAR_2.table[VAR_5].enabled = VAR_0;

    FUNC_2("marked, before store, %d transports\n", VAR_3);

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
        if (VAR_4[VAR_5].transport.enumerate)
            VAR_4[VAR_5].transport.enumerate();

    FUNC_2("before sweep\n");

    for (VAR_5 = 0; VAR_5 < VAR_2.tableSize; VAR_5++)
        if (!VAR_2.table[VAR_5].enabled && VAR_2.table[VAR_5].transport != 0)
            FUNC_3(&VAR_2.table[VAR_5]);
    VAR_2.enumerated = VAR_1;
    FUNC_1(&VAR_2.cs);
}

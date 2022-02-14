
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* DebugInfo; } ;
struct handle_table {TYPE_2__ mutex; int paEntries; } ;
struct TYPE_3__ {scalar_t__* Spare; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,struct handle_table*) ;

void FUNC_4(struct handle_table *VAR_0)
{
    FUNC_3("(lpTable=%p)\n", VAR_0);

    FUNC_2(FUNC_1(), 0, VAR_0->paEntries);
    VAR_0->mutex.DebugInfo->Spare[0] = 0;
    FUNC_0(&VAR_0->mutex);
}

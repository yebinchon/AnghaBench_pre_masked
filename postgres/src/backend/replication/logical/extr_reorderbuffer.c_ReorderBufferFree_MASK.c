
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
struct TYPE_7__ {TYPE_1__ data; } ;
struct TYPE_6__ {int context; } ;
typedef TYPE_2__ ReorderBuffer ;
typedef int MemoryContext ;


 int FUNC_0 (int ) ;
 TYPE_4__* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(ReorderBuffer *VAR_1)
{
 MemoryContext VAR_2 = VAR_1->context;





 FUNC_0(VAR_2);


 FUNC_2(FUNC_1(VAR_0->data.name));
}

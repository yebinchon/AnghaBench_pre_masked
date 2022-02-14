
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* methods; } ;
struct TYPE_6__ {int (* free_p ) (TYPE_2__*,void*) ;} ;
typedef TYPE_2__* MemoryContext ;


 TYPE_2__* FUNC_0 (void*) ;
 int FUNC_1 (TYPE_2__*,void*) ;
 int FUNC_2 (TYPE_2__*,void*) ;

void
FUNC_3(void *VAR_0)
{
 MemoryContext VAR_1 = FUNC_0(VAR_0);

 VAR_1->methods->free_p(VAR_1, VAR_0);
 FUNC_1(VAR_1, VAR_0);
}

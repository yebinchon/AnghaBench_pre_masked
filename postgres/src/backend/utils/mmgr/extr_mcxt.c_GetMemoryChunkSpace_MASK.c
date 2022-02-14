
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* methods; } ;
struct TYPE_5__ {int (* get_chunk_space ) (TYPE_2__*,void*) ;} ;
typedef int Size ;
typedef TYPE_2__* MemoryContext ;


 TYPE_2__* FUNC_0 (void*) ;
 int FUNC_1 (TYPE_2__*,void*) ;

Size
FUNC_2(void *VAR_0)
{
 MemoryContext VAR_1 = FUNC_0(VAR_0);

 return VAR_1->methods->get_chunk_space(VAR_1, VAR_0);
}

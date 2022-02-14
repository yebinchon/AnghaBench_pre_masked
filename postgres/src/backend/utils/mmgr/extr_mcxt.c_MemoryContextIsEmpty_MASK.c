
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* methods; int * firstchild; } ;
struct TYPE_6__ {int (* is_empty ) (TYPE_2__*) ;} ;
typedef TYPE_2__* MemoryContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

bool
FUNC_3(MemoryContext VAR_0)
{
 FUNC_0(FUNC_1(VAR_0));





 if (VAR_0->firstchild != ((void*)0))
  return 0;

 return VAR_0->methods->is_empty(VAR_0);
}

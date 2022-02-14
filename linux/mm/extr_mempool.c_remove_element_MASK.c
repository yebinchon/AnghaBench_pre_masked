
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t curr_nr; void** elements; } ;
typedef TYPE_1__ mempool_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (TYPE_1__*,void*) ;

__attribute__((used)) static void *FUNC_3(mempool_t *VAR_0)
{
 void *VAR_1 = VAR_0->elements[--VAR_0->curr_nr];

 FUNC_0(VAR_0->curr_nr < 0);
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_1);
 return VAR_1;
}

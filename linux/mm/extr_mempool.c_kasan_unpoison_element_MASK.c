
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ alloc; scalar_t__ pool_data; } ;
typedef TYPE_1__ mempool_t ;


 int FUNC_0 (void*,unsigned long) ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_2(mempool_t *VAR_3, void *VAR_4)
{
 if (VAR_3->alloc == VAR_1 || VAR_3->alloc == VAR_2)
  FUNC_1(VAR_4);
 if (VAR_3->alloc == VAR_0)
  FUNC_0(VAR_4, (unsigned long)VAR_3->pool_data);
}

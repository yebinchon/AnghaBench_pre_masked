
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stack; scalar_t__ visited; } ;
typedef TYPE_1__ zend_worklist ;
typedef int zend_ulong ;
typedef scalar_t__ zend_bitset ;
typedef int zend_arena ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int **,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int **,int *,int) ;

__attribute__((used)) static inline int FUNC_4(zend_arena **VAR_0, zend_worklist *VAR_1, int VAR_2)
{
 FUNC_0(VAR_2 >= 0);
 VAR_1->visited = (zend_bitset)FUNC_1(VAR_0, sizeof(zend_ulong), FUNC_2(VAR_2));
 return FUNC_3(VAR_0, &VAR_1->stack, VAR_2);
}

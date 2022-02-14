
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ magic; int * plancache_list; } ;
typedef TYPE_1__* SPIPlanPtr ;
typedef int List ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

List *
FUNC_1(SPIPlanPtr VAR_1)
{
 FUNC_0(VAR_1->magic == VAR_0);
 return VAR_1->plancache_list;
}

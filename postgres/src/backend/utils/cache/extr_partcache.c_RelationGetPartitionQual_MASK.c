
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* rd_rel; } ;
struct TYPE_5__ {int relispartition; } ;
typedef TYPE_2__* Relation ;
typedef int List ;


 int * VAR_0 ;
 int * FUNC_0 (TYPE_2__*) ;

List *
FUNC_1(Relation VAR_1)
{

 if (!VAR_1->rd_rel->relispartition)
  return VAR_0;

 return FUNC_0(VAR_1);
}

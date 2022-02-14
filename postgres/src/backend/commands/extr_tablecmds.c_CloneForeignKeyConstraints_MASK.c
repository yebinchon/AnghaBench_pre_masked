
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* rd_rel; } ;
struct TYPE_9__ {scalar_t__ relkind; } ;
typedef TYPE_2__* Relation ;
typedef int List ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (int **,TYPE_2__*,TYPE_2__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_3(List **VAR_1, Relation VAR_2,
         Relation VAR_3)
{

 FUNC_0(VAR_2->rd_rel->relkind == VAR_0);




 FUNC_1(VAR_2, VAR_3);




 FUNC_2(VAR_1, VAR_2, VAR_3);
}

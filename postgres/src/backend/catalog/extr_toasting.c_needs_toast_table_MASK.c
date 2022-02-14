
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* rd_rel; } ;
struct TYPE_6__ {scalar_t__ relkind; scalar_t__ relisshared; } ;
typedef TYPE_2__* Relation ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_3(Relation VAR_1)
{



 if (VAR_1->rd_rel->relkind == VAR_0)
  return 0;





 if (VAR_1->rd_rel->relisshared && !FUNC_0())
  return 0;







 if (FUNC_1(VAR_1) && !FUNC_0())
  return 0;


 return FUNC_2(VAR_1);
}

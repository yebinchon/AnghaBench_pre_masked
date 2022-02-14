
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int xact; } ;
struct TYPE_5__ {TYPE_1__ btpo; } ;
typedef int Page ;
typedef TYPE_2__* BTPageOpaque ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ,int ) ;

bool
FUNC_4(Page VAR_1)
{
 BTPageOpaque VAR_2;







 if (FUNC_2(VAR_1))
  return 1;





 VAR_2 = (BTPageOpaque) FUNC_1(VAR_1);
 if (FUNC_0(VAR_2) &&
  FUNC_3(VAR_2->btpo.xact, VAR_0))
  return 1;
 return 0;
}

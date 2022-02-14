
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pd_lower; } ;
typedef TYPE_1__* PageHeader ;
typedef int Page ;
typedef int BlockNumber ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(char *VAR_1, BlockNumber VAR_2)
{
 Page VAR_3 = (Page) VAR_1;
 PageHeader VAR_4 = (PageHeader) VAR_3;

 FUNC_3(VAR_3);

 FUNC_2(VAR_3);






 if (FUNC_1(VAR_3) ||
  (FUNC_0(VAR_3) && VAR_4->pd_lower > VAR_0))
 {
  FUNC_4(VAR_3);
 }
}

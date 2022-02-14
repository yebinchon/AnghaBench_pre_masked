
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {scalar_t__ pd_lower; } ;
typedef TYPE_1__* PageHeader ;
typedef int Page ;
typedef TYPE_2__* GinPageOpaque ;
typedef int BlockNumber ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(char *VAR_2, BlockNumber VAR_3)
{
 Page VAR_4 = (Page) VAR_2;
 PageHeader VAR_5 = (PageHeader) VAR_4;
 GinPageOpaque VAR_6;

 FUNC_3(VAR_4);
 VAR_6 = FUNC_0(VAR_4);

 FUNC_2(VAR_4);






 if (VAR_6->flags & VAR_0)
  FUNC_1(VAR_4);
 else if (VAR_5->pd_lower > VAR_1)
  FUNC_4(VAR_4);
}

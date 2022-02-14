
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int maxoff; } ;
typedef int Page ;
typedef scalar_t__ ItemPointer ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static ItemPointer
FUNC_4(Page VAR_0, int *VAR_1)
{
 ItemPointer VAR_2;

 FUNC_0(!FUNC_3(VAR_0));





 VAR_2 = (ItemPointer) FUNC_1(VAR_0);
 *VAR_1 = FUNC_2(VAR_0)->maxoff;

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sqlind; } ;
typedef TYPE_1__ XSQLVAR ;
struct TYPE_5__ {int sqld; TYPE_1__* sqlvar; } ;
typedef TYPE_2__ XSQLDA ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(XSQLDA const *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->sqld; ++VAR_1) {
  XSQLVAR const *VAR_2 = &VAR_0->sqlvar[VAR_1];

  if (VAR_2->sqlind) {
   FUNC_0(VAR_2->sqlind);
  }
 }
}

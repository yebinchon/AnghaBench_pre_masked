
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_5__ {scalar_t__ state; } ;
typedef TYPE_1__ SnapBuild ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

void
FUNC_2(SnapBuild *VAR_1, XLogRecPtr VAR_2)
{
 if (VAR_1->state < VAR_0)
  FUNC_0(VAR_1, VAR_2);
 else
  FUNC_1(VAR_1, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {int sign; } ;
typedef TYPE_1__ QTNode ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;

bool
FUNC_1(QTNode *VAR_0, QTNode *VAR_1)
{
 uint32 VAR_2 = VAR_0->sign & VAR_1->sign;

 if (!(VAR_2 == VAR_0->sign && VAR_2 == VAR_1->sign))
  return 0;

 return (FUNC_0(VAR_0, VAR_1) == 0) ? 1 : 0;
}

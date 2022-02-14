
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int decoder; void* needInitProp; void* needInitState; void* needInitDic; int state; } ;
typedef TYPE_1__ CLzma2Dec ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 void* VAR_1 ;

void FUNC_1(CLzma2Dec *VAR_2)
{
  VAR_2->state = VAR_0;
  VAR_2->needInitDic = VAR_1;
  VAR_2->needInitState = VAR_1;
  VAR_2->needInitProp = VAR_1;
  FUNC_0(&VAR_2->decoder);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bufSizeMax; scalar_t__ malloc; struct TYPE_5__* buf; } ;
typedef TYPE_1__ SReadlineInfo ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void
FUNC_2(SReadlineInfo *VAR_0)
{
 FUNC_1(VAR_0->buf, 0, VAR_0->bufSizeMax);
 if (VAR_0->malloc != 0)
  FUNC_0(VAR_0->buf);
 FUNC_1(VAR_0, 0, sizeof(SReadlineInfo));


}

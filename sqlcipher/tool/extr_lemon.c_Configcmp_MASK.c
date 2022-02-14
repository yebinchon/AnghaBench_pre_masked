
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config {int dot; TYPE_1__* rp; } ;
struct TYPE_2__ {int index; } ;



int FUNC_0(const char *VAR_0,const char *VAR_1)
{
  const struct config *VAR_2 = (struct config *) VAR_0;
  const struct config *VAR_3 = (struct config *) VAR_1;
  int VAR_4;
  VAR_4 = VAR_2->rp->index - VAR_3->rp->index;
  if( VAR_4==0 ) VAR_4 = VAR_2->dot - VAR_3->dot;
  return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config {int dot; TYPE_1__* rp; struct config* bp; } ;
struct TYPE_2__ {int index; } ;



int FUNC_0(struct config *VAR_0, struct config *VAR_1)
{
  int VAR_2;
  for(VAR_2=0; VAR_2==0 && VAR_0 && VAR_1; VAR_0=VAR_0->bp, VAR_1=VAR_1->bp){
    VAR_2 = VAR_0->rp->index - VAR_1->rp->index;
    if( VAR_2==0 ) VAR_2 = VAR_0->dot - VAR_1->dot;
  }
  if( VAR_2==0 ){
    if( VAR_0 ) VAR_2 = 1;
    if( VAR_1 ) VAR_2 = -1;
  }
  return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config {unsigned int dot; struct config* bp; TYPE_1__* rp; } ;
struct TYPE_2__ {int index; } ;



unsigned FUNC_0(struct config *VAR_0)
{
  unsigned VAR_1=0;
  while( VAR_0 ){
    VAR_1 = VAR_1*571 + VAR_0->rp->index*37 + VAR_0->dot;
    VAR_0 = VAR_0->bp;
  }
  return VAR_1;
}

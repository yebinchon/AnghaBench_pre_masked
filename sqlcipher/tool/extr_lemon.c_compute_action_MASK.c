
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lemon {int minReduce; int minShiftReduce; int errAction; int accAction; int nterminal; } ;
struct TYPE_8__ {TYPE_3__* rp; TYPE_1__* stp; } ;
struct action {int type; TYPE_4__ x; TYPE_2__* sp; } ;
struct TYPE_7__ {int iRule; } ;
struct TYPE_6__ {int index; } ;
struct TYPE_5__ {int statenum; } ;
int FUNC_0(struct lemon *VAR_0, struct action *VAR_1)
{
  int VAR_2;
  switch( VAR_1->type ){
    case 129: VAR_2 = VAR_1->x.stp->statenum; break;
    case 128: {



      if( VAR_1->sp->index>=VAR_0->nterminal ){
        VAR_2 = VAR_0->minReduce + VAR_1->x.rp->iRule;
      }else{
        VAR_2 = VAR_0->minShiftReduce + VAR_1->x.rp->iRule;
      }
      break;
    }
    case 130: VAR_2 = VAR_0->minReduce + VAR_1->x.rp->iRule; break;
    case 131: VAR_2 = VAR_0->errAction; break;
    case 132: VAR_2 = VAR_0->accAction; break;
    default: VAR_2 = -1; break;
  }
  return VAR_2;
}

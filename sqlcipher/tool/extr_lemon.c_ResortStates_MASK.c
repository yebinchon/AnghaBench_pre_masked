
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct state {int iDfltReduce; scalar_t__ autoReduce; scalar_t__ pDfltReduce; int statenum; scalar_t__ nNtAct; scalar_t__ nTknAct; struct action* ap; void* iNtOfst; void* iTknOfst; } ;
struct lemon {int nstate; scalar_t__ nterminal; scalar_t__ nsymbol; int nxstate; struct state** sorted; } ;
struct TYPE_4__ {scalar_t__ rp; } ;
struct action {TYPE_2__ x; TYPE_1__* sp; struct action* next; } ;
struct TYPE_3__ {scalar_t__ index; } ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct lemon*,struct action*) ;
 int FUNC_2 (struct state**,int,int,int ) ;
 int VAR_1 ;

void FUNC_3(struct lemon *VAR_2)
{
  int VAR_3;
  struct state *VAR_4;
  struct action *VAR_5;

  for(VAR_3=0; VAR_3<VAR_2->nstate; VAR_3++){
    VAR_4 = VAR_2->sorted[VAR_3];
    VAR_4->nTknAct = VAR_4->nNtAct = 0;
    VAR_4->iDfltReduce = -1;
    VAR_4->iTknOfst = VAR_0;
    VAR_4->iNtOfst = VAR_0;
    for(VAR_5=VAR_4->ap; VAR_5; VAR_5=VAR_5->next){
      int VAR_6 = FUNC_1(VAR_2,VAR_5);
      if( VAR_6>=0 ){
        if( VAR_5->sp->index<VAR_2->nterminal ){
          VAR_4->nTknAct++;
        }else if( VAR_5->sp->index<VAR_2->nsymbol ){
          VAR_4->nNtAct++;
        }else{
          FUNC_0( VAR_4->autoReduce==0 || VAR_4->pDfltReduce==VAR_5->x.rp );
          VAR_4->iDfltReduce = VAR_6;
        }
      }
    }
  }
  FUNC_2(&VAR_2->sorted[1], VAR_2->nstate-1, sizeof(VAR_2->sorted[0]),
        VAR_1);
  for(VAR_3=0; VAR_3<VAR_2->nstate; VAR_3++){
    VAR_2->sorted[VAR_3]->statenum = VAR_3;
  }
  VAR_2->nxstate = VAR_2->nstate;
  while( VAR_2->nxstate>1 && VAR_2->sorted[VAR_2->nxstate-1]->autoReduce ){
    VAR_2->nxstate--;
  }
}

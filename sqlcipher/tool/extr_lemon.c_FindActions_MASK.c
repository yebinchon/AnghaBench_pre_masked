
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct state {struct action* ap; struct config* cfp; } ;
struct rule {int ruleline; scalar_t__ canReduce; struct rule* next; } ;
struct lemon {int nstate; int nterminal; int errorcnt; int filename; struct rule* rule; struct state** sorted; int nconflict; TYPE_2__* startRule; scalar_t__ start; struct symbol** symbols; } ;
struct config {scalar_t__ dot; TYPE_1__* rp; int fws; struct config* next; } ;
struct TYPE_8__ {TYPE_3__* rp; } ;
struct action {scalar_t__ sp; scalar_t__ type; TYPE_4__ x; struct action* next; } ;
struct TYPE_7__ {int canReduce; } ;
struct TYPE_6__ {struct symbol* lhs; } ;
struct TYPE_5__ {scalar_t__ nrhs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct action**,scalar_t__,struct symbol*,char*) ;
 struct action* FUNC_1 (struct action*) ;
 int FUNC_2 (int ,int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ,int) ;
 struct symbol* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct action*,struct action*) ;

void FUNC_6(struct lemon *VAR_4)
{
  int VAR_5,VAR_6;
  struct config *VAR_7;
  struct state *VAR_8;
  struct symbol *VAR_9;
  struct rule *VAR_10;





  for(VAR_5=0; VAR_5<VAR_4->nstate; VAR_5++){
    VAR_8 = VAR_4->sorted[VAR_5];
    for(VAR_7=VAR_8->cfp; VAR_7; VAR_7=VAR_7->next){
      if( VAR_7->rp->nrhs==VAR_7->dot ){
        for(VAR_6=0; VAR_6<VAR_4->nterminal; VAR_6++){
          if( FUNC_3(VAR_7->fws,VAR_6) ){


            FUNC_0(&VAR_8->ap,VAR_3,VAR_4->symbols[VAR_6],(char *)VAR_7->rp);
          }
        }
      }
    }
  }


  if( VAR_4->start ){
    VAR_9 = FUNC_4(VAR_4->start);
    if( VAR_9==0 ) VAR_9 = VAR_4->startRule->lhs;
  }else{
    VAR_9 = VAR_4->startRule->lhs;
  }



  FUNC_0(&VAR_4->sorted[0]->ap,VAR_0,VAR_9,0);


  for(VAR_5=0; VAR_5<VAR_4->nstate; VAR_5++){
    struct action *VAR_11, *VAR_12;
    VAR_8 = VAR_4->sorted[VAR_5];

    VAR_8->ap = FUNC_1(VAR_8->ap);
    for(VAR_11=VAR_8->ap; VAR_11 && VAR_11->next; VAR_11=VAR_11->next){
      for(VAR_12=VAR_11->next; VAR_12 && VAR_12->sp==VAR_11->sp; VAR_12=VAR_12->next){


         VAR_4->nconflict += FUNC_5(VAR_11,VAR_12);
      }
    }
  }


  for(VAR_10=VAR_4->rule; VAR_10; VAR_10=VAR_10->next) VAR_10->canReduce = VAR_1;
  for(VAR_5=0; VAR_5<VAR_4->nstate; VAR_5++){
    struct action *VAR_13;
    for(VAR_13=VAR_4->sorted[VAR_5]->ap; VAR_13; VAR_13=VAR_13->next){
      if( VAR_13->type==VAR_3 ) VAR_13->x.rp->canReduce = VAR_2;
    }
  }
  for(VAR_10=VAR_4->rule; VAR_10; VAR_10=VAR_10->next){
    if( VAR_10->canReduce ) continue;
    FUNC_2(VAR_4->filename,VAR_10->ruleline,"This rule can not be reduced.\n");
    VAR_4->errorcnt++;
  }
}

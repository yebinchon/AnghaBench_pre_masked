
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symbol {scalar_t__ lambda; scalar_t__ type; int nsubsym; int firstset; TYPE_2__** subsym; int index; } ;
struct rule {int nrhs; struct symbol** rhs; struct symbol* lhs; struct rule* next; } ;
struct lemon {int nsymbol; int nterminal; struct rule* rule; TYPE_1__** symbols; } ;
struct TYPE_4__ {int index; } ;
struct TYPE_3__ {int firstset; scalar_t__ lambda; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int) ;

void FUNC_4(struct lemon *VAR_5)
{
  int VAR_6, VAR_7;
  struct rule *VAR_8;
  int VAR_9;

  for(VAR_6=0; VAR_6<VAR_5->nsymbol; VAR_6++){
    VAR_5->symbols[VAR_6]->lambda = VAR_0;
  }
  for(VAR_6=VAR_5->nterminal; VAR_6<VAR_5->nsymbol; VAR_6++){
    VAR_5->symbols[VAR_6]->firstset = FUNC_1();
  }


  do{
    VAR_9 = 0;
    for(VAR_8=VAR_5->rule; VAR_8; VAR_8=VAR_8->next){
      if( VAR_8->lhs->lambda ) continue;
      for(VAR_6=0; VAR_6<VAR_8->nrhs; VAR_6++){
        struct symbol *VAR_10 = VAR_8->rhs[VAR_6];
        FUNC_3( VAR_10->type==VAR_3 || VAR_10->lambda==VAR_0 );
        if( VAR_10->lambda==VAR_0 ) break;
      }
      if( VAR_6==VAR_8->nrhs ){
        VAR_8->lhs->lambda = VAR_1;
        VAR_9 = 1;
      }
    }
  }while( VAR_9 );


  do{
    struct symbol *VAR_11, *VAR_12;
    VAR_9 = 0;
    for(VAR_8=VAR_5->rule; VAR_8; VAR_8=VAR_8->next){
      VAR_11 = VAR_8->lhs;
      for(VAR_6=0; VAR_6<VAR_8->nrhs; VAR_6++){
        VAR_12 = VAR_8->rhs[VAR_6];
        if( VAR_12->type==VAR_4 ){
          VAR_9 += FUNC_0(VAR_11->firstset,VAR_12->index);
          break;
        }else if( VAR_12->type==VAR_2 ){
          for(VAR_7=0; VAR_7<VAR_12->nsubsym; VAR_7++){
            VAR_9 += FUNC_0(VAR_11->firstset,VAR_12->subsym[VAR_7]->index);
          }
          break;
        }else if( VAR_11==VAR_12 ){
          if( VAR_11->lambda==VAR_0 ) break;
        }else{
          VAR_9 += FUNC_2(VAR_11->firstset,VAR_12->firstset);
          if( VAR_12->lambda==VAR_0 ) break;
        }
      }
    }
  }while( VAR_9 );
  return;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {scalar_t__ type; int nsubsym; scalar_t__ lambda; int firstset; TYPE_1__** subsym; int index; struct rule* rule; int name; } ;
struct rule {int nrhs; struct symbol** rhs; struct rule* nextlhs; int line; } ;
struct lemon {int errorcnt; int filename; struct symbol* errsym; } ;
struct config {int dot; int fplp; int fws; struct rule* rp; struct config* next; } ;
struct TYPE_2__ {int index; } ;


 struct config* FUNC_0 (struct rule*,int ) ;
 int FUNC_1 (int ,int ,char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,struct config*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int) ;
 struct config* VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_6(struct lemon *VAR_6)
{
  struct config *VAR_7, *VAR_8;
  struct rule *VAR_9, *VAR_10;
  struct symbol *VAR_11, *VAR_12;
  int VAR_13, VAR_14;

  FUNC_5( VAR_5!=0 );
  for(VAR_7=VAR_4; VAR_7; VAR_7=VAR_7->next){
    VAR_9 = VAR_7->rp;
    VAR_14 = VAR_7->dot;
    if( VAR_14>=VAR_9->nrhs ) continue;
    VAR_11 = VAR_9->rhs[VAR_14];
    if( VAR_11->type==VAR_2 ){
      if( VAR_11->rule==0 && VAR_11!=VAR_6->errsym ){
        FUNC_1(VAR_6->filename,VAR_9->line,"Nonterminal \"%s\" has no rules.",
          VAR_11->name);
        VAR_6->errorcnt++;
      }
      for(VAR_10=VAR_11->rule; VAR_10; VAR_10=VAR_10->nextlhs){
        VAR_8 = FUNC_0(VAR_10,0);
        for(VAR_13=VAR_14+1; VAR_13<VAR_9->nrhs; VAR_13++){
          VAR_12 = VAR_9->rhs[VAR_13];
          if( VAR_12->type==VAR_3 ){
            FUNC_3(VAR_8->fws,VAR_12->index);
            break;
          }else if( VAR_12->type==VAR_1 ){
            int VAR_15;
            for(VAR_15=0; VAR_15<VAR_12->nsubsym; VAR_15++){
              FUNC_3(VAR_8->fws, VAR_12->subsym[VAR_15]->index);
            }
            break;
          }else{
            FUNC_4(VAR_8->fws,VAR_12->firstset);
            if( VAR_12->lambda==VAR_0 ) break;
          }
        }
        if( VAR_13==VAR_9->nrhs ) FUNC_2(&VAR_7->fplp,VAR_8);
      }
    }
  }
  return;
}

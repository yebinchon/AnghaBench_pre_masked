
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {scalar_t__ type; int nsubsym; scalar_t__ prec; struct symbol** subsym; } ;
struct rule {scalar_t__ precsym; int nrhs; struct symbol** rhs; struct rule* next; } ;
struct lemon {struct rule* rule; } ;


 scalar_t__ VAR_0 ;

void FUNC_0(struct lemon *VAR_1)
{
  struct rule *VAR_2;
  for(VAR_2=VAR_1->rule; VAR_2; VAR_2=VAR_2->next){
    if( VAR_2->precsym==0 ){
      int VAR_3, VAR_4;
      for(VAR_3=0; VAR_3<VAR_2->nrhs && VAR_2->precsym==0; VAR_3++){
        struct symbol *VAR_5 = VAR_2->rhs[VAR_3];
        if( VAR_5->type==VAR_0 ){
          for(VAR_4=0; VAR_4<VAR_5->nsubsym; VAR_4++){
            if( VAR_5->subsym[VAR_4]->prec>=0 ){
              VAR_2->precsym = VAR_5->subsym[VAR_4];
              break;
            }
          }
        }else if( VAR_5->prec>=0 ){
          VAR_2->precsym = VAR_2->rhs[VAR_3];
        }
      }
    }
  }
  return;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {struct rule* rule; int name; } ;
struct rule {int nrhs; int lhsStart; struct rule* nextlhs; struct symbol** rhs; struct rule* next; } ;
struct lemon {int errorcnt; int filename; struct rule* rule; TYPE_1__* startRule; scalar_t__ start; } ;
struct config {int fws; } ;
struct TYPE_2__ {struct symbol* lhs; } ;


 struct config* FUNC_0 (struct rule*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,char*,int ,...) ;
 int FUNC_3 (int ,int ) ;
 struct symbol* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct lemon*) ;

void FUNC_6(struct lemon *VAR_0)
{
  struct symbol *VAR_1;
  struct rule *VAR_2;

  FUNC_1();


  if( VAR_0->start ){
    VAR_1 = FUNC_4(VAR_0->start);
    if( VAR_1==0 ){
      FUNC_2(VAR_0->filename,0,
"The specified start symbol \"%s\" is not in a nonterminal of the grammar.  \"%s\" will be used as the start symbol instead.",VAR_0->start,VAR_0->startRule->lhs->name);


      VAR_0->errorcnt++;
      VAR_1 = VAR_0->startRule->lhs;
    }
  }else{
    VAR_1 = VAR_0->startRule->lhs;
  }




  for(VAR_2=VAR_0->rule; VAR_2; VAR_2=VAR_2->next){
    int VAR_3;
    for(VAR_3=0; VAR_3<VAR_2->nrhs; VAR_3++){
      if( VAR_2->rhs[VAR_3]==VAR_1 ){
        FUNC_2(VAR_0->filename,0,
"The start symbol \"%s\" occurs on the right-hand side of a rule. This will result in a parser which does not work properly.",VAR_1->name);


        VAR_0->errorcnt++;
      }
    }
  }




  for(VAR_2=VAR_1->rule; VAR_2; VAR_2=VAR_2->nextlhs){
    struct config *VAR_4;
    VAR_2->lhsStart = 1;
    VAR_4 = FUNC_0(VAR_2,0);
    FUNC_3(VAR_4->fws,0);
  }




  (void)FUNC_5(VAR_0);
  return;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {struct config* cfp; } ;
struct plink {struct config* cfp; struct plink* next; } ;
struct lemon {int nstate; struct state** sorted; } ;
struct config {int fplp; struct plink* bplp; struct config* next; struct state* stp; } ;


 int FUNC_0 (int *,struct config*) ;

void FUNC_1(struct lemon *VAR_0)
{
  int VAR_1;
  struct config *VAR_2, *VAR_3;
  struct state *VAR_4;
  struct plink *VAR_5;




  for(VAR_1=0; VAR_1<VAR_0->nstate; VAR_1++){
    VAR_4 = VAR_0->sorted[VAR_1];
    for(VAR_2=VAR_4->cfp; VAR_2; VAR_2=VAR_2->next){
      VAR_2->stp = VAR_4;
    }
  }



  for(VAR_1=0; VAR_1<VAR_0->nstate; VAR_1++){
    VAR_4 = VAR_0->sorted[VAR_1];
    for(VAR_2=VAR_4->cfp; VAR_2; VAR_2=VAR_2->next){
      for(VAR_5=VAR_2->bplp; VAR_5; VAR_5=VAR_5->next){
        VAR_3 = VAR_5->cfp;
        FUNC_0(&VAR_3->fplp,VAR_2);
      }
    }
  }
}

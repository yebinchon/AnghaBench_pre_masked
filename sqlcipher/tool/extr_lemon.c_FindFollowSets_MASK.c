
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct plink {TYPE_2__* cfp; struct plink* next; } ;
struct lemon {int nstate; TYPE_1__** sorted; } ;
struct config {scalar_t__ status; int fws; struct plink* fplp; struct config* next; } ;
struct TYPE_4__ {void* status; int fws; } ;
struct TYPE_3__ {struct config* cfp; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1(struct lemon *VAR_2)
{
  int VAR_3;
  struct config *VAR_4;
  struct plink *VAR_5;
  int VAR_6;
  int VAR_7;

  for(VAR_3=0; VAR_3<VAR_2->nstate; VAR_3++){
    for(VAR_4=VAR_2->sorted[VAR_3]->cfp; VAR_4; VAR_4=VAR_4->next){
      VAR_4->status = VAR_1;
    }
  }

  do{
    VAR_6 = 0;
    for(VAR_3=0; VAR_3<VAR_2->nstate; VAR_3++){
      for(VAR_4=VAR_2->sorted[VAR_3]->cfp; VAR_4; VAR_4=VAR_4->next){
        if( VAR_4->status==VAR_0 ) continue;
        for(VAR_5=VAR_4->fplp; VAR_5; VAR_5=VAR_5->next){
          VAR_7 = FUNC_0(VAR_5->cfp->fws,VAR_4->fws);
          if( VAR_7 ){
            VAR_5->cfp->status = VAR_1;
            VAR_6 = 1;
          }
        }
        VAR_4->status = VAR_0;
      }
    }
  }while( VAR_6 );
}

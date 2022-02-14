
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {scalar_t__ type; int nsubsym; struct symbol** subsym; } ;
struct state {int ap; struct config* cfp; } ;
struct lemon {int dummy; } ;
struct config {scalar_t__ status; size_t dot; int bplp; TYPE_1__* rp; struct config* next; } ;
struct TYPE_2__ {size_t nrhs; struct symbol** rhs; } ;


 int FUNC_0 (int *,int ,struct symbol*,char*) ;
 scalar_t__ VAR_0 ;
 struct config* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,struct config*) ;
 int VAR_3 ;
 struct state* FUNC_4 (struct lemon*) ;
 int FUNC_5 (struct symbol*,struct symbol*) ;

void FUNC_6(struct lemon *VAR_4, struct state *VAR_5)
{
  struct config *VAR_6;
  struct config *VAR_7;
  struct config *VAR_8;
  struct symbol *VAR_9;
  struct symbol *VAR_10;
  struct state *VAR_11;



  for(VAR_6=VAR_5->cfp; VAR_6; VAR_6=VAR_6->next) VAR_6->status = VAR_1;


  for(VAR_6=VAR_5->cfp; VAR_6; VAR_6=VAR_6->next){
    if( VAR_6->status==VAR_0 ) continue;
    if( VAR_6->dot>=VAR_6->rp->nrhs ) continue;
    FUNC_2();
    VAR_9 = VAR_6->rp->rhs[VAR_6->dot];




    for(VAR_7=VAR_6; VAR_7; VAR_7=VAR_7->next){
      if( VAR_7->status==VAR_0 ) continue;
      if( VAR_7->dot>=VAR_7->rp->nrhs ) continue;
      VAR_10 = VAR_7->rp->rhs[VAR_7->dot];
      if( !FUNC_5(VAR_10,VAR_9) ) continue;
      VAR_7->status = VAR_0;
      VAR_8 = FUNC_1(VAR_7->rp,VAR_7->dot+1);
      FUNC_3(&VAR_8->bplp,VAR_7);
    }



    VAR_11 = FUNC_4(VAR_4);



    if( VAR_9->type==VAR_2 ){
      int VAR_12;
      for(VAR_12=0; VAR_12<VAR_9->nsubsym; VAR_12++){
        FUNC_0(&VAR_5->ap,VAR_3,VAR_9->subsym[VAR_12],(char*)VAR_11);
      }
    }else{
      FUNC_0(&VAR_5->ap,VAR_3,VAR_9,(char *)VAR_11);
    }
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {struct config* bp; scalar_t__ ap; scalar_t__ statenum; struct config* cfp; } ;
struct lemon {int nstate; } ;
struct config {scalar_t__ bplp; scalar_t__ fplp; struct config* bp; } ;


 struct config* FUNC_0 () ;
 int FUNC_1 (struct lemon*) ;
 int FUNC_2 (struct config*) ;
 struct config* FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct state*) ;
 int FUNC_7 (scalar_t__*,scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 struct state* FUNC_9 (struct config*) ;
 int FUNC_10 (struct state*,struct config*) ;
 struct state* FUNC_11 () ;
 int FUNC_12 (struct lemon*,struct state*) ;

struct state *FUNC_13(struct lemon *VAR_0)
{
  struct config *VAR_1, *VAR_2;
  struct state *VAR_3;



  FUNC_5();
  VAR_2 = FUNC_0();


  VAR_3 = FUNC_9(VAR_2);
  if( VAR_3 ){



    struct config *VAR_4, *VAR_5;
    for(VAR_4=VAR_2, VAR_5=VAR_3->bp; VAR_4 && VAR_5; VAR_4=VAR_4->bp, VAR_5=VAR_5->bp){
      FUNC_7(&VAR_5->bplp,VAR_4->bplp);
      FUNC_8(VAR_4->fplp);
      VAR_4->fplp = VAR_4->bplp = 0;
    }
    VAR_1 = FUNC_3();
    FUNC_2(VAR_1);
  }else{

    FUNC_1(VAR_0);
    FUNC_4();
    VAR_1 = FUNC_3();
    VAR_3 = FUNC_11();
    FUNC_6(VAR_3);
    VAR_3->bp = VAR_2;
    VAR_3->cfp = VAR_1;
    VAR_3->statenum = VAR_0->nstate++;
    VAR_3->ap = 0;
    FUNC_10(VAR_3,VAR_3->bp);
    FUNC_12(VAR_0,VAR_3);
  }
  return VAR_3;
}

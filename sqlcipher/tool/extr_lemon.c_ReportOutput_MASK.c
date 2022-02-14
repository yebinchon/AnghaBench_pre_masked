
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symbol {char* name; scalar_t__ type; int prec; scalar_t__ bContent; scalar_t__ firstset; scalar_t__ lambda; } ;
struct state {int statenum; struct action* ap; struct config* cfp; struct config* bp; } ;
struct rule {int iRule; TYPE_2__* precsym; struct rule* next; } ;
struct lemon {int nxstate; int nsymbol; int nterminal; struct rule* rule; struct symbol** symbols; scalar_t__ basisflag; struct state** sorted; } ;
struct config {scalar_t__ dot; struct config* next; struct config* bp; int bplp; int fplp; int fws; TYPE_1__* rp; } ;
struct action {struct action* next; } ;
struct TYPE_4__ {char* name; int prec; } ;
struct TYPE_3__ {scalar_t__ nrhs; int iRule; } ;
typedef int FILE ;


 int FUNC_0 (int *,struct config*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (struct action*,int *,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int *,int ,struct lemon*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (struct lemon*,char*,char*) ;
 int FUNC_7 (int *,char*,...) ;
 int FUNC_8 (char*,char*,int ) ;
 int FUNC_9 (int *,struct rule*) ;
 scalar_t__ FUNC_10 (char*) ;

void FUNC_11(struct lemon *VAR_1)
{
  int VAR_2, VAR_3;
  struct state *VAR_4;
  struct config *VAR_5;
  struct action *VAR_6;
  struct rule *VAR_7;
  FILE *VAR_8;

  VAR_8 = FUNC_6(VAR_1,".out","wb");
  if( VAR_8==0 ) return;
  for(VAR_2=0; VAR_2<VAR_1->nxstate; VAR_2++){
    VAR_4 = VAR_1->sorted[VAR_2];
    FUNC_7(VAR_8,"State %d:\n",VAR_4->statenum);
    if( VAR_1->basisflag ) VAR_5=VAR_4->bp;
    else VAR_5=VAR_4->cfp;
    while( VAR_5 ){
      char VAR_9[20];
      if( VAR_5->dot==VAR_5->rp->nrhs ){
        FUNC_8(VAR_9,"(%d)",VAR_5->rp->iRule);
        FUNC_7(VAR_8,"    %5s ",VAR_9);
      }else{
        FUNC_7(VAR_8,"          ");
      }
      FUNC_0(VAR_8,VAR_5);
      FUNC_7(VAR_8,"\n");





      if( VAR_1->basisflag ) VAR_5=VAR_5->bp;
      else VAR_5=VAR_5->next;
    }
    FUNC_7(VAR_8,"\n");
    for(VAR_6=VAR_4->ap; VAR_6; VAR_6=VAR_6->next){
      if( FUNC_2(VAR_6,VAR_8,30) ) FUNC_7(VAR_8,"\n");
    }
    FUNC_7(VAR_8,"\n");
  }
  FUNC_7(VAR_8, "----------------------------------------------------\n");
  FUNC_7(VAR_8, "Symbols:\n");
  FUNC_7(VAR_8, "The first-set of non-terminals is shown after the name.\n\n");
  for(VAR_2=0; VAR_2<VAR_1->nsymbol; VAR_2++){
    int VAR_10;
    struct symbol *VAR_11;

    VAR_11 = VAR_1->symbols[VAR_2];
    FUNC_7(VAR_8, "  %3d: %s", VAR_2, VAR_11->name);
    if( VAR_11->type==VAR_0 ){
      FUNC_7(VAR_8, ":");
      if( VAR_11->lambda ){
        FUNC_7(VAR_8, " <lambda>");
      }
      for(VAR_10=0; VAR_10<VAR_1->nterminal; VAR_10++){
        if( VAR_11->firstset && FUNC_3(VAR_11->firstset, VAR_10) ){
          FUNC_7(VAR_8, " %s", VAR_1->symbols[VAR_10]->name);
        }
      }
    }
    if( VAR_11->prec>=0 ) FUNC_7(VAR_8," (precedence=%d)", VAR_11->prec);
    FUNC_7(VAR_8, "\n");
  }
  FUNC_7(VAR_8, "----------------------------------------------------\n");
  FUNC_7(VAR_8, "Syntax-only Symbols:\n");
  FUNC_7(VAR_8, "The following symbols never carry semantic content.\n\n");
  for(VAR_2=VAR_3=0; VAR_2<VAR_1->nsymbol; VAR_2++){
    int VAR_12;
    struct symbol *VAR_13 = VAR_1->symbols[VAR_2];
    if( VAR_13->bContent ) continue;
    VAR_12 = (int)FUNC_10(VAR_13->name);
    if( VAR_3>0 && VAR_3+VAR_12>75 ){
      FUNC_7(VAR_8,"\n");
      VAR_3 = 0;
    }
    if( VAR_3>0 ){
      FUNC_7(VAR_8, " ");
      VAR_3++;
    }
    FUNC_7(VAR_8, "%s", VAR_13->name);
    VAR_3 += VAR_12;
  }
  if( VAR_3>0 ) FUNC_7(VAR_8, "\n");
  FUNC_7(VAR_8, "----------------------------------------------------\n");
  FUNC_7(VAR_8, "Rules:\n");
  for(VAR_7=VAR_1->rule; VAR_7; VAR_7=VAR_7->next){
    FUNC_7(VAR_8, "%4d: ", VAR_7->iRule);
    FUNC_9(VAR_8, VAR_7);
    FUNC_7(VAR_8,".");
    if( VAR_7->precsym ){
      FUNC_7(VAR_8," [%s precedence=%d]",
              VAR_7->precsym->name, VAR_7->precsym->prec);
    }
    FUNC_7(VAR_8,"\n");
  }
  FUNC_5(VAR_8);
  return;
}

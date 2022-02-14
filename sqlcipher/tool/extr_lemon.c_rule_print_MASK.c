
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symbol {scalar_t__ type; int nsubsym; char* name; TYPE_2__** subsym; } ;
struct rule {int nrhs; struct symbol** rhs; TYPE_1__* lhs; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {char* name; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,...) ;

void FUNC_1(FILE *VAR_1, struct rule *VAR_2){
  int VAR_3, VAR_4;
  FUNC_0(VAR_1, "%s",VAR_2->lhs->name);

  FUNC_0(VAR_1," ::=");
  for(VAR_3=0; VAR_3<VAR_2->nrhs; VAR_3++){
    struct symbol *VAR_5 = VAR_2->rhs[VAR_3];
    if( VAR_5->type==VAR_0 ){
      FUNC_0(VAR_1," %s", VAR_5->subsym[0]->name);
      for(VAR_4=1; VAR_4<VAR_5->nsubsym; VAR_4++){
        FUNC_0(VAR_1,"|%s", VAR_5->subsym[VAR_4]->name);
      }
    }else{
      FUNC_0(VAR_1," %s", VAR_5->name);
    }

  }
}

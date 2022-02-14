
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ eContent; scalar_t__ bColumnsize; } ;
struct TYPE_6__ {TYPE_2__* pConfig; } ;
typedef TYPE_1__ Fts5Storage ;
typedef TYPE_2__ Fts5Config ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int*,char*,char const*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(Fts5Storage *VAR_1, const char *VAR_2){
  Fts5Config *VAR_3 = VAR_1->pConfig;
  int VAR_4 = FUNC_1(VAR_1);

  FUNC_0(VAR_3, &VAR_4, "data", VAR_2);
  FUNC_0(VAR_3, &VAR_4, "idx", VAR_2);
  FUNC_0(VAR_3, &VAR_4, "config", VAR_2);
  if( VAR_3->bColumnsize ){
    FUNC_0(VAR_3, &VAR_4, "docsize", VAR_2);
  }
  if( VAR_3->eContent==VAR_0 ){
    FUNC_0(VAR_3, &VAR_4, "content", VAR_2);
  }
  return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int nCol; int * azCol; } ;
struct TYPE_9__ {scalar_t__ rc; TYPE_3__* pConfig; } ;
struct TYPE_8__ {int n; int p; } ;
typedef TYPE_1__ Fts5Token ;
typedef TYPE_2__ Fts5Parse ;
typedef TYPE_3__ Fts5Config ;
typedef char Fts5Colset ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,char*,char*) ;
 char* FUNC_4 (scalar_t__*,int ,int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,char*) ;

Fts5Colset *FUNC_7(
  Fts5Parse *VAR_1,
  Fts5Colset *VAR_2,
  Fts5Token *VAR_3
){
  Fts5Colset *VAR_4 = 0;
  int VAR_5;
  char *VAR_6;

  VAR_6 = FUNC_4(&VAR_1->rc, VAR_3->p, VAR_3->n);
  if( VAR_1->rc==VAR_0 ){
    Fts5Config *VAR_7 = VAR_1->pConfig;
    FUNC_2(VAR_6);
    for(VAR_5=0; VAR_5<VAR_7->nCol; VAR_5++){
      if( 0==FUNC_6(VAR_7->azCol[VAR_5], VAR_6) ) break;
    }
    if( VAR_5==VAR_7->nCol ){
      FUNC_3(VAR_1, "no such column: %s", VAR_6);
    }else{
      VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_5);
    }
    FUNC_5(VAR_6);
  }

  if( VAR_4==0 ){
    FUNC_0( VAR_1->rc!=VAR_0 );
    FUNC_5(VAR_2);
  }

  return VAR_4;
}

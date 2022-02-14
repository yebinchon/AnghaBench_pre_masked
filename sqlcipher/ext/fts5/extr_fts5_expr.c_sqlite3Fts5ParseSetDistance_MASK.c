
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nNear; } ;
struct TYPE_5__ {int n; int* p; } ;
typedef TYPE_1__ Fts5Token ;
typedef int Fts5Parse ;
typedef TYPE_2__ Fts5ExprNearset ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int*) ;

void FUNC_1(
  Fts5Parse *VAR_1,
  Fts5ExprNearset *VAR_2,
  Fts5Token *VAR_3
){
  if( VAR_2 ){
    int VAR_4 = 0;
    int VAR_5;
    if( VAR_3->n ){
      for(VAR_5=0; VAR_5<VAR_3->n; VAR_5++){
        char VAR_6 = (char)VAR_3->p[VAR_5];
        if( VAR_6<'0' || VAR_6>'9' ){
          FUNC_0(
              VAR_1, "expected integer, got \"%.*s\"", VAR_3->n, VAR_3->p
              );
          return;
        }
        VAR_4 = VAR_4 * 10 + (VAR_3->p[VAR_5] - '0');
      }
    }else{
      VAR_4 = VAR_0;
    }
    VAR_2->nNear = VAR_4;
  }
}

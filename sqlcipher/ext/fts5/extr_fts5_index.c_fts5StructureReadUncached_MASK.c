
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int iCookie; } ;
struct TYPE_10__ {size_t nn; int * p; } ;
struct TYPE_9__ {int rc; TYPE_3__* pConfig; } ;
typedef int Fts5Structure ;
typedef TYPE_1__ Fts5Index ;
typedef TYPE_2__ Fts5Data ;
typedef TYPE_3__ Fts5Config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,size_t,int*,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_3__*,int) ;

__attribute__((used)) static Fts5Structure *FUNC_6(Fts5Index *VAR_3){
  Fts5Structure *VAR_4 = 0;
  Fts5Config *VAR_5 = VAR_3->pConfig;
  int VAR_6;
  Fts5Data *VAR_7;

  VAR_7 = FUNC_0(VAR_3, VAR_1);
  if( VAR_3->rc==VAR_2 ){

    FUNC_4(&VAR_7->p[VAR_7->nn], 0, VAR_0);
    VAR_3->rc = FUNC_2(VAR_7->p, VAR_7->nn, &VAR_6, &VAR_4);
    if( VAR_3->rc==VAR_2 && VAR_5->iCookie!=VAR_6 ){
      VAR_3->rc = FUNC_5(VAR_5, VAR_6);
    }
    FUNC_1(VAR_7);
    if( VAR_3->rc!=VAR_2 ){
      FUNC_3(VAR_4);
      VAR_4 = 0;
    }
  }

  return VAR_4;
}

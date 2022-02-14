
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ i64 ;
struct TYPE_11__ {int nn; int * p; } ;
struct TYPE_10__ {scalar_t__ rc; TYPE_1__* pConfig; } ;
struct TYPE_9__ {int nCol; } ;
typedef TYPE_2__ Fts5Index ;
typedef TYPE_3__ Fts5Data ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__*,int ,int) ;

int FUNC_5(Fts5Index *VAR_2, i64 *VAR_3, i64 *VAR_4){
  int VAR_5 = VAR_2->pConfig->nCol;
  Fts5Data *VAR_6;

  *VAR_3 = 0;
  FUNC_4(VAR_4, 0, sizeof(i64) * VAR_5);
  VAR_6 = FUNC_0(VAR_2, VAR_0);
  if( VAR_2->rc==VAR_1 && VAR_6->nn ){
    int VAR_7 = 0;
    int VAR_8;
    VAR_7 += FUNC_2(&VAR_6->p[VAR_7], (u64*)VAR_3);
    for(VAR_8=0; VAR_7<VAR_6->nn && VAR_8<VAR_5; VAR_8++){
      VAR_7 += FUNC_2(&VAR_6->p[VAR_7], (u64*)&VAR_4[VAR_8]);
    }
  }

  FUNC_1(VAR_6);
  return FUNC_3(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {TYPE_1__* pConfig; } ;
struct TYPE_18__ {scalar_t__ nLevel; } ;
struct TYPE_17__ {int nUsermerge; } ;
typedef TYPE_2__ Fts5Structure ;
typedef TYPE_3__ Fts5Index ;


 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_2__**,int,int) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_2__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;

int FUNC_7(Fts5Index *VAR_0, int VAR_1){
  Fts5Structure *VAR_2 = FUNC_4(VAR_0);
  if( VAR_2 ){
    int VAR_3 = VAR_0->pConfig->nUsermerge;
    FUNC_3(VAR_0);
    if( VAR_1<0 ){
      Fts5Structure *VAR_4 = FUNC_1(VAR_0, VAR_2);
      FUNC_5(VAR_2);
      VAR_2 = VAR_4;
      VAR_3 = 2;
      VAR_1 = VAR_1*-1;
    }
    if( VAR_2 && VAR_2->nLevel ){
      if( FUNC_0(VAR_0, &VAR_2, VAR_1, VAR_3) ){
        FUNC_6(VAR_0, VAR_2);
      }
    }
    FUNC_5(VAR_2);
  }
  return FUNC_2(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* aRegion; } ;
struct TYPE_8__ {TYPE_4__ log; } ;
struct TYPE_10__ {scalar_t__ pCsr; scalar_t__ nTransOpen; int pEnv; TYPE_1__ treehdr; } ;
typedef TYPE_3__ lsm_db ;
struct TYPE_9__ {scalar_t__ iEnd; scalar_t__ iStart; } ;
typedef TYPE_4__ DbLog ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 char* FUNC_1 (int ,char*,int,int,int,int,int,int) ;
 int FUNC_2 (TYPE_3__*,int ) ;

int FUNC_3(lsm_db *VAR_2, char **VAR_3){
  int VAR_4 = VAR_1;
  char *VAR_5 = 0;







  if( VAR_2->pCsr==0 && VAR_2->nTransOpen==0 ){
    VAR_4 = FUNC_2(VAR_2, 0);
    if( VAR_4==VAR_1 ) VAR_4 = FUNC_0(VAR_2);
  }

  if( VAR_4==VAR_1 ){
    DbLog *VAR_6 = &VAR_2->treehdr.log;
    VAR_5 = FUNC_1(VAR_2->pEnv,
        "%d %d %d %d %d %d",
        (int)VAR_6->aRegion[0].iStart, (int)VAR_6->aRegion[0].iEnd,
        (int)VAR_6->aRegion[1].iStart, (int)VAR_6->aRegion[1].iEnd,
        (int)VAR_6->aRegion[2].iStart, (int)VAR_6->aRegion[2].iEnd
    );
    if( !VAR_5 ) VAR_4 = VAR_0;
  }

  *VAR_3 = VAR_5;
  return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int pEnv; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_14__ {int nRight; int * aRhs; int lhs; scalar_t__ iAge; struct TYPE_14__* pNext; } ;
struct TYPE_13__ {scalar_t__ n; char* z; } ;
typedef int Snapshot ;
typedef TYPE_2__ LsmString ;
typedef TYPE_3__ Level ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int **,int*) ;
 int FUNC_2 (TYPE_2__*,char*,int *) ;
 TYPE_3__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int FUNC_5 (TYPE_2__*,char*,char*,int) ;
 int FUNC_6 (TYPE_2__*,int ) ;

int FUNC_7(
  lsm_db *VAR_2,
  char **VAR_3
){
  Level *VAR_4 = 0;
  int VAR_5 = VAR_1;
  Level *VAR_6;
  LsmString VAR_7;
  Snapshot *VAR_8;
  int VAR_9 = 0;


  VAR_5 = FUNC_1(VAR_2, &VAR_8, &VAR_9);
  if( VAR_5!=VAR_1 ) return VAR_5;


  VAR_4 = FUNC_3(VAR_8);
  FUNC_6(&VAR_7, VAR_2->pEnv);
  for(VAR_6=VAR_4; VAR_5==VAR_1 && VAR_6; VAR_6=VAR_6->pNext){
    int VAR_10;
    FUNC_5(&VAR_7, "%s{%d", (VAR_7.n ? " " : ""), (int)VAR_6->iAge);
    FUNC_2(&VAR_7, " ", &VAR_6->lhs);
    for(VAR_10=0; VAR_5==VAR_1 && VAR_10<VAR_6->nRight; VAR_10++){
      FUNC_2(&VAR_7, " ", &VAR_6->aRhs[VAR_10]);
    }
    FUNC_4(&VAR_7, "}", 1);
  }
  VAR_5 = VAR_7.n>=0 ? VAR_1 : VAR_0;


  FUNC_0(VAR_2, VAR_9);
  *VAR_3 = VAR_7.z;
  return VAR_5;
}

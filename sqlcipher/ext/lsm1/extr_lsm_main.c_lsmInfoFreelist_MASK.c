
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int pEnv; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_10__ {char* z; } ;
typedef int Snapshot ;
typedef TYPE_2__ LsmString ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int **,int*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ,TYPE_2__*) ;

int FUNC_5(lsm_db *VAR_2, char **VAR_3){
  Snapshot *VAR_4;
  int VAR_5 = 0;
  LsmString VAR_6;
  int VAR_7;


  VAR_7 = FUNC_1(VAR_2, &VAR_4, &VAR_5);
  if( VAR_7!=VAR_0 ) return VAR_7;

  FUNC_3(&VAR_6, VAR_2->pEnv);
  VAR_7 = FUNC_4(VAR_2, 0, VAR_1, &VAR_6);
  if( VAR_7!=VAR_0 ){
    FUNC_2(VAR_2->pEnv, VAR_6.z);
  }else{
    *VAR_3 = VAR_6.z;
  }


  FUNC_0(VAR_2, VAR_5);
  return VAR_7;
}

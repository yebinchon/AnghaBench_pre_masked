
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lsm_file ;
struct TYPE_3__ {scalar_t__ shmfd; int nShm; int pEnv; scalar_t__* apShm; } ;
typedef TYPE_1__ PosixFile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__,int ) ;
 char* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(lsm_file *VAR_2, int VAR_3){
  PosixFile *VAR_4 = (PosixFile *)VAR_2;
  if( VAR_4->shmfd>0 ){
    int VAR_5;
    for(VAR_5=0; VAR_5<VAR_4->nShm; VAR_5++){
      if( VAR_4->apShm[VAR_5] ){
        FUNC_2(VAR_4->apShm[VAR_5], VAR_1);
        VAR_4->apShm[VAR_5] = 0;
      }
    }
    FUNC_0(VAR_4->shmfd);
    VAR_4->shmfd = 0;
    if( VAR_3 ){
      char *VAR_6 = FUNC_3(VAR_4);
      if( VAR_6 ) FUNC_4(VAR_6);
      FUNC_1(VAR_4->pEnv, VAR_6);
    }
  }
  return VAR_0;
}

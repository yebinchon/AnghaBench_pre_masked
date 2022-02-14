
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
typedef scalar_t__ off_t ;
typedef int lsm_file ;
struct TYPE_3__ {int nShm; scalar_t__ shmfd; void** apShm; int pEnv; } ;
typedef TYPE_1__ PosixFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,struct stat*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,void**,int) ;
 void* FUNC_5 (int ,int,int,int ,scalar_t__,int) ;
 scalar_t__ FUNC_6 (char*,int,int) ;
 char* FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(lsm_file *VAR_9, int VAR_10, int VAR_11, void **VAR_12){
  PosixFile *VAR_13 = (PosixFile *)VAR_9;

  *VAR_12 = 0;
  FUNC_0( VAR_11==VAR_3 );
  if( VAR_10>=VAR_13->nShm ){
    int VAR_14;
    void **VAR_15;
    int VAR_16 = VAR_10+1;
    off_t VAR_17 = VAR_16 * VAR_3;
    struct stat VAR_18;


    if( VAR_13->shmfd<=0 ){
      char *VAR_19 = FUNC_7(VAR_13);
      if( !VAR_19 ) return VAR_1;
      VAR_13->shmfd = FUNC_6(VAR_19, VAR_6|VAR_5, 0644);
      FUNC_3(VAR_13->pEnv, VAR_19);
      if( VAR_13->shmfd<0 ){
        return VAR_0;
      }
    }



    if( FUNC_1(VAR_13->shmfd, &VAR_18) ){
      return VAR_0;
    }
    if( VAR_18.st_size<VAR_17 ){
      if( FUNC_2(VAR_13->shmfd, VAR_17) ){
        return VAR_0;
      }
    }

    VAR_15 = (void **)FUNC_4(VAR_13->pEnv, VAR_13->apShm, sizeof(void *) * VAR_16);
    if( !VAR_15 ) return VAR_1;
    for(VAR_14=VAR_13->nShm; VAR_14<VAR_16; VAR_14++){
      VAR_15[VAR_14] = 0;
    }
    VAR_13->apShm = VAR_15;
    VAR_13->nShm = VAR_16;
  }

  if( VAR_13->apShm[VAR_10]==0 ){
    VAR_13->apShm[VAR_10] = FUNC_5(0, VAR_3,
        VAR_7|VAR_8, VAR_4, VAR_13->shmfd, VAR_10*VAR_3
    );
    if( VAR_13->apShm[VAR_10]==0 ) return VAR_0;
  }

  *VAR_12 = VAR_13->apShm[VAR_10];
  return VAR_2;
}

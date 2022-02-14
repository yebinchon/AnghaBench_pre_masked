
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_size; } ;
typedef int off_t ;
typedef int lsm_i64 ;
typedef int lsm_file ;
typedef int buf ;
struct TYPE_2__ {int nMap; void* pMap; int fd; } ;
typedef TYPE_1__ PosixFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct stat*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct stat*,int ,int) ;
 void* FUNC_3 (int ,int,int,int ,int ,int ) ;
 int FUNC_4 (void*,int) ;

__attribute__((used)) static int FUNC_5(
  lsm_file *VAR_5,
  lsm_i64 VAR_6,
  void **VAR_7,
  lsm_i64 *VAR_8
){
  off_t VAR_9;
  int VAR_10;
  PosixFile *VAR_11 = (PosixFile *)VAR_5;
  struct stat VAR_12;



  const int VAR_13[] = {256*1024, 1024*1024};
  int VAR_14 = VAR_13[VAR_6>(2*1024*1024)];

  if( VAR_11->pMap ){
    FUNC_4(VAR_11->pMap, VAR_11->nMap);
    *VAR_7 = VAR_11->pMap = 0;
    *VAR_8 = VAR_11->nMap = 0;
  }

  if( VAR_6>=0 ){
    FUNC_2(&VAR_12, 0, sizeof(VAR_12));
    VAR_10 = FUNC_0(VAR_11->fd, &VAR_12);
    if( VAR_10!=0 ) return VAR_0;
    VAR_9 = VAR_12.st_size;
    if( VAR_9<VAR_6 ){
      VAR_9 = ((VAR_6 + VAR_14-1) / VAR_14) * VAR_14;
      VAR_10 = FUNC_1(VAR_11->fd, VAR_9);
      if( VAR_10!=0 ) return VAR_0;
    }

    VAR_11->pMap = FUNC_3(0, VAR_9, VAR_3|VAR_4, VAR_2, VAR_11->fd, 0);
    VAR_11->nMap = VAR_9;
  }

  *VAR_7 = VAR_11->pMap;
  *VAR_8 = VAR_11->nMap;
  return VAR_1;
}

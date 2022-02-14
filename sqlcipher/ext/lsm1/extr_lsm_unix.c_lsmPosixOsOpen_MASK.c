
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lsm_file ;
typedef int lsm_env ;
struct TYPE_5__ {char const* zName; int fd; int * pEnv; } ;
typedef TYPE_1__ PosixFile ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (char const*,int,int) ;

__attribute__((used)) static int FUNC_5(
  lsm_env *VAR_10,
  const char *VAR_11,
  int VAR_12,
  lsm_file **VAR_13
){
  int VAR_14 = VAR_4;
  PosixFile *VAR_15;

  VAR_15 = FUNC_2(VAR_10, sizeof(PosixFile));
  if( VAR_15==0 ){
    VAR_14 = VAR_3;
  }else{
    int VAR_16 = (VAR_12 & VAR_5);
    int VAR_17 = (VAR_16 ? VAR_7 : (VAR_8|VAR_6));
    FUNC_3(VAR_15, 0, sizeof(PosixFile));
    VAR_15->zName = VAR_11;
    VAR_15->pEnv = VAR_10;
    VAR_15->fd = FUNC_4(VAR_11, VAR_17, 0644);
    if( VAR_15->fd<0 ){
      FUNC_1(VAR_10, VAR_15);
      VAR_15 = 0;
      if( VAR_9==VAR_0 ){
        VAR_14 = FUNC_0(VAR_2);
      }else{
        VAR_14 = VAR_1;
      }
    }
  }

  *VAR_13 = (lsm_file *)VAR_15;
  return VAR_14;
}

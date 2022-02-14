
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lsm_file ;
struct TYPE_2__ {int fd; int nMap; scalar_t__ pMap; } ;
typedef TYPE_1__ PosixFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_2(lsm_file *VAR_3){
  int VAR_4 = VAR_1;


  PosixFile *VAR_5 = (PosixFile *)VAR_3;
  int VAR_6 = 0;

  if( VAR_5->pMap ){
    VAR_6 = FUNC_1(VAR_5->pMap, VAR_5->nMap, VAR_2);
  }
  if( VAR_6==0 ) VAR_6 = FUNC_0(VAR_5->fd);
  if( VAR_6<0 ) VAR_4 = VAR_0;




  return VAR_4;
}

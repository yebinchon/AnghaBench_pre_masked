
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
typedef int off_t ;
typedef scalar_t__ lsm_i64 ;
typedef int lsm_file ;
struct TYPE_2__ {int fd; } ;
typedef TYPE_1__ PosixFile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct stat*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(
  lsm_file *VAR_2,
  lsm_i64 VAR_3
){
  PosixFile *VAR_4 = (PosixFile *)VAR_2;
  int VAR_5 = VAR_1;
  int VAR_6;
  struct stat VAR_7;

  VAR_6 = FUNC_0(VAR_4->fd, &VAR_7);
  if( VAR_6==0 && VAR_7.st_size>VAR_3 ){
    VAR_6 = FUNC_1(VAR_4->fd, (off_t)VAR_3);
  }
  if( VAR_6<0 ) VAR_5 = VAR_0;

  return VAR_5;
}

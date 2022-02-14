
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
typedef scalar_t__ lsm_i64 ;
typedef int lsm_file ;
struct TYPE_2__ {int fd; } ;
typedef TYPE_1__ PosixFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,void*,size_t) ;

__attribute__((used)) static int FUNC_2(
  lsm_file *VAR_3,
  lsm_i64 VAR_4,
  void *VAR_5,
  int VAR_6
){
  int VAR_7 = VAR_1;
  PosixFile *VAR_8 = (PosixFile *)VAR_3;
  off_t VAR_9;

  VAR_9 = FUNC_0(VAR_8->fd, (off_t)VAR_4, VAR_2);
  if( VAR_9!=VAR_4 ){
    VAR_7 = VAR_0;
  }else{
    ssize_t VAR_10 = FUNC_1(VAR_8->fd, VAR_5, (size_t)VAR_6);
    if( VAR_10<0 ) VAR_7 = VAR_0;
  }

  return VAR_7;
}

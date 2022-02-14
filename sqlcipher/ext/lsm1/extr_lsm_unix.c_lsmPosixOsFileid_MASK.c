
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void u8 ;
struct stat {int st_ino; int st_dev; } ;
typedef int lsm_file ;
typedef int buf ;
struct TYPE_2__ {int fd; } ;
typedef TYPE_1__ PosixFile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct stat*) ;
 int FUNC_1 (void*,int *,int) ;
 int FUNC_2 (struct stat*,int ,int) ;

__attribute__((used)) static int FUNC_3(
  lsm_file *VAR_2,
  void *VAR_3,
  int *VAR_4
){
  int VAR_5;
  int VAR_6;
  int VAR_7;
  PosixFile *VAR_8 = (PosixFile *)VAR_2;
  struct stat VAR_9;

  VAR_6 = *VAR_4;
  VAR_7 = (sizeof(VAR_9.st_dev) + sizeof(VAR_9.st_ino));
  *VAR_4 = VAR_7;
  if( VAR_7>VAR_6 ) return VAR_1;

  FUNC_2(&VAR_9, 0, sizeof(VAR_9));
  VAR_5 = FUNC_0(VAR_8->fd, &VAR_9);
  if( VAR_5!=0 ) return VAR_0;

  FUNC_1(VAR_3, &VAR_9.st_dev, sizeof(VAR_9.st_dev));
  FUNC_1(&(((u8 *)VAR_3)[sizeof(VAR_9.st_dev)]), &VAR_9.st_ino, sizeof(VAR_9.st_ino));
  return VAR_1;
}

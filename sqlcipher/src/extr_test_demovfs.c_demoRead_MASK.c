
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int sqlite3_file ;
typedef int off_t ;
struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ DemoFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,void*,int) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_file *VAR_4,
  void *VAR_5,
  int VAR_6,
  sqlite_int64 VAR_7
){
  DemoFile *VAR_8 = (DemoFile*)VAR_4;
  off_t VAR_9;
  int VAR_10;
  int VAR_11;







  VAR_11 = FUNC_0(VAR_8);
  if( VAR_11!=VAR_3 ){
    return VAR_11;
  }

  VAR_9 = FUNC_1(VAR_8->fd, VAR_7, VAR_0);
  if( VAR_9!=VAR_7 ){
    return VAR_1;
  }
  VAR_10 = FUNC_2(VAR_8->fd, VAR_5, VAR_6);

  if( VAR_10==VAR_6 ){
    return VAR_3;
  }else if( VAR_10>=0 ){
    return VAR_2;
  }

  return VAR_1;
}

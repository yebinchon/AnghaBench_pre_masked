
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
typedef scalar_t__ off_t ;
struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ DemoFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int ) ;
 size_t FUNC_1 (int ,void const*,int) ;

__attribute__((used)) static int FUNC_2(
  DemoFile *VAR_3,
  const void *VAR_4,
  int VAR_5,
  sqlite_int64 VAR_6
){
  off_t VAR_7;
  size_t VAR_8;

  VAR_7 = FUNC_0(VAR_3->fd, VAR_6, VAR_0);
  if( VAR_7!=VAR_6 ){
    return VAR_1;
  }

  VAR_8 = FUNC_1(VAR_3->fd, VAR_4, VAR_5);
  if( VAR_8!=VAR_5 ){
    return VAR_1;
  }

  return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_file ;
struct TYPE_2__ {int busyTimeout; int pVfs; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int ,int*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(
  void *VAR_3,
  int VAR_4,
  sqlite3_file *VAR_5
){
  sqlite3 *VAR_6 = (sqlite3 *)VAR_3;
  int VAR_7 = ((sqlite3 *)VAR_3)->busyTimeout;
  FUNC_0(VAR_5);
  if( (VAR_4+1)*1000 > VAR_7 ){
    return 0;
  }
  FUNC_3(VAR_6->pVfs, 1000000);
  return 1;

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int busyTimeout; int pVfs; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(
 void *VAR_1,
 int VAR_2
){
  sqlite3 *VAR_3 = (sqlite3 *)VAR_1;
  int VAR_4 = ((sqlite3 *)VAR_1)->busyTimeout;
  if( (VAR_2+1)*1000 > VAR_4 ){
    return 0;
  }
  FUNC_1(VAR_3->pVfs, 1000000);
  return 1;

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_file ;
typedef int multiplexGroup ;
struct TYPE_2__ {int * pGroup; } ;
typedef TYPE_1__ multiplexConn ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(sqlite3_file *VAR_1){
  multiplexConn *VAR_2 = (multiplexConn*)VAR_1;
  multiplexGroup *VAR_3 = VAR_2->pGroup;
  int VAR_4 = VAR_0;
  FUNC_0(VAR_3);
  FUNC_1(VAR_3);
  return VAR_4;
}

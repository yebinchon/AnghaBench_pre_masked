
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nSize; } ;
typedef TYPE_1__ tmp_file ;
typedef int sqlite_int64 ;
typedef int sqlite3_file ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(sqlite3_file *VAR_1, sqlite_int64 *VAR_2){
  tmp_file *VAR_3 = (tmp_file *)VAR_1;
  *VAR_2 = VAR_3->nSize;
  return VAR_0;
}

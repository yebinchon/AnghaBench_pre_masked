
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nSize; int * zAlloc; } ;
typedef TYPE_1__ tmp_file ;
typedef int sqlite_int64 ;
typedef int sqlite3_file ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int *,int) ;

__attribute__((used)) static int FUNC_1(
  sqlite3_file *VAR_2,
  void *VAR_3,
  int VAR_4,
  sqlite_int64 VAR_5
){
  tmp_file *VAR_6 = (tmp_file *)VAR_2;
  if( (VAR_4+VAR_5)>VAR_6->nSize ){
    return VAR_0;
  }
  FUNC_0(VAR_3, &VAR_6->zAlloc[VAR_5], VAR_4);
  return VAR_1;
}

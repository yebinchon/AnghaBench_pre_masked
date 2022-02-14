
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nAlloc; char* zAlloc; int nSize; } ;
typedef TYPE_1__ tmp_file ;
typedef int sqlite_int64 ;
typedef int sqlite3_file ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,void const*,int) ;
 char* FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_file *VAR_2,
  const void *VAR_3,
  int VAR_4,
  sqlite_int64 VAR_5
){
  tmp_file *VAR_6 = (tmp_file *)VAR_2;
  if( (VAR_4+VAR_5)>VAR_6->nAlloc ){
    int VAR_7 = (int)(2*(VAR_4+VAR_5+VAR_6->nAlloc));
    char *VAR_8 = FUNC_2(VAR_6->zAlloc, VAR_7);
    if( !VAR_8 ){
      return VAR_0;
    }
    VAR_6->zAlloc = VAR_8;
    VAR_6->nAlloc = VAR_7;
  }
  FUNC_1(&VAR_6->zAlloc[VAR_5], VAR_3, VAR_4);
  VAR_6->nSize = (int)FUNC_0(VAR_6->nSize, VAR_5+VAR_4);
  return VAR_1;
}

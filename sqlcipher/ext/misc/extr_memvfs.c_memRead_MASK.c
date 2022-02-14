
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
typedef int sqlite3_file ;
struct TYPE_2__ {scalar_t__ aData; } ;
typedef TYPE_1__ MemFile ;


 int VAR_0 ;
 int FUNC_0 (void*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(
  sqlite3_file *VAR_1,
  void *VAR_2,
  int VAR_3,
  sqlite_int64 VAR_4
){
  MemFile *VAR_5 = (MemFile *)VAR_1;
  FUNC_0(VAR_2, VAR_5->aData+VAR_4, VAR_3);
  return VAR_0;
}

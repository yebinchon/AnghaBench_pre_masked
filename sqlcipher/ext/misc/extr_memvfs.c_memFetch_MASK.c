
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
typedef int sqlite3_file ;
struct TYPE_2__ {scalar_t__ aData; } ;
typedef TYPE_1__ MemFile ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(
  sqlite3_file *VAR_1,
  sqlite3_int64 VAR_2,
  int VAR_3,
  void **VAR_4
){
  MemFile *VAR_5 = (MemFile *)VAR_1;
  *VAR_4 = (void*)(VAR_5->aData + VAR_2);
  return VAR_0;
}

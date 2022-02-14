
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_2__ {int sz; int aData; } ;
typedef TYPE_1__ MemFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_1(sqlite3_file *VAR_3, int VAR_4, void *VAR_5){
  MemFile *VAR_6 = (MemFile *)VAR_3;
  int VAR_7 = VAR_1;
  if( VAR_4==VAR_0 ){
    *(char**)VAR_5 = FUNC_0("mem(%p,%lld)", VAR_6->aData, VAR_6->sz);
    VAR_7 = VAR_2;
  }
  return VAR_7;
}

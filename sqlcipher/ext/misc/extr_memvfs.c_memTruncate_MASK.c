
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
typedef int sqlite3_file ;
struct TYPE_2__ {scalar_t__ sz; scalar_t__ szMax; scalar_t__ aData; } ;
typedef TYPE_1__ MemFile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(sqlite3_file *VAR_2, sqlite_int64 VAR_3){
  MemFile *VAR_4 = (MemFile *)VAR_2;
  if( VAR_3>VAR_4->sz ){
    if( VAR_3>VAR_4->szMax ) return VAR_0;
    FUNC_0(VAR_4->aData+VAR_4->sz, 0, VAR_3-VAR_4->sz);
  }
  VAR_4->sz = VAR_3;
  return VAR_1;
}

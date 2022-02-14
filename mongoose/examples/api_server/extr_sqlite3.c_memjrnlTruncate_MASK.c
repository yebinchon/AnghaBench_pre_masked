
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
typedef int sqlite3_file ;
struct TYPE_5__ {struct TYPE_5__* pNext; } ;
struct TYPE_4__ {TYPE_2__* pFirst; } ;
typedef TYPE_1__ MemJournal ;
typedef TYPE_2__ FileChunk ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(sqlite3_file *VAR_1, sqlite_int64 VAR_2){
  MemJournal *VAR_3 = (MemJournal *)VAR_1;
  FileChunk *VAR_4;
  FUNC_1(VAR_2==0);
  FUNC_0(VAR_2);
  VAR_4 = VAR_3->pFirst;
  while( VAR_4 ){
    FileChunk *VAR_5 = VAR_4;
    VAR_4 = VAR_4->pNext;
    FUNC_3(VAR_5);
  }
  FUNC_2(VAR_1);
  return VAR_0;
}

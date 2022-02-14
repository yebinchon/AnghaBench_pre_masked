
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
typedef int sqlite3_file ;
struct TYPE_3__ {scalar_t__ iOffset; } ;
struct TYPE_4__ {TYPE_1__ endpoint; } ;
typedef TYPE_2__ MemJournal ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(sqlite3_file *VAR_1, sqlite_int64 *VAR_2){
  MemJournal *VAR_3 = (MemJournal *)VAR_1;
  *VAR_2 = (sqlite_int64) VAR_3->endpoint.iOffset;
  return VAR_0;
}

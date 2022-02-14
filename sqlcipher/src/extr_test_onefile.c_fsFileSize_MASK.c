
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int sqlite3_file ;
struct TYPE_3__ {int nJournal; int nDatabase; } ;
typedef TYPE_1__ fs_real_file ;
struct TYPE_4__ {scalar_t__ eType; TYPE_1__* pReal; } ;
typedef TYPE_2__ fs_file ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(sqlite3_file *VAR_2, sqlite_int64 *VAR_3){
  fs_file *VAR_4 = (fs_file *)VAR_2;
  fs_real_file *VAR_5 = VAR_4->pReal;
  if( VAR_4->eType==VAR_0 ){
    *VAR_3 = VAR_5->nDatabase;
  }else{
    *VAR_3 = VAR_5->nJournal;
  }
  return VAR_1;
}

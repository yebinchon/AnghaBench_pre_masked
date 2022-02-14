
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_int64 ;
typedef int sqlite3_file ;
struct TYPE_4__ {TYPE_1__* pVFile; } ;
typedef TYPE_2__ VHandle ;
struct TYPE_3__ {int sz; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(sqlite3_file *VAR_1, sqlite3_int64 *VAR_2){
  *VAR_2 = ((VHandle*)VAR_1)->pVFile->sz;
  return VAR_0;
}

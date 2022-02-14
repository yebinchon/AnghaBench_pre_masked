
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
typedef int sqlite3_file ;
struct TYPE_3__ {TYPE_2__* pVFile; } ;
typedef TYPE_1__ VHandle ;
struct TYPE_4__ {scalar_t__ sz; } ;
typedef TYPE_2__ VFile ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(sqlite3_file *VAR_1, sqlite3_int64 VAR_2){
  VHandle *VAR_3 = (VHandle*)VAR_1;
  VFile *VAR_4 = VAR_3->pVFile;
  if( VAR_4->sz>VAR_2 && VAR_2>=0 ) VAR_4->sz = (int)VAR_2;
  return VAR_0;
}

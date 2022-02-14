
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_3__ {TYPE_2__* pVFile; } ;
typedef TYPE_1__ VHandle ;
struct TYPE_4__ {scalar_t__ nRef; scalar_t__ zFilename; int sz; scalar_t__ a; } ;
typedef TYPE_2__ VFile ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(sqlite3_file *VAR_1){
  VHandle *VAR_2 = (VHandle*)VAR_1;
  VFile *VAR_3 = VAR_2->pVFile;
  VAR_3->nRef--;
  if( VAR_3->nRef==0 && VAR_3->zFilename==0 ){
    VAR_3->sz = -1;
    FUNC_0(VAR_3->a);
    VAR_3->a = 0;
  }
  return VAR_0;
}

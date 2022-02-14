
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int sqlite3_file ;
struct TYPE_5__ {TYPE_3__* pReal; } ;
typedef TYPE_2__ VStatFile ;
struct TYPE_6__ {TYPE_1__* pMethods; } ;
struct TYPE_4__ {int (* xFileSize ) (TYPE_3__*,int *) ;} ;


 int FUNC_0 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_1(sqlite3_file *VAR_0, sqlite_int64 *VAR_1){
  int VAR_2;
  VStatFile *VAR_3 = (VStatFile *)VAR_0;
  VAR_2 = VAR_3->pReal->pMethods->xFileSize(VAR_3->pReal, VAR_1);
  return VAR_2;
}

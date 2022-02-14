
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_5__ {int (* xShmLock ) (TYPE_2__*,int,int,int) ;} ;
typedef int SuperlockBusy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*,int ) ;

__attribute__((used)) static int FUNC_1(
  sqlite3_file *VAR_3,
  int VAR_4,
  int VAR_5,
  SuperlockBusy *VAR_6
){
  int VAR_7;
  int (*VAR_8)(sqlite3_file*, int, int, int) = VAR_3->pMethods->xShmLock;
  do {
    VAR_7 = VAR_8(VAR_3, VAR_4, VAR_5, VAR_2|VAR_1);
  }while( VAR_7==VAR_0 && FUNC_0((void *)VAR_6, 0) );
  return VAR_7;
}

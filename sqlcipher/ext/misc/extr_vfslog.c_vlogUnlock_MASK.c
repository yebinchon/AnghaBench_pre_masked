
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_uint64 ;
typedef int sqlite3_file ;
struct TYPE_5__ {TYPE_3__* pReal; int pLog; } ;
typedef TYPE_2__ VLogFile ;
struct TYPE_6__ {TYPE_1__* pMethods; } ;
struct TYPE_4__ {int (* xUnlock ) (TYPE_3__*,int) ;} ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ,int ,int ,char*,int,int,int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(sqlite3_file *VAR_0, int VAR_1){
  int VAR_2;
  sqlite3_uint64 VAR_3;
  VLogFile *VAR_4 = (VLogFile *)VAR_0;
  VAR_3 = FUNC_2();
  FUNC_1(VAR_4->pLog, VAR_3, 0, "UNLOCK", VAR_1, -1, 0, 0);
  VAR_2 = VAR_4->pReal->pMethods->xUnlock(VAR_4->pReal, VAR_1);
  return VAR_2;
}

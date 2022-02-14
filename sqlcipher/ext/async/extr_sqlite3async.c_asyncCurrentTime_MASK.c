
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* xCurrentTime ) (TYPE_1__*,double*) ;scalar_t__ pAppData; } ;
typedef TYPE_1__ sqlite3_vfs ;


 int FUNC_0 (TYPE_1__*,double*) ;

__attribute__((used)) static int FUNC_1(sqlite3_vfs *VAR_0, double *VAR_1){
  sqlite3_vfs *VAR_2 = (sqlite3_vfs *)VAR_0->pAppData;
  return VAR_2->xCurrentTime(VAR_2, VAR_1);
}

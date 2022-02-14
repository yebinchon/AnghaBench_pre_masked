
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* xGetLastError ) (TYPE_1__*,int ,int ) ;} ;
typedef TYPE_1__ sqlite3_vfs ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;

int FUNC_1(sqlite3_vfs *VAR_0){
  return VAR_0->xGetLastError ? VAR_0->xGetLastError(VAR_0, 0, 0) : 0;
}

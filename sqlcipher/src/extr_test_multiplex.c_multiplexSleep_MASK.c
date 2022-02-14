
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vfs ;
struct TYPE_4__ {TYPE_1__* pOrigVfs; } ;
struct TYPE_3__ {int (* xSleep ) (TYPE_1__*,int) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(sqlite3_vfs *VAR_1, int VAR_2){
  return VAR_0.pOrigVfs->xSleep(VAR_0.pOrigVfs, VAR_2);
}

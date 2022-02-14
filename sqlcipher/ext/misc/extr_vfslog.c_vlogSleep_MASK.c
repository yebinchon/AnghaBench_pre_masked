
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vfs ;
struct TYPE_3__ {int (* xSleep ) (TYPE_1__*,int) ;} ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(sqlite3_vfs *VAR_0, int VAR_1){
  return FUNC_0(VAR_0)->xSleep(FUNC_0(VAR_0), VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int interp; int zCommit; } ;
typedef TYPE_1__ SqliteDb ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_1){
  SqliteDb *VAR_2 = (SqliteDb*)VAR_1;
  int VAR_3;

  VAR_3 = FUNC_0(VAR_2->interp, VAR_2->zCommit);
  if( VAR_3!=VAR_0 || FUNC_2(FUNC_1(VAR_2->interp)) ){
    return 1;
  }
  return 0;
}

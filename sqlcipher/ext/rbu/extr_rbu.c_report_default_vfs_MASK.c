
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* zName; } ;
typedef TYPE_1__ sqlite3_vfs ;


 int FUNC_0 (int ,char*,char*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_0 ;

void FUNC_2(){
  sqlite3_vfs *VAR_1 = FUNC_1(0);
  FUNC_0(VAR_0, "default vfs is \"%s\"\n", VAR_1->zName);
}

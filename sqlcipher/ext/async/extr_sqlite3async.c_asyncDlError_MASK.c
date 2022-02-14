
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* xDlError ) (TYPE_1__*,int,char*) ;scalar_t__ pAppData; } ;
typedef TYPE_1__ sqlite3_vfs ;


 int FUNC_0 (TYPE_1__*,int,char*) ;

__attribute__((used)) static void FUNC_1(sqlite3_vfs *VAR_0, int VAR_1, char *VAR_2){
  sqlite3_vfs *VAR_3 = (sqlite3_vfs *)VAR_0->pAppData;
  VAR_3->xDlError(VAR_3, VAR_1, VAR_2);
}

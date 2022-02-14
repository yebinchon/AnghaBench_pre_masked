
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* xDlError ) (TYPE_1__*,int,char*) ;} ;
typedef TYPE_1__ sqlite3_vfs ;
struct TYPE_6__ {TYPE_1__* pRealVfs; } ;
typedef TYPE_2__ rbu_vfs ;


 int FUNC_0 (TYPE_1__*,int,char*) ;

__attribute__((used)) static void FUNC_1(sqlite3_vfs *VAR_0, int VAR_1, char *VAR_2){
  sqlite3_vfs *VAR_3 = ((rbu_vfs*)VAR_0)->pRealVfs;
  VAR_3->xDlError(VAR_3, VAR_1, VAR_2);
}

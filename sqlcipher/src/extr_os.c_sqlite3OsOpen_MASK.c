
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* xOpen ) (TYPE_1__*,char const*,TYPE_2__*,int,int*) ;} ;
typedef TYPE_1__ sqlite3_vfs ;
struct TYPE_8__ {scalar_t__ pMethods; } ;
typedef TYPE_2__ sqlite3_file ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,char const*,TYPE_2__*,int,int*) ;

int FUNC_3(
  sqlite3_vfs *VAR_1,
  const char *VAR_2,
  sqlite3_file *VAR_3,
  int VAR_4,
  int *VAR_5
){
  int VAR_6;
  FUNC_0(0);




  VAR_6 = VAR_1->xOpen(VAR_1, VAR_2, VAR_3, VAR_4 & 0x87f7f, VAR_5);
  FUNC_1( VAR_6==VAR_0 || VAR_3->pMethods==0 );
  return VAR_6;
}

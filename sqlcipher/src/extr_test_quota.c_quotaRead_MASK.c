
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_8__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_7__ {int (* xRead ) (TYPE_2__*,void*,int,int ) ;} ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,void*,int,int ) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_file *VAR_0,
  void *VAR_1,
  int VAR_2,
  sqlite3_int64 VAR_3
){
  sqlite3_file *VAR_4 = FUNC_0(VAR_0);
  return VAR_4->pMethods->xRead(VAR_4, VAR_1, VAR_2, VAR_3);
}

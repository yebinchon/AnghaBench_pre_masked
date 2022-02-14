
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
typedef int i64 ;
struct TYPE_6__ {int (* xWrite ) (TYPE_2__*,void const*,int,int ) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,void const*,int,int ) ;

int FUNC_2(sqlite3_file *VAR_0, const void *VAR_1, int VAR_2, i64 VAR_3){
  FUNC_0(VAR_0);
  return VAR_0->pMethods->xWrite(VAR_0, VAR_1, VAR_2, VAR_3);
}

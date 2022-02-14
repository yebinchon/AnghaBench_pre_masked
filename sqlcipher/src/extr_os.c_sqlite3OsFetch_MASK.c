
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
typedef int i64 ;
struct TYPE_6__ {int (* xFetch ) (TYPE_2__*,int ,int,void**) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int,void**) ;

int FUNC_2(sqlite3_file *VAR_0, i64 VAR_1, int VAR_2, void **VAR_3){
  FUNC_0(VAR_0);
  return VAR_0->pMethods->xFetch(VAR_0, VAR_1, VAR_2, VAR_3);
}

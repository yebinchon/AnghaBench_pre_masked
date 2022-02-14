
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
typedef int i64 ;
struct TYPE_5__ {int (* xUnfetch ) (TYPE_2__*,int ,void*) ;} ;


 int FUNC_0 (TYPE_2__*,int ,void*) ;

int FUNC_1(sqlite3_file *VAR_0, i64 VAR_1, void *VAR_2){
  return VAR_0->pMethods->xUnfetch(VAR_0, VAR_1, VAR_2);
}

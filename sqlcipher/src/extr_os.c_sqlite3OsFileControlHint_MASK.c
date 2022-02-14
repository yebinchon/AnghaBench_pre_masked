
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_5__ {int (* xFileControl ) (TYPE_2__*,int,void*) ;} ;


 int FUNC_0 (TYPE_2__*,int,void*) ;

void FUNC_1(sqlite3_file *VAR_0, int VAR_1, void *VAR_2){
  if( VAR_0->pMethods ) (void)VAR_0->pMethods->xFileControl(VAR_0, VAR_1, VAR_2);
}

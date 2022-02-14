
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_6__ {int (* xFileControl ) (TYPE_2__*,int,void*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int,void*) ;

int FUNC_2(sqlite3_file *VAR_3, int VAR_4, void *VAR_5){
  if( VAR_3->pMethods==0 ) return VAR_2;
  return VAR_3->pMethods->xFileControl(VAR_3, VAR_4, VAR_5);
}

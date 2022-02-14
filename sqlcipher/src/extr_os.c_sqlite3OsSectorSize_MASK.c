
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_5__ {int (* xSectorSize ) (TYPE_2__*) ;} ;


 int VAR_0 ;

int FUNC_0(sqlite3_file *VAR_1){
  int (*VAR_2)(sqlite3_file*) = VAR_1->pMethods->xSectorSize;
  return (VAR_2 ? VAR_2(VAR_1) : VAR_0);
}

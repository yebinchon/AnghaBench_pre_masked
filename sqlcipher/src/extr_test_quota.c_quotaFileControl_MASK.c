
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_7__ {int (* xFileControl ) (TYPE_2__*,int,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (TYPE_2__*,int,void*) ;

__attribute__((used)) static int FUNC_3(sqlite3_file *VAR_2, int VAR_3, void *VAR_4){
  sqlite3_file *VAR_5 = FUNC_0(VAR_2);
  int VAR_6 = VAR_5->pMethods->xFileControl(VAR_5, VAR_3, VAR_4);





  return VAR_6;
}

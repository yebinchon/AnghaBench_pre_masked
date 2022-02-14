
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_5__ {TYPE_3__* pReal; } ;
typedef TYPE_2__ VStatFile ;
struct TYPE_6__ {TYPE_1__* pMethods; } ;
struct TYPE_4__ {int (* xFileControl ) (TYPE_3__*,int,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (TYPE_3__*,int,void*) ;

__attribute__((used)) static int FUNC_2(sqlite3_file *VAR_2, int VAR_3, void *VAR_4){
  VStatFile *VAR_5 = (VStatFile *)VAR_2;
  int VAR_6;
  VAR_6 = VAR_5->pReal->pMethods->xFileControl(VAR_5->pReal, VAR_3, VAR_4);
  if( VAR_3==VAR_0 && VAR_6==VAR_1 ){
    *(char**)VAR_4 = FUNC_0("vstat/%z", *(char**)VAR_4);
  }
  return VAR_6;
}

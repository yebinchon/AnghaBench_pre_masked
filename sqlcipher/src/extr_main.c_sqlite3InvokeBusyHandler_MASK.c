
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_3__ {int (* xBusyHandler ) (void*,int) ;scalar_t__ nBusy; void* pBusyArg; scalar_t__ bExtraFileArg; } ;
typedef TYPE_1__ BusyHandler ;


 int FUNC_0 (void*,int) ;

int FUNC_1(BusyHandler *VAR_0, sqlite3_file *VAR_1){
  int VAR_2;
  if( VAR_0->xBusyHandler==0 || VAR_0->nBusy<0 ) return 0;
  if( VAR_0->bExtraFileArg ){


    int (*VAR_3)(void*,int,sqlite3_file*);
    VAR_3 = (int(*)(void*,int,sqlite3_file*))VAR_0->xBusyHandler;
    VAR_2 = VAR_3(VAR_0->pBusyArg, VAR_0->nBusy, VAR_1);
  }else{

    VAR_2 = VAR_0->xBusyHandler(VAR_0->pBusyArg, VAR_0->nBusy);
  }
  if( VAR_2==0 ){
    VAR_0->nBusy = -1;
  }else{
    VAR_0->nBusy++;
  }
  return VAR_2;
}

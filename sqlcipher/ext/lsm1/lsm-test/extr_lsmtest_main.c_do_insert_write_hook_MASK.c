
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_3__ {scalar_t__ nData; int bLog; scalar_t__ iOff; int pOut; } ;
typedef TYPE_1__ InsertWriteHook ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,char*) ;

__attribute__((used)) static void FUNC_2(
  void *VAR_0,
  int VAR_1,
  i64 VAR_2,
  int VAR_3,
  int VAR_4
){
  InsertWriteHook *VAR_5 = (InsertWriteHook *)VAR_0;
  if( VAR_1 ) return;

  if( VAR_3==0 ){
    FUNC_0(VAR_5);
    FUNC_1(VAR_5->pOut, "sync %s\n", (VAR_1 ? "log" : "db"));
  }else if( VAR_5->nData
         && VAR_1==VAR_5->bLog
         && VAR_2==(VAR_5->iOff+VAR_5->nData)
  ){
    VAR_5->nData += VAR_3;
  }else{
    FUNC_0(VAR_5);
    VAR_5->bLog = VAR_1;
    VAR_5->iOff = VAR_2;
    VAR_5->nData = VAR_3;
  }
}

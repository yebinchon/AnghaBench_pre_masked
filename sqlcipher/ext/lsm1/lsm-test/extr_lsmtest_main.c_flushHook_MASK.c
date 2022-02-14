
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nData; int pOut; scalar_t__ iOff; scalar_t__ bLog; } ;
typedef TYPE_1__ InsertWriteHook ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*,int,int) ;

__attribute__((used)) static void FUNC_2(InsertWriteHook *VAR_0){
  if( VAR_0->nData ){
    FUNC_1(VAR_0->pOut, "write %s %d %d\n",
        (VAR_0->bLog ? "log" : "db"), (int)VAR_0->iOff, VAR_0->nData
    );
    VAR_0->nData = 0;
    FUNC_0(VAR_0->pOut);
  }
}

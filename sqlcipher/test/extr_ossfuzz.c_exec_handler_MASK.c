
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int execCnt; } ;
typedef TYPE_1__ FuzzCtx ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, int VAR_1, char **VAR_2, char **VAR_3){
  FuzzCtx *VAR_4 = (FuzzCtx*)VAR_0;
  int VAR_5;
  if( VAR_2 ){
    for(VAR_5=0; VAR_5<VAR_1; VAR_5++) FUNC_1(FUNC_2("%s", VAR_2[VAR_5]));
  }
  return (VAR_4->execCnt--)<=0 || FUNC_0(VAR_0);
}

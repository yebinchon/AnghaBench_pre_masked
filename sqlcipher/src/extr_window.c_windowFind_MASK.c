
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zName; struct TYPE_4__* pNextWin; } ;
typedef TYPE_1__ Window ;
typedef int Parse ;


 int FUNC_0 (int *,char*,char const*) ;
 scalar_t__ FUNC_1 (int ,char const*) ;

__attribute__((used)) static Window *FUNC_2(Parse *VAR_0, Window *VAR_1, const char *VAR_2){
  Window *VAR_3;
  for(VAR_3=VAR_1; VAR_3; VAR_3=VAR_3->pNextWin){
    if( FUNC_1(VAR_3->zName, VAR_2)==0 ) break;
  }
  if( VAR_3==0 ){
    FUNC_0(VAR_0, "no such window: %s", VAR_2);
  }
  return VAR_3;
}

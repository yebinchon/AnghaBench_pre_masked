
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* pFunc; struct TYPE_4__* pNextWin; scalar_t__ regStartRowid; } ;
typedef TYPE_1__ Window ;
struct TYPE_5__ {scalar_t__ zName; } ;
typedef TYPE_2__ FuncDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(Window *VAR_4){
  Window *VAR_5;
  if( VAR_4->regStartRowid ) return 1;
  for(VAR_5=VAR_4; VAR_5; VAR_5=VAR_5->pNextWin){
    FuncDef *VAR_6 = VAR_5->pFunc;
    if( (VAR_6->zName==VAR_3)
     || (VAR_6->zName==VAR_0)
     || (VAR_6->zName==VAR_2)
     || (VAR_6->zName==VAR_1)
    ){
      return 1;
    }
  }
  return 0;
}

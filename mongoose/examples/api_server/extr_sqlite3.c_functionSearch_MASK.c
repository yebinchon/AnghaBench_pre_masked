
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* zName; struct TYPE_6__* pHash; } ;
struct TYPE_5__ {TYPE_2__** a; } ;
typedef TYPE_1__ FuncDefHash ;
typedef TYPE_2__ FuncDef ;


 scalar_t__ FUNC_0 (scalar_t__*,char const*,int) ;

__attribute__((used)) static FuncDef *FUNC_1(
  FuncDefHash *VAR_0,
  int VAR_1,
  const char *VAR_2,
  int VAR_3
){
  FuncDef *VAR_4;
  for(VAR_4=VAR_0->a[VAR_1]; VAR_4; VAR_4=VAR_4->pHash){
    if( FUNC_0(VAR_4->zName, VAR_2, VAR_3)==0 && VAR_4->zName[VAR_3]==0 ){
      return VAR_4;
    }
  }
  return 0;
}

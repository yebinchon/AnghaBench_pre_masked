
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__** a; } ;
struct TYPE_5__ {TYPE_2__* pHash; } ;
struct TYPE_6__ {int zName; TYPE_1__ u; } ;
typedef TYPE_2__ FuncDef ;


 TYPE_4__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*) ;

FuncDef *FUNC_1(
  int VAR_1,
  const char *VAR_2
){
  FuncDef *VAR_3;
  for(VAR_3=VAR_0.a[VAR_1]; VAR_3; VAR_3=VAR_3->u.pHash){
    if( FUNC_0(VAR_3->zName, VAR_2)==0 ){
      return VAR_3;
    }
  }
  return 0;
}

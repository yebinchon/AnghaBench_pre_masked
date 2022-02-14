
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zName; scalar_t__ pSelect; } ;
typedef TYPE_1__ Table ;
typedef int Parse ;


 int FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;

int FUNC_2(Parse *VAR_0, Table *VAR_1, int VAR_2){
  if( FUNC_1(VAR_0, VAR_1) ){
    FUNC_0(VAR_0, "table %s may not be modified", VAR_1->zName);
    return 1;
  }

  if( !VAR_2 && VAR_1->pSelect ){
    FUNC_0(VAR_0,"cannot modify %s because it is a view",VAR_1->zName);
    return 1;
  }

  return 0;
}

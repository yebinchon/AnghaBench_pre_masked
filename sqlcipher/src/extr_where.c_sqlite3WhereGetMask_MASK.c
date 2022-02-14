
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int* ix; } ;
typedef TYPE_1__ WhereMaskSet ;
typedef int Bitmask ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

Bitmask FUNC_2(WhereMaskSet *VAR_0, int VAR_1){
  int VAR_2;
  FUNC_1( VAR_0->n<=(int)sizeof(Bitmask)*8 );
  for(VAR_2=0; VAR_2<VAR_0->n; VAR_2++){
    if( VAR_0->ix[VAR_2]==VAR_1 ){
      return FUNC_0(VAR_2);
    }
  }
  return 0;
}

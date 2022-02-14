
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ eType; int n; int jnFlags; } ;
typedef TYPE_1__ JsonNode ;


 int VAR_0 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(JsonNode *VAR_1){
  int VAR_2, VAR_3;
  FUNC_0( VAR_1->eType==128 );
  VAR_3 = VAR_1->n;
  for(VAR_2=2; VAR_2<=VAR_3; VAR_2 += FUNC_1(&VAR_1[VAR_2])+1){
    switch( VAR_1[VAR_2].eType ){
      case 129:
        VAR_1[VAR_2].jnFlags |= VAR_0;
        break;
      case 128:
        FUNC_2(&VAR_1[VAR_2]);
        break;
    }
  }
}

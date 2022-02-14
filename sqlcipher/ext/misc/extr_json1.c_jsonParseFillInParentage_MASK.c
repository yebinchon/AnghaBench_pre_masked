
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_6__ {int eType; size_t n; } ;
struct TYPE_5__ {size_t* aUp; TYPE_2__* aNode; } ;
typedef TYPE_1__ JsonParse ;
typedef TYPE_2__ JsonNode ;




 size_t FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(JsonParse *VAR_0, u32 VAR_1, u32 VAR_2){
  JsonNode *VAR_3 = &VAR_0->aNode[VAR_1];
  u32 VAR_4;
  VAR_0->aUp[VAR_1] = VAR_2;
  switch( VAR_3->eType ){
    case 129: {
      for(VAR_4=1; VAR_4<=VAR_3->n; VAR_4 += FUNC_0(VAR_3+VAR_4)){
        FUNC_1(VAR_0, VAR_1+VAR_4, VAR_1);
      }
      break;
    }
    case 128: {
      for(VAR_4=1; VAR_4<=VAR_3->n; VAR_4 += FUNC_0(VAR_3+VAR_4+1)+1){
        VAR_0->aUp[VAR_1+VAR_4] = VAR_1;
        FUNC_1(VAR_0, VAR_1+VAR_4+1, VAR_1);
      }
      break;
    }
    default: {
      break;
    }
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* zSelf; struct TYPE_7__* zVocabLang; struct TYPE_7__* zVocabWord; struct TYPE_7__* zVocabTab; struct TYPE_7__* zCostTab; struct TYPE_7__* zDb; struct TYPE_7__* zClassName; } ;
typedef TYPE_1__ amatch_vtab ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(amatch_vtab *VAR_0){
  if( VAR_0 ){
    FUNC_0(VAR_0);
    FUNC_1(VAR_0);
    FUNC_3(VAR_0->zClassName);
    FUNC_3(VAR_0->zDb);
    FUNC_3(VAR_0->zCostTab);
    FUNC_3(VAR_0->zVocabTab);
    FUNC_3(VAR_0->zVocabWord);
    FUNC_3(VAR_0->zVocabLang);
    FUNC_3(VAR_0->zSelf);
    FUNC_2(VAR_0, 0, sizeof(*VAR_0));
    FUNC_3(VAR_0);
  }
}

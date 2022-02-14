
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* pNext; } ;
typedef TYPE_1__ fuzzer_stem ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(fuzzer_stem *VAR_0){
  while( VAR_0 ){
    fuzzer_stem *VAR_1 = VAR_0->pNext;
    FUNC_0(VAR_0);
    VAR_0 = VAR_1;
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* pNext; } ;
typedef TYPE_1__ IdxWrite ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(IdxWrite *VAR_0){
  IdxWrite *VAR_1;
  IdxWrite *VAR_2;
  for(VAR_1=VAR_0; VAR_1; VAR_1=VAR_2){
    VAR_2 = VAR_1->pNext;
    FUNC_0(VAR_1);
  }
}

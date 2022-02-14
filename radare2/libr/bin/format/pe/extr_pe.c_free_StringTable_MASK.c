
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ut32 ;
struct TYPE_5__ {size_t numOfChildren; struct TYPE_5__* Children; struct TYPE_5__* szKey; } ;
typedef TYPE_1__ StringTable ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__) ;

__attribute__((used)) static void FUNC_2(StringTable* VAR_0) {
 if (VAR_0) {
  FUNC_0 (VAR_0->szKey);
  if (VAR_0->Children) {
   ut32 VAR_1 = 0;
   for (; VAR_1 < VAR_0->numOfChildren; VAR_1++) {
    FUNC_1 (VAR_0->Children[VAR_1]);
   }
   FUNC_0 (VAR_0->Children);
  }
  FUNC_0 (VAR_0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* watch; int str; } ;
typedef TYPE_1__ phpdbg_watch_element ;
struct TYPE_6__ {int elements; } ;
typedef int HashTable ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;

void FUNC_4(phpdbg_watch_element *VAR_0) {
 HashTable *VAR_1 = &VAR_0->watch->elements;
 FUNC_1(VAR_0);
 FUNC_2(VAR_1, VAR_0->str);
 if (FUNC_3(VAR_1) == 0) {
  FUNC_0(VAR_0->watch);
 }
}

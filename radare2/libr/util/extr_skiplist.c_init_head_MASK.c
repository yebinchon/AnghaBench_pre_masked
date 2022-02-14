
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__** forward; } ;
typedef TYPE_1__ RSkipListNode ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0 (RSkipListNode *VAR_1) {
 int VAR_2;
 for (VAR_2 = 0; VAR_2 <= VAR_0; VAR_2++) {
  VAR_1->forward[VAR_2] = VAR_1;
 }
}

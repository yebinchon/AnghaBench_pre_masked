
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int globals_list; } ;
struct TYPE_5__ {TYPE_2__* name; } ;
struct TYPE_6__ {TYPE_1__ name; } ;
typedef TYPE_2__ SGlobal ;
typedef TYPE_3__ SGDATAStream ;
typedef int RListIter ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;

void FUNC_5(void *VAR_0) {
 SGDATAStream *VAR_1 = (SGDATAStream *) VAR_0;
 SGlobal *VAR_2 = 0;
 RListIter *VAR_3 = 0;

 VAR_3 = FUNC_4(VAR_1->globals_list);
 while (FUNC_3(VAR_3)) {
  VAR_2 = (SGlobal *) FUNC_2(VAR_3);
  if (VAR_2->name.name) {
   FUNC_0 (VAR_2->name.name);
  }
  FUNC_0 (VAR_2);
 }
 FUNC_1 (VAR_1->globals_list);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* name; } ;
struct TYPE_6__ {TYPE_4__* name; } ;
struct TYPE_9__ {TYPE_2__ objName; TYPE_1__ modName; } ;
struct TYPE_8__ {int dbiexhdrs; } ;
typedef TYPE_3__ SDbiStream ;
typedef TYPE_4__ SDBIExHeader ;
typedef int RListIter ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_0) {
 SDbiStream *VAR_1 = (SDbiStream *) VAR_0;
 SDBIExHeader *VAR_2 = 0;

 RListIter *VAR_3 = FUNC_4(VAR_1->dbiexhdrs);
 while (FUNC_3(VAR_3)) {
  VAR_2 = (SDBIExHeader *) FUNC_2(VAR_3);
  FUNC_0(VAR_2->modName.name);
  FUNC_0(VAR_2->objName.name);
  FUNC_0(VAR_2);
 }
 FUNC_1 (VAR_1->dbiexhdrs);
}

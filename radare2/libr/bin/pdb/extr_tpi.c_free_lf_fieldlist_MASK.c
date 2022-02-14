
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int substructs; } ;
struct TYPE_5__ {struct TYPE_5__* type_info; int (* free_ ) (TYPE_1__*) ;} ;
typedef TYPE_1__ STypeInfo ;
typedef TYPE_2__ SLF_FIELDLIST ;
typedef int RListIter ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(void *VAR_0) {
 STypeInfo *VAR_1 = (STypeInfo *) VAR_0;
 SLF_FIELDLIST *VAR_2 = (SLF_FIELDLIST *) VAR_1->type_info;
 RListIter *VAR_3;
 STypeInfo *VAR_4 = 0;

 VAR_3 = FUNC_4(VAR_2->substructs);
 while (FUNC_3(VAR_3)) {
  VAR_4 = (STypeInfo *) FUNC_2(VAR_3);
  if (VAR_4->free_) {
   VAR_4->free_ (VAR_4);
  }
  if (VAR_4->type_info) {
   FUNC_0(VAR_4->type_info);
  }
  FUNC_0(VAR_4);
 }
 FUNC_1 (VAR_2->substructs);
}

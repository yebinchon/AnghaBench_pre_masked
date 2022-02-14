
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type_info; int (* free_ ) (TYPE_3__*) ;} ;
struct TYPE_6__ {int types; } ;
struct TYPE_5__ {TYPE_3__ type_data; } ;
typedef TYPE_1__ SType ;
typedef TYPE_2__ STpiStream ;
typedef int RListIter ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_7(void *VAR_0) {
 STpiStream *VAR_1 = (STpiStream *)VAR_0;
 RListIter *VAR_2;
 SType *VAR_3 = ((void*)0);

 VAR_2 = FUNC_5 (VAR_1->types);
 while (FUNC_4 (VAR_2)) {
  VAR_3 = (SType *) FUNC_3 (VAR_2);
  if (!VAR_3) {
   continue;
  }
  if (VAR_3->type_data.free_) {
   VAR_3->type_data.free_ (&VAR_3->type_data);
   VAR_3->type_data.free_ = 0;
  }
  if (VAR_3->type_data.type_info) {
   FUNC_1 (VAR_3->type_data.type_info);
   VAR_3->type_data.free_ = 0;
   VAR_3->type_data.type_info = 0;
  }
  FUNC_0 (VAR_3);
 }
 FUNC_2 (VAR_1->types);
}

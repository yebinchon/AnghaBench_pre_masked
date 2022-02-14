
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; } ;
struct TYPE_3__ {scalar_t__ type_info; } ;
typedef TYPE_1__ STypeInfo ;
typedef TYPE_2__ SLF_ARRAY ;


 int FUNC_0 (int *,char**) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, char **VAR_1) {
 STypeInfo *VAR_2 = (STypeInfo *) VAR_0;
 SLF_ARRAY *VAR_3 = (SLF_ARRAY *) VAR_2->type_info;

 FUNC_0(&VAR_3->size, VAR_1);
}

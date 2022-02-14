
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
struct TYPE_6__ {TYPE_1__ str_data; } ;
struct TYPE_8__ {TYPE_2__ val; } ;
struct TYPE_7__ {scalar_t__ type_info; } ;
typedef TYPE_3__ STypeInfo ;
typedef TYPE_4__ SLF_ONEMETHOD ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0) {
 STypeInfo *VAR_1 = (STypeInfo *) VAR_0;
 SLF_ONEMETHOD *VAR_2 = (SLF_ONEMETHOD *) VAR_1->type_info;
 FUNC_0 (VAR_2->val.str_data.name);
}

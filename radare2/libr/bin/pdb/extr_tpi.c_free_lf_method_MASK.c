
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct TYPE_6__ {TYPE_1__ name; } ;
struct TYPE_5__ {scalar_t__ type_info; } ;
typedef TYPE_2__ STypeInfo ;
typedef TYPE_3__ SLF_METHOD ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0) {
 STypeInfo *VAR_1 = (STypeInfo *) VAR_0;
 SLF_METHOD *VAR_2 = (SLF_METHOD *) VAR_1->type_info;
 FUNC_0 (VAR_2->name.name);
}

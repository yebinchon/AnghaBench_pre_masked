
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vt_descriptors; } ;
struct TYPE_3__ {scalar_t__ type_info; } ;
typedef TYPE_1__ STypeInfo ;
typedef TYPE_2__ SLF_VTSHAPE ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(void *VAR_0) {
 STypeInfo *VAR_1 = (STypeInfo *) VAR_0;
 SLF_VTSHAPE *VAR_2 = (SLF_VTSHAPE *) VAR_1->type_info;
 FUNC_0 (VAR_2->vt_descriptors);
 VAR_2->vt_descriptors = 0;
}

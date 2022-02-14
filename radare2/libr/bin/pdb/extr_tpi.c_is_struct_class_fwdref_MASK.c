
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fwdref; } ;
struct TYPE_6__ {TYPE_1__ bits; } ;
struct TYPE_8__ {TYPE_2__ prop; } ;
struct TYPE_7__ {scalar_t__ type_info; } ;
typedef TYPE_3__ STypeInfo ;
typedef TYPE_4__ SLF_STRUCTURE ;



__attribute__((used)) static void FUNC_0(void *VAR_0, int *VAR_1) {
 STypeInfo *VAR_2 = (STypeInfo *) VAR_0;
 SLF_STRUCTURE *VAR_3 = (SLF_STRUCTURE *) VAR_2->type_info;

 *VAR_1 = VAR_3->prop.bits.fwdref;
}

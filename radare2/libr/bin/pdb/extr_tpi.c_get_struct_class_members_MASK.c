
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int * substructs; } ;
struct TYPE_9__ {scalar_t__ field_list; } ;
struct TYPE_6__ {scalar_t__ type_info; } ;
struct TYPE_8__ {TYPE_1__ type_data; } ;
struct TYPE_7__ {scalar_t__ type_info; } ;
typedef TYPE_2__ STypeInfo ;
typedef TYPE_3__ SType ;
typedef TYPE_4__ SLF_STRUCTURE ;
typedef TYPE_5__ SLF_FIELDLIST ;
typedef int RList ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(void *VAR_2, RList **VAR_3) {
 SLF_FIELDLIST *VAR_4 = 0;
 STypeInfo *VAR_5 = (STypeInfo *) VAR_2;
 SLF_STRUCTURE *VAR_6 = (SLF_STRUCTURE *) VAR_5->type_info;
 unsigned int VAR_7 = 0;

 if (VAR_6->field_list == 0) {
  *VAR_3 = 0;
 } else {
  SType *VAR_8 = 0;
  VAR_7 = VAR_6->field_list - VAR_0;
  VAR_8 = (SType *)FUNC_0(VAR_1, VAR_7);
  VAR_4 = (SLF_FIELDLIST *) VAR_8->type_data.type_info;
  *VAR_3 = VAR_4->substructs;
 }
}

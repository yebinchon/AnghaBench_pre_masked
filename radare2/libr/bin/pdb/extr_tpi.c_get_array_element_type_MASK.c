
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int element_type; } ;
struct TYPE_3__ {scalar_t__ type_info; } ;
typedef TYPE_1__ STypeInfo ;
typedef TYPE_2__ SLF_ARRAY ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_2, void **VAR_3) {
 STypeInfo *VAR_4 = (STypeInfo *) VAR_2;
 SLF_ARRAY *VAR_5 = (SLF_ARRAY *) VAR_4->type_info;
 int VAR_6 = VAR_5->element_type;

 if (VAR_6 < VAR_0) {
  *VAR_3 = 0;
 } else {
  VAR_6 -= VAR_0;
  *VAR_3 = FUNC_0(VAR_1, VAR_6);
 }

 return VAR_6;
}

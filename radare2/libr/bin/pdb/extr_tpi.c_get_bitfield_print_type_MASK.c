
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ length; } ;
struct TYPE_6__ {int (* get_base_type ) (TYPE_1__*,void**) ;int (* get_print_type ) (TYPE_1__*,char**) ;scalar_t__ type_info; } ;
struct TYPE_7__ {TYPE_1__ type_data; } ;
typedef TYPE_1__ STypeInfo ;
typedef TYPE_2__ SType ;
typedef TYPE_3__ SLF_BITFIELD ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 (char*,char*,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,void**) ;
 int FUNC_6 (TYPE_1__*,char**) ;

__attribute__((used)) static void FUNC_7(void *VAR_0, char **VAR_1) {
 STypeInfo *VAR_2 = (STypeInfo *) VAR_0;
 SType *VAR_3 = 0;
 char *VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = 1;
 int VAR_7 = 0;
 SLF_BITFIELD *VAR_8 = (SLF_BITFIELD *)VAR_2->type_info;

 VAR_7 = VAR_2->get_base_type (VAR_2, (void **)&VAR_3);
 if (!VAR_3) {
  VAR_6 = 0;
  FUNC_2 (VAR_7, &VAR_4);
 } else {
  VAR_2 = &VAR_3->type_data;
  VAR_2->get_print_type (VAR_2, &VAR_4);
 }

 VAR_5 = FUNC_4 ("bitfield ");
 if (VAR_4) {
  VAR_5 += FUNC_4 (VAR_4);
 }
 VAR_5 += 4;
 *VAR_1 = (char *) FUNC_1 (VAR_5 + 1 + 1);
 if (!(*VAR_1)) {
  if (VAR_6) {
   FUNC_0 (VAR_4);
  }
  return;
 }


 if (VAR_4) {
  FUNC_3 (*VAR_1, "%s %s : %d", "bitfield", VAR_4, (int)VAR_8->length);
 } else {
  FUNC_3 (*VAR_1, "%s : %d", "bitfield", (int)VAR_8->length);
 }

 if (VAR_6) {
  FUNC_0 (VAR_4);
 }
}

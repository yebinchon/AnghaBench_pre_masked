
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* get_utype ) (TYPE_1__*,void**) ;int (* get_print_type ) (TYPE_1__*,char**) ;} ;
struct TYPE_6__ {TYPE_1__ type_data; } ;
typedef TYPE_1__ STypeInfo ;
typedef TYPE_2__ SType ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,void**) ;
 int FUNC_7 (TYPE_1__*,char**) ;

__attribute__((used)) static void FUNC_8(void *VAR_0, char **VAR_1) {
 STypeInfo *VAR_2 = (STypeInfo *) VAR_0;
 SType *VAR_3 = 0;
 char *VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = 1;
 int VAR_7 = 0;

 VAR_7 = VAR_2->get_utype (VAR_2, (void **)&VAR_3);
 if (!VAR_3) {
  VAR_6 = 0;
  FUNC_2 (VAR_7, &VAR_4);
 } else {
  VAR_2 = &VAR_3->type_data;
  VAR_2->get_print_type (VAR_2, &VAR_4);
 }

 VAR_5 = FUNC_5 ("enum ");
 if (VAR_4) {
  VAR_5 += FUNC_5 (VAR_4);
 }
 *VAR_1 = (char *) FUNC_1 (VAR_5 + 1);
 if (!(*VAR_1)) {
  if (VAR_6) {
   FUNC_0 (VAR_4);
  }
  return;
 }

 FUNC_4 (*VAR_1, "enum ");
 if (VAR_4) {
  FUNC_3 (*VAR_1, VAR_4);
 }

 if (VAR_6) {
  FUNC_0 (VAR_4);
 }
}

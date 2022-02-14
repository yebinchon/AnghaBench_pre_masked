
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* get_name ) (TYPE_1__*,char**) ;} ;
typedef TYPE_1__ STypeInfo ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,char**) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, char **VAR_1) {
 STypeInfo *VAR_2 = (STypeInfo *) VAR_0;

 char *VAR_3 = 0, *VAR_4 = 0;
 int VAR_5 = 0;


 VAR_2->get_name (VAR_2, &VAR_3);

 VAR_4 = "union ";
 VAR_5 = FUNC_3 (VAR_4);
 if (VAR_3) {
  VAR_5 += FUNC_3 (VAR_3);
 }
 *VAR_1 = (char *) FUNC_0 (VAR_5 + 1);
 if (!(*VAR_1)) {
  return;
 }

 FUNC_2 (*VAR_1, VAR_4);
 if (VAR_3) {
  FUNC_1 (*VAR_1, VAR_3);
 }





}

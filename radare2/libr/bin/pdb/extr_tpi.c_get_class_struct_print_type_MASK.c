
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ leaf_type; int (* get_name ) (TYPE_1__*,char**) ;} ;
typedef TYPE_1__ STypeInfo ;
typedef scalar_t__ ELeafType ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,char**) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, char **VAR_2) {
 STypeInfo *VAR_3 = (STypeInfo *) VAR_1;
 ELeafType VAR_4;
 char *VAR_5 = 0, *VAR_6 = 0;
 int VAR_7 = 0;

 VAR_4 = VAR_3->leaf_type;
 VAR_3->get_name(VAR_3, &VAR_5);

 if (VAR_4 == VAR_0) {
  VAR_6 = "class ";
 } else {
  VAR_6 = "struct ";
 }
 VAR_7 = FUNC_3(VAR_6);
 if (VAR_5) {
  VAR_7 += FUNC_3 (VAR_5);
 }
 *VAR_2 = (char *) FUNC_0(VAR_7 + 1);
 if (!(*VAR_2)) {
  return;
 }

 FUNC_2(*VAR_2, VAR_6);
 if (VAR_5) {
  FUNC_1 (*VAR_2, VAR_5);
 }





}

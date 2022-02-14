
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int func; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 () ;

int FUNC_3(void) {
 if (!FUNC_0(VAR_2) || !FUNC_0(VAR_2)->func) {
  FUNC_1("inactive", "type=\"op_array\"", "No active op array!");
  return VAR_0;
 }

 if (!FUNC_2()) {
  FUNC_1("inactive", "type=\"symbol_table\"", "No active symbol table!");
  return VAR_0;
 }

 return VAR_1;
}

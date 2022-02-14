
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int module_number; int modifiable; scalar_t__ orig_value; scalar_t__ modified; scalar_t__ value; scalar_t__ name; } ;
typedef TYPE_1__ zend_ini_entry ;
typedef int smart_str ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*,char*,...) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void FUNC_3(zend_ini_entry *VAR_4, smart_str *VAR_5, char *VAR_6, int VAR_7)
{
 char *VAR_8 = "";

 if (VAR_7 == VAR_4->module_number) {
  FUNC_1(VAR_5, "    %sEntry [ %s <", VAR_6, FUNC_0(VAR_4->name));
  if (VAR_4->modifiable == VAR_0) {
   FUNC_2(VAR_5, "ALL");
  } else {
   if (VAR_4->modifiable & VAR_3) {
    FUNC_2(VAR_5, "USER");
    VAR_8 = ",";
   }
   if (VAR_4->modifiable & VAR_1) {
    FUNC_1(VAR_5, "%sPERDIR", VAR_8);
    VAR_8 = ",";
   }
   if (VAR_4->modifiable & VAR_2) {
    FUNC_1(VAR_5, "%sSYSTEM", VAR_8);
   }
  }

  FUNC_2(VAR_5, "> ]\n");
  FUNC_1(VAR_5, "    %s  Current = '%s'\n", VAR_6, VAR_4->value ? FUNC_0(VAR_4->value) : "");
  if (VAR_4->modified) {
   FUNC_1(VAR_5, "    %s  Default = '%s'\n", VAR_6, VAR_4->orig_value ? FUNC_0(VAR_4->orig_value) : "");
  }
  FUNC_1(VAR_5, "    %s}\n", VAR_6);
 }
}

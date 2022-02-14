
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_5__ {int name; scalar_t__ version; int (* info_func ) (TYPE_1__*) ;} ;
typedef TYPE_1__ zend_module_entry ;
struct TYPE_6__ {int phpinfo_as_text; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,char*,scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int ,...) ;
 int FUNC_9 (int ,int ) ;
 int * FUNC_10 (int ,int ) ;
 TYPE_3__ VAR_0 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*) ;

void FUNC_13(zend_module_entry *VAR_1)
{
 if (VAR_1->info_func || VAR_1->version) {
  if (!VAR_0.phpinfo_as_text) {
   zend_string *VAR_2 = FUNC_10(VAR_1->name, FUNC_11(VAR_1->name));

   FUNC_9(FUNC_2(VAR_2), FUNC_1(VAR_2));
   FUNC_8("<h2><a name=\"module_%s\">%s</a></h2>\n", FUNC_2(VAR_2), VAR_1->name);

   FUNC_3(VAR_2);
  } else {
   FUNC_7();
   FUNC_5(1, VAR_1->name);
   FUNC_4();
  }
  if (VAR_1->info_func) {
   VAR_1->info_func(VAR_1);
  } else {
   FUNC_7();
   FUNC_6(2, "Version", VAR_1->version);
   FUNC_4();
   FUNC_0();
  }
 } else {
  if (!VAR_0.phpinfo_as_text) {
   FUNC_8("<tr><td class=\"v\">%s</td></tr>\n", VAR_1->name);
  } else {
   FUNC_8("%s\n", VAR_1->name);
  }
 }
}

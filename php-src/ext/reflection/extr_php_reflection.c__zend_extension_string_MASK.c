
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int URL; int author; int copyright; int version; int name; } ;
typedef TYPE_1__ zend_extension ;
typedef int smart_str ;


 int FUNC_0 (int *,char*,char*,...) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void FUNC_2(smart_str *VAR_0, zend_extension *VAR_1, char *VAR_2)
{
 FUNC_0(VAR_0, "%sZend Extension [ %s ", VAR_2, VAR_1->name);

 if (VAR_1->version) {
  FUNC_0(VAR_0, "%s ", VAR_1->version);
 }
 if (VAR_1->copyright) {
  FUNC_0(VAR_0, "%s ", VAR_1->copyright);
 }
 if (VAR_1->author) {
  FUNC_0(VAR_0, "by %s ", VAR_1->author);
 }
 if (VAR_1->URL) {
  FUNC_0(VAR_0, "<%s> ", VAR_1->URL);
 }

 FUNC_1(VAR_0, "]\n");
}

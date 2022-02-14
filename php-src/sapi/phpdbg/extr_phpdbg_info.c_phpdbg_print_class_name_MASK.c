
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ce_flags; int function_table; int name; int type; } ;
typedef TYPE_1__ zend_class_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,char*,char const*,char const*,int,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(zend_class_entry *VAR_3)
{
 const char *VAR_4 = VAR_3->type == VAR_2 ? "User" : "Internal";
 const char *VAR_5 = (VAR_3->ce_flags & VAR_1) ? "Interface" : (VAR_3->ce_flags & VAR_0) ? "Abstract Class" : "Class";

 FUNC_2("class", "type=\"%s\" flags=\"%s\" name=\"%.*s\" methodcount=\"%d\"", "%s %s %.*s (%d)", VAR_4, VAR_5, (int) FUNC_0(VAR_3->name), FUNC_1(VAR_3->name), FUNC_3(&VAR_3->function_table));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int name; } ;
typedef TYPE_1__ zend_property_info ;
typedef int smart_str ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,char const**,char const**) ;

__attribute__((used)) static void FUNC_3(smart_str *VAR_2, zend_property_info *VAR_3, const char *VAR_4, char* VAR_5)
{
 FUNC_0(VAR_2, "%sProperty [ ", VAR_5);
 if (!VAR_3) {
  FUNC_0(VAR_2, "<dynamic> public $%s", VAR_4);
 } else {
  if (!(VAR_3->flags & VAR_1)) {
   FUNC_1(VAR_2, "<default> ");
  }


  switch (VAR_3->flags & VAR_0) {
   case 128:
    FUNC_1(VAR_2, "public ");
    break;
   case 130:
    FUNC_1(VAR_2, "private ");
    break;
   case 129:
    FUNC_1(VAR_2, "protected ");
    break;
  }
  if (VAR_3->flags & VAR_1) {
   FUNC_1(VAR_2, "static ");
  }
  if (!VAR_4) {
   const char *VAR_6;
   FUNC_2(VAR_3->name, &VAR_6, &VAR_4);
  }
  FUNC_0(VAR_2, "$%s", VAR_4);
 }

 FUNC_1(VAR_2, " ]\n");
}

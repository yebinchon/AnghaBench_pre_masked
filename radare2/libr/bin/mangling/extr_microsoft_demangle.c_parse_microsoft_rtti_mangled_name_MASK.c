
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type_str; } ;
typedef TYPE_1__ STypeCodeStr ;
typedef int EDemanglerErr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static EDemanglerErr FUNC_5(char *VAR_2, char **VAR_3) {
 EDemanglerErr VAR_4 = VAR_0;
 char *VAR_5 = ((void*)0);
 if (!FUNC_4 (VAR_2, "AT", 2)) {
  VAR_5 = "union";
 } else if (!FUNC_4 (VAR_2, "AU", 2)) {
  VAR_5 = "struct";
 } else if (!FUNC_4 (VAR_2, "AV", 2)) {
  VAR_5 = "class";
 } else if (!FUNC_4 (VAR_2, "AW", 2)) {
  VAR_5 = "enum";
 } else {
  VAR_4 = VAR_1;
  goto parse_microsoft_rtti_mangled_name_err;
 }
 STypeCodeStr VAR_6;
 FUNC_2 (&VAR_6);
 int VAR_7 = FUNC_1 (VAR_2 + 2, &VAR_6, ((void*)0));
 if (!VAR_7) {
  VAR_4 = VAR_1;
  goto parse_microsoft_rtti_mangled_name_err;
 }

 *VAR_3 = FUNC_3 ("%s %s", VAR_5, VAR_6.type_str);
 FUNC_0 (VAR_6.type_str);

parse_microsoft_rtti_mangled_name_err:
 return VAR_4;
}

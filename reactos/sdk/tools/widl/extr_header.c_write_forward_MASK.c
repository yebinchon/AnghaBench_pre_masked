
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* c_name; int namespace; int name; } ;
typedef TYPE_1__ type_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(FILE *VAR_0, type_t *VAR_1)
{
  FUNC_0(VAR_0, "#ifndef __%s_FWD_DEFINED__\n", VAR_1->c_name);
  FUNC_0(VAR_0, "#define __%s_FWD_DEFINED__\n", VAR_1->c_name);
  FUNC_0(VAR_0, "typedef interface %s %s;\n", VAR_1->c_name, VAR_1->c_name);
  FUNC_0(VAR_0, "#ifdef __cplusplus\n");
  FUNC_3(VAR_0, VAR_1->namespace);
  FUNC_1(VAR_0, 0, "interface %s;", VAR_1->name);
  FUNC_2(VAR_0, VAR_1->namespace);
  FUNC_0(VAR_0, "#endif /* __cplusplus */\n");
  FUNC_0(VAR_0, "#endif\n\n" );
}

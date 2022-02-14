
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ type_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(FILE *VAR_0, type_t *VAR_1)
{
  FUNC_0(VAR_0, "#ifndef __%s_FWD_DEFINED__\n", VAR_1->name);
  FUNC_0(VAR_0, "#define __%s_FWD_DEFINED__\n", VAR_1->name);
  FUNC_0(VAR_0, "#ifdef __cplusplus\n");
  FUNC_0(VAR_0, "typedef class %s %s;\n", VAR_1->name, VAR_1->name);
  FUNC_0(VAR_0, "#else\n");
  FUNC_0(VAR_0, "typedef struct %s %s;\n", VAR_1->name, VAR_1->name);
  FUNC_0(VAR_0, "#endif /* defined __cplusplus */\n");
  FUNC_0(VAR_0, "#endif /* defined __%s_FWD_DEFINED__ */\n\n", VAR_1->name );
}

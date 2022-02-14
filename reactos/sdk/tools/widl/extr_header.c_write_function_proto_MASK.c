
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_5__* type; } ;
typedef TYPE_1__ var_t ;
struct TYPE_9__ {int name; } ;
typedef TYPE_2__ type_t ;
struct TYPE_10__ {int attrs; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int *,scalar_t__,int ,int ,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(FILE *VAR_2, const type_t *VAR_3, const var_t *VAR_4, const char *VAR_5)
{
  const char *VAR_6 = FUNC_1(VAR_4->type->attrs, VAR_0);

  if (!VAR_6) VAR_6 = "__cdecl";

  FUNC_6(VAR_2, FUNC_3(VAR_4->type));
  FUNC_0(VAR_2, " %s ", VAR_6);
  FUNC_0(VAR_2, "%s%s(\n", VAR_5, FUNC_2(VAR_4));
  if (FUNC_4(VAR_4->type))
    FUNC_5(VAR_2, FUNC_4(VAR_4->type), VAR_3->name, 0, VAR_1);
  else
    FUNC_0(VAR_2, "    void");
  FUNC_0(VAR_2, ");\n\n");
}

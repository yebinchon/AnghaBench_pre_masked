
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; int attrs; } ;
typedef TYPE_1__ type_t ;
typedef int UUID ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int * FUNC_1 (int ,int ) ;
 char* FUNC_2 (int const*) ;
 int FUNC_3 (int *,char*,char*,int const*) ;
 int FUNC_4 (int *,TYPE_1__*,int const*) ;

__attribute__((used)) static void FUNC_5(FILE *VAR_1, type_t *VAR_2)
{
  const UUID *VAR_3 = FUNC_1(VAR_2->attrs, VAR_0);

  FUNC_0(VAR_1, "/*****************************************************************************\n");
  FUNC_0(VAR_1, " * %s coclass\n", VAR_2->name);
  FUNC_0(VAR_1, " */\n\n");
  if (VAR_3)
      FUNC_3(VAR_1, "CLSID", VAR_2->name, VAR_3);
  FUNC_0(VAR_1, "\n#ifdef __cplusplus\n");
  if (VAR_3)
  {
      FUNC_0(VAR_1, "class DECLSPEC_UUID(\"%s\") %s;\n", FUNC_2(VAR_3), VAR_2->name);
      FUNC_4(VAR_1, VAR_2, VAR_3);
  }
  else
  {
      FUNC_0(VAR_1, "class %s;\n", VAR_2->name);
  }
  FUNC_0(VAR_1, "#endif\n");
  FUNC_0(VAR_1, "\n");
}

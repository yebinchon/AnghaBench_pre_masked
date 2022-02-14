
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {char* name; int attrs; void* written; int defined; int namespace; } ;
typedef TYPE_1__ type_t ;
typedef enum name_type { ____Placeholder_name_type } name_type ;
typedef int FILE ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 TYPE_1__* FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 char* FUNC_13 (TYPE_1__*,int) ;
 int const FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 TYPE_1__* FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (int *,int ,char*) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *,TYPE_1__*) ;

void FUNC_23(FILE *VAR_3, type_t *VAR_4, enum name_type VAR_5, int VAR_6)
{
  const char *VAR_7;

  if (!VAR_3) return;

  VAR_7 = FUNC_13(VAR_4, VAR_5);

  if (FUNC_3(VAR_4->attrs, VAR_0) &&
      (FUNC_16(VAR_4) || !FUNC_5(VAR_4)))
    FUNC_1(VAR_3, "const ");

  if (FUNC_16(VAR_4)) FUNC_1(VAR_3, "%s", VAR_4->name);
  else {
    switch (FUNC_15(VAR_4)) {
      case 135:
        if (!VAR_6 && VAR_4->defined && !VAR_4->written) {
          if (VAR_7) FUNC_1(VAR_3, "enum %s {\n", VAR_7);
          else FUNC_1(VAR_3, "enum {\n");
          VAR_4->written = VAR_1;
          VAR_2++;
          FUNC_20(VAR_3, FUNC_12(VAR_4), FUNC_4(VAR_4->namespace) ? ((void*)0) : VAR_4->name);
          FUNC_2(VAR_3, -1);
          FUNC_1(VAR_3, "}");
        }
        else FUNC_1(VAR_3, "enum %s", VAR_7 ? VAR_7 : "");
        break;
      case 130:
      case 136:
        if (!VAR_6 && VAR_4->defined && !VAR_4->written) {
          if (VAR_7) FUNC_1(VAR_3, "struct %s {\n", VAR_7);
          else FUNC_1(VAR_3, "struct {\n");
          VAR_4->written = VAR_1;
          VAR_2++;
          if (FUNC_14(VAR_4) != 130)
            FUNC_21(VAR_3, FUNC_11(VAR_4));
          else
            FUNC_21(VAR_3, FUNC_18(VAR_4));
          FUNC_2(VAR_3, -1);
          FUNC_1(VAR_3, "}");
        }
        else FUNC_1(VAR_3, "struct %s", VAR_7 ? VAR_7 : "");
        break;
      case 129:
        if (!VAR_6 && VAR_4->defined && !VAR_4->written) {
          if (VAR_4->name) FUNC_1(VAR_3, "union %s {\n", VAR_4->name);
          else FUNC_1(VAR_3, "union {\n");
          VAR_4->written = VAR_1;
          VAR_2++;
          FUNC_21(VAR_3, FUNC_19(VAR_4));
          FUNC_2(VAR_3, -1);
          FUNC_1(VAR_3, "}");
        }
        else FUNC_1(VAR_3, "union %s", VAR_4->name ? VAR_4->name : "");
        break;
      case 131:
      {
        FUNC_23(VAR_3, FUNC_17(VAR_4), VAR_5, VAR_6);
        FUNC_22(VAR_3, FUNC_17(VAR_4));
        if (FUNC_3(VAR_4->attrs, VAR_0)) FUNC_1(VAR_3, "const ");
        break;
      }
      case 155:
        if (VAR_4->name && FUNC_7(VAR_4))
          FUNC_1(VAR_3, "%s", VAR_4->name);
        else
        {
          FUNC_23(VAR_3, FUNC_6(VAR_4), VAR_5, VAR_6);
          if (FUNC_7(VAR_4))
            FUNC_22(VAR_3, FUNC_6(VAR_4));
        }
        break;
      case 154:
        if (FUNC_9(VAR_4) != 144 &&
            FUNC_9(VAR_4) != 142 &&
            FUNC_9(VAR_4) != 140 &&
            FUNC_9(VAR_4) != 147)
        {
          if (FUNC_8(VAR_4) < 0) FUNC_1(VAR_3, "signed ");
          else if (FUNC_8(VAR_4) > 0) FUNC_1(VAR_3, "unsigned ");
        }
        switch (FUNC_9(VAR_4))
        {
        case 141: FUNC_1(VAR_3, "small"); break;
        case 145: FUNC_1(VAR_3, "short"); break;
        case 146: FUNC_1(VAR_3, "int"); break;
        case 143: FUNC_1(VAR_3, "__int3264"); break;
        case 153: FUNC_1(VAR_3, "byte"); break;
        case 152: FUNC_1(VAR_3, "char"); break;
        case 139: FUNC_1(VAR_3, "wchar_t"); break;
        case 149: FUNC_1(VAR_3, "float"); break;
        case 151: FUNC_1(VAR_3, "double"); break;
        case 150: FUNC_1(VAR_3, "error_status_t"); break;
        case 148: FUNC_1(VAR_3, "handle_t"); break;
        case 144:
          if (FUNC_8(VAR_4) > 0)
            FUNC_1(VAR_3, "UINT32");
          else
            FUNC_1(VAR_3, "INT32");
          break;
        case 140:
          if (FUNC_8(VAR_4) > 0)
            FUNC_1(VAR_3, "ULONG");
          else
            FUNC_1(VAR_3, "LONG");
          break;
        case 142:
          if (FUNC_8(VAR_4) > 0)
            FUNC_1(VAR_3, "UINT64");
          else
            FUNC_1(VAR_3, "INT64");
          break;
        case 147:
          if (FUNC_8(VAR_4) > 0)
            FUNC_1(VAR_3, "MIDL_uhyper");
          else
            FUNC_1(VAR_3, "hyper");
          break;
        }
        break;
      case 133:
      case 132:
      case 137:
        FUNC_1(VAR_3, "%s", VAR_4->name);
        break;
      case 128:
        FUNC_1(VAR_3, "void");
        break;
      case 138:
        FUNC_23(VAR_3, FUNC_10(VAR_4), VAR_5, VAR_6);
        break;
      case 156:
      case 134:

        FUNC_0(0);
        break;
    }
  }
}

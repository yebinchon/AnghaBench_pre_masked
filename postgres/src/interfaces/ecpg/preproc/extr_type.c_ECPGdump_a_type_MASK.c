
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct variable {int const brace_level; TYPE_1__* type; } ;
struct TYPE_4__ {struct ECPGtype* element; } ;
struct ECPGtype {int type; char* type_name; char* size; int counter; TYPE_2__ u; } ;
struct TYPE_3__ {int type; char* type_name; } ;
typedef int FILE ;


 int FUNC_0 (int *,char const*,scalar_t__,char*,char*,char const*,char const*,int ) ;
 int FUNC_1 (int *,char const*,char const*,char*,struct ECPGtype*,struct ECPGtype*,char const*,char const*) ;
 scalar_t__ VAR_0 ;


 int VAR_1 ;

 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_3 (char*) ;
 struct variable* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int VAR_9 ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (int ,int ,char*,...) ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (char*,char*) ;

void
FUNC_10(FILE *VAR_10, const char *VAR_11, struct ECPGtype *VAR_12, const int VAR_13,
    const char *VAR_14, struct ECPGtype *VAR_15, const int VAR_16,
    const char *VAR_17, const char *VAR_18,
    char *VAR_19, const char *VAR_20,
    const char *VAR_21)
{
 struct variable *VAR_22;

 if (VAR_12->type != 130 && VAR_12->type != VAR_2 &&
  VAR_12->type != 131 && VAR_12->type != VAR_1 &&
  VAR_13 >= 0)
 {
  char *VAR_23;

  VAR_23 = FUNC_6(VAR_11);
  VAR_22 = FUNC_4(VAR_23);
  FUNC_5(VAR_23);

  if ((VAR_22->type->type != VAR_12->type) ||
   (VAR_22->type->type_name && !VAR_12->type_name) ||
   (!VAR_22->type->type_name && VAR_12->type_name) ||
   (VAR_22->type->type_name && VAR_12->type_name && FUNC_9(VAR_22->type->type_name, VAR_12->type_name) != 0))
   FUNC_7(VAR_8, VAR_3, "variable \"%s\" is hidden by a local variable of a different type", VAR_11);
  else if (VAR_22->brace_level != VAR_13)
   FUNC_7(VAR_8, VAR_4, "variable \"%s\" is hidden by a local variable", VAR_11);

  if (VAR_14 && VAR_15 && VAR_15->type != VAR_0 && VAR_16 >= 0)
  {
   VAR_23 = FUNC_6(VAR_14);
   VAR_22 = FUNC_4(VAR_23);
   FUNC_5(VAR_23);

   if ((VAR_22->type->type != VAR_15->type) ||
    (VAR_22->type->type_name && !VAR_15->type_name) ||
    (!VAR_22->type->type_name && VAR_15->type_name) ||
    (VAR_22->type->type_name && VAR_15->type_name && FUNC_9(VAR_22->type->type_name, VAR_15->type_name) != 0))
    FUNC_7(VAR_8, VAR_3, "indicator variable \"%s\" is hidden by a local variable of a different type", VAR_14);
   else if (VAR_22->brace_level != VAR_16)
    FUNC_7(VAR_8, VAR_4, "indicator variable \"%s\" is hidden by a local variable", VAR_14);
  }
 }

 switch (VAR_12->type)
 {
  case 132:
   if (VAR_9 && VAR_15->type != 132)
    FUNC_8(VAR_5, "indicator for array/pointer has to be array/pointer");
   switch (VAR_12->u.element->type)
   {
    case 132:
     FUNC_7(VAR_8, VAR_3, "nested arrays are not supported (except strings)");
     break;
    case 129:
    case 128:
     FUNC_1(VAR_10, VAR_11,
           VAR_14,
           VAR_12->size,
           VAR_12->u.element,
           (VAR_15 == ((void*)0)) ? ((void*)0) : ((VAR_15->type == VAR_0) ? VAR_15 : VAR_15->u.element),
           VAR_17, VAR_18);
     break;
    default:
     if (!FUNC_2(VAR_12->u.element->type))
      FUNC_3("internal error: unknown datatype, please report this to <pgsql-bugs@lists.postgresql.org>");

     FUNC_0(VAR_10, VAR_11,
           VAR_12->u.element->type,
           VAR_12->u.element->size, VAR_12->size, VAR_20 ? VAR_20 : ((void*)0),
           VAR_17, VAR_12->u.element->counter);

     if (VAR_15 != ((void*)0))
     {
      if (VAR_15->type == VAR_0)
      {
       char *VAR_24 = FUNC_6("-1");

       FUNC_0(VAR_10, VAR_14, VAR_15->type, VAR_15->size, VAR_24, ((void*)0), VAR_18, 0);
       FUNC_5(VAR_24);
      }
      else
      {
       FUNC_0(VAR_10, VAR_14, VAR_15->u.element->type,
             VAR_15->u.element->size, VAR_15->size, ((void*)0), VAR_18, 0);
      }
     }
   }
   break;
  case 129:
   {
    char *VAR_25 = FUNC_6("1");

    if (VAR_9 && VAR_15->type != 129)
     FUNC_8(VAR_7, "indicator for struct has to be a struct");

    FUNC_1(VAR_10, VAR_11, VAR_14, VAR_25, VAR_12, VAR_15, VAR_17, VAR_18);
    FUNC_5(VAR_25);
   }
   break;
  case 128:
   FUNC_3("type of union has to be specified");
   break;
  case 131:
   {




    char *VAR_26 = FUNC_6("1");
    char *VAR_27 = FUNC_6("1");
    char *VAR_28 = FUNC_6("-1");

    if (VAR_9 && (VAR_15->type == 129 || VAR_15->type == 132))
     FUNC_8(VAR_6, "indicator for simple data type has to be simple");

    FUNC_0(VAR_10, VAR_11, VAR_12->type, VAR_26, (VAR_19 && FUNC_9(VAR_19, "0") != 0) ? VAR_19 : VAR_27, VAR_20, VAR_17, 0);
    if (VAR_15 != ((void*)0))
     FUNC_0(VAR_10, VAR_14, VAR_15->type, VAR_15->size, (VAR_19 && FUNC_9(VAR_19, "0") != 0) ? VAR_19 : VAR_28, VAR_21, VAR_18, 0);

    FUNC_5(VAR_26);
    FUNC_5(VAR_27);
    FUNC_5(VAR_28);
   }
   break;
  case 130:
   {




    char *VAR_29 = FUNC_6("-1");
    char *VAR_30 = FUNC_6("-1");

    if (VAR_9 && (VAR_15->type == 129 || VAR_15->type == 132))
     FUNC_8(VAR_6, "indicator for simple data type has to be simple");

    FUNC_0(VAR_10, VAR_11, VAR_12->type, ((void*)0), VAR_29, ((void*)0), VAR_17, 0);
    if (VAR_15 != ((void*)0))
     FUNC_0(VAR_10, VAR_14, VAR_15->type, VAR_15->size, VAR_30, ((void*)0), VAR_18, 0);

    FUNC_5(VAR_29);
    FUNC_5(VAR_30);
   }
   break;
  default:
   {




    char *VAR_31 = FUNC_6("-1");
    char *VAR_32 = FUNC_6("-1");

    if (VAR_9 && (VAR_15->type == 129 || VAR_15->type == 132))
     FUNC_8(VAR_6, "indicator for simple data type has to be simple");

    FUNC_0(VAR_10, VAR_11, VAR_12->type, VAR_12->size, (VAR_19 && FUNC_9(VAR_19, "0") != 0) ? VAR_19 : VAR_31, VAR_20, VAR_17, VAR_12->counter);
    if (VAR_15 != ((void*)0))
     FUNC_0(VAR_10, VAR_14, VAR_15->type, VAR_15->size, (VAR_19 && FUNC_9(VAR_19, "0") != 0) ? VAR_19 : VAR_32, VAR_21, VAR_18, 0);

    FUNC_5(VAR_31);
    FUNC_5(VAR_32);
   }
   break;
 }
}

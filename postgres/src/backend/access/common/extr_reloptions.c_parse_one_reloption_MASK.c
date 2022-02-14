
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* string_val; int enum_val; int real_val; int int_val; int bool_val; } ;
struct TYPE_12__ {int isset; TYPE_2__* gen; TYPE_1__ values; } ;
typedef TYPE_3__ relopt_value ;
struct TYPE_13__ {int (* validate_cb ) (char*) ;} ;
typedef TYPE_4__ relopt_string ;
struct TYPE_14__ {int max; int min; } ;
typedef TYPE_5__ relopt_real ;
struct TYPE_15__ {int max; int min; } ;
typedef TYPE_6__ relopt_int ;
struct TYPE_16__ {int symbol_val; int string_val; } ;
typedef TYPE_7__ relopt_enum_elt_def ;
struct TYPE_17__ {int default_val; int detailmsg; TYPE_7__* members; } ;
typedef TYPE_8__ relopt_enum ;
struct TYPE_11__ {char* name; int namelen; int type; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,char*,...) ;
 int FUNC_7 (char*,char*,int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char*,int *) ;
 int FUNC_10 (char*,int *,int ,int *) ;
 int FUNC_11 (char*,int *,int ,int *) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void
FUNC_15(relopt_value *VAR_2, char *VAR_3, int VAR_4,
     bool VAR_5)
{
 char *VAR_6;
 int VAR_7;
 bool VAR_8;
 bool VAR_9 = 0;

 if (VAR_2->isset && VAR_5)
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_6("parameter \"%s\" specified more than once",
      VAR_2->gen->name)));

 VAR_7 = VAR_4 - VAR_2->gen->namelen - 1;
 VAR_6 = (char *) FUNC_8(VAR_7 + 1);
 FUNC_7(VAR_6, VAR_3 + VAR_2->gen->namelen + 1, VAR_7);
 VAR_6[VAR_7] = '\0';

 switch (VAR_2->gen->type)
 {
  case 132:
   {
    VAR_8 = FUNC_9(VAR_6, &VAR_2->values.bool_val);
    if (VAR_5 && !VAR_8)
     FUNC_2(VAR_1,
       (FUNC_3(VAR_0),
        FUNC_6("invalid value for boolean option \"%s\": %s",
         VAR_2->gen->name, VAR_6)));
   }
   break;
  case 130:
   {
    relopt_int *VAR_10 = (relopt_int *) VAR_2->gen;

    VAR_8 = FUNC_10(VAR_6, &VAR_2->values.int_val, 0, ((void*)0));
    if (VAR_5 && !VAR_8)
     FUNC_2(VAR_1,
       (FUNC_3(VAR_0),
        FUNC_6("invalid value for integer option \"%s\": %s",
         VAR_2->gen->name, VAR_6)));
    if (VAR_5 && (VAR_2->values.int_val < VAR_10->min ||
         VAR_2->values.int_val > VAR_10->max))
     FUNC_2(VAR_1,
       (FUNC_3(VAR_0),
        FUNC_6("value %s out of bounds for option \"%s\"",
         VAR_6, VAR_2->gen->name),
        FUNC_4("Valid values are between \"%d\" and \"%d\".",
            VAR_10->min, VAR_10->max)));
   }
   break;
  case 129:
   {
    relopt_real *VAR_11 = (relopt_real *) VAR_2->gen;

    VAR_8 = FUNC_11(VAR_6, &VAR_2->values.real_val, 0, ((void*)0));
    if (VAR_5 && !VAR_8)
     FUNC_2(VAR_1,
       (FUNC_3(VAR_0),
        FUNC_6("invalid value for floating point option \"%s\": %s",
         VAR_2->gen->name, VAR_6)));
    if (VAR_5 && (VAR_2->values.real_val < VAR_11->min ||
         VAR_2->values.real_val > VAR_11->max))
     FUNC_2(VAR_1,
       (FUNC_3(VAR_0),
        FUNC_6("value %s out of bounds for option \"%s\"",
         VAR_6, VAR_2->gen->name),
        FUNC_4("Valid values are between \"%f\" and \"%f\".",
            VAR_11->min, VAR_11->max)));
   }
   break;
  case 131:
   {
    relopt_enum *VAR_12 = (relopt_enum *) VAR_2->gen;
    relopt_enum_elt_def *VAR_13;

    VAR_8 = 0;
    for (VAR_13 = VAR_12->members; VAR_13->string_val; VAR_13++)
    {
     if (FUNC_13(VAR_6, VAR_13->string_val) == 0)
     {
      VAR_2->values.enum_val = VAR_13->symbol_val;
      VAR_8 = 1;
      break;
     }
    }
    if (VAR_5 && !VAR_8)
     FUNC_2(VAR_1,
       (FUNC_3(VAR_0),
        FUNC_6("invalid value for enum option \"%s\": %s",
         VAR_2->gen->name, VAR_6),
        VAR_12->detailmsg ?
        FUNC_5("%s", FUNC_0(VAR_12->detailmsg)) : 0));





    if (!VAR_8)
     VAR_2->values.enum_val = VAR_12->default_val;
   }
   break;
  case 128:
   {
    relopt_string *VAR_14 = (relopt_string *) VAR_2->gen;

    VAR_2->values.string_val = VAR_6;
    VAR_9 = 1;
    if (VAR_5 && VAR_14->validate_cb)
     (VAR_14->validate_cb) (VAR_6);
    VAR_8 = 1;
   }
   break;
  default:
   FUNC_1(VAR_1, "unsupported reloption type %d", VAR_2->gen->type);
   VAR_8 = 1;
   break;
 }

 if (VAR_8)
  VAR_2->isset = 1;
 if (!VAR_9)
  FUNC_12(VAR_6);
}

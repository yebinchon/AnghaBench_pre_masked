
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union config_var_val {int enumval; int * stringval; int realval; int intval; int boolval; } ;
struct TYPE_6__ {int flags; } ;
struct config_string {TYPE_3__ gen; } ;
struct TYPE_5__ {int flags; } ;
struct config_real {int max; int min; TYPE_2__ gen; } ;
struct TYPE_4__ {int flags; } ;
struct config_int {int max; int min; TYPE_1__ gen; } ;
struct config_generic {int vartype; } ;
struct config_enum {int dummy; } ;
struct config_bool {int dummy; } ;
typedef int GucSource ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (char const*) ;
 int FUNC_1 (struct config_bool*,int *,void**,int ,int) ;
 int FUNC_2 (struct config_enum*,int *,void**,int ,int) ;
 int FUNC_3 (struct config_int*,int *,void**,int ,int) ;
 int FUNC_4 (struct config_real*,int *,void**,int ,int) ;
 int FUNC_5 (struct config_string*,int **,void**,int ,int) ;
 char* FUNC_6 (struct config_enum*,char*,char*,char*) ;
 int FUNC_7 (struct config_enum*,char const*,int *) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,char const*,...) ;
 int FUNC_12 (int *) ;
 char* FUNC_13 (int ) ;
 int * FUNC_14 (int,char const*) ;
 int FUNC_15 (char const*,int *) ;
 int FUNC_16 (char const*,int *,int ,char const**) ;
 int FUNC_17 (char const*,int *,int ,char const**) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int ,int) ;

__attribute__((used)) static bool
FUNC_21(struct config_generic *VAR_2,
       const char *VAR_3, const char *VAR_4,
       GucSource VAR_5, int VAR_6,
       union config_var_val *VAR_7, void **VAR_8)
{
 switch (VAR_2->vartype)
 {
  case 132:
   {
    struct config_bool *VAR_9 = (struct config_bool *) VAR_2;

    if (!FUNC_15(VAR_4, &VAR_7->boolval))
    {
     FUNC_8(VAR_6,
       (FUNC_9(VAR_0),
        FUNC_11("parameter \"%s\" requires a Boolean value",
         VAR_3)));
     return 0;
    }

    if (!FUNC_1(VAR_9, &VAR_7->boolval, VAR_8,
            VAR_5, VAR_6))
     return 0;
   }
   break;
  case 130:
   {
    struct config_int *VAR_10 = (struct config_int *) VAR_2;
    const char *VAR_11;

    if (!FUNC_16(VAR_4, &VAR_7->intval,
          VAR_10->gen.flags, &VAR_11))
    {
     FUNC_8(VAR_6,
       (FUNC_9(VAR_0),
        FUNC_11("invalid value for parameter \"%s\": \"%s\"",
         VAR_3, VAR_4),
        VAR_11 ? FUNC_10("%s", FUNC_0(VAR_11)) : 0));
     return 0;
    }

    if (VAR_7->intval < VAR_10->min || VAR_7->intval > VAR_10->max)
    {
     const char *VAR_12 = FUNC_13(VAR_10->gen.flags);

     FUNC_8(VAR_6,
       (FUNC_9(VAR_0),
        FUNC_11("%d%s%s is outside the valid range for parameter \"%s\" (%d .. %d)",
         VAR_7->intval,
         VAR_12 ? " " : "",
         VAR_12 ? VAR_12 : "",
         VAR_3,
         VAR_10->min, VAR_10->max)));
     return 0;
    }

    if (!FUNC_3(VAR_10, &VAR_7->intval, VAR_8,
           VAR_5, VAR_6))
     return 0;
   }
   break;
  case 129:
   {
    struct config_real *VAR_13 = (struct config_real *) VAR_2;
    const char *VAR_14;

    if (!FUNC_17(VAR_4, &VAR_7->realval,
        VAR_13->gen.flags, &VAR_14))
    {
     FUNC_8(VAR_6,
       (FUNC_9(VAR_0),
        FUNC_11("invalid value for parameter \"%s\": \"%s\"",
         VAR_3, VAR_4),
        VAR_14 ? FUNC_10("%s", FUNC_0(VAR_14)) : 0));
     return 0;
    }

    if (VAR_7->realval < VAR_13->min || VAR_7->realval > VAR_13->max)
    {
     const char *VAR_15 = FUNC_13(VAR_13->gen.flags);

     FUNC_8(VAR_6,
       (FUNC_9(VAR_0),
        FUNC_11("%g%s%s is outside the valid range for parameter \"%s\" (%g .. %g)",
         VAR_7->realval,
         VAR_15 ? " " : "",
         VAR_15 ? VAR_15 : "",
         VAR_3,
         VAR_13->min, VAR_13->max)));
     return 0;
    }

    if (!FUNC_4(VAR_13, &VAR_7->realval, VAR_8,
            VAR_5, VAR_6))
     return 0;
   }
   break;
  case 128:
   {
    struct config_string *VAR_16 = (struct config_string *) VAR_2;





    VAR_7->stringval = FUNC_14(VAR_6, VAR_4);
    if (VAR_7->stringval == ((void*)0))
     return 0;





    if (VAR_16->gen.flags & VAR_1)
     FUNC_20(VAR_7->stringval,
          FUNC_19(VAR_7->stringval),
          1);

    if (!FUNC_5(VAR_16, &VAR_7->stringval, VAR_8,
           VAR_5, VAR_6))
    {
     FUNC_12(VAR_7->stringval);
     VAR_7->stringval = ((void*)0);
     return 0;
    }
   }
   break;
  case 131:
   {
    struct config_enum *VAR_17 = (struct config_enum *) VAR_2;

    if (!FUNC_7(VAR_17, VAR_4, &VAR_7->enumval))
    {
     char *VAR_18;

     VAR_18 = FUNC_6(VAR_17,
               "Available values: ",
               ".", ", ");

     FUNC_8(VAR_6,
       (FUNC_9(VAR_0),
        FUNC_11("invalid value for parameter \"%s\": \"%s\"",
         VAR_3, VAR_4),
        VAR_18 ? FUNC_10("%s", FUNC_0(VAR_18)) : 0));

     if (VAR_18)
      FUNC_18(VAR_18);
     return 0;
    }

    if (!FUNC_2(VAR_17, &VAR_7->enumval, VAR_8,
            VAR_5, VAR_6))
     return 0;
   }
   break;
 }

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_string {char* boot_val; char* reset_val; } ;
struct config_real {int min; int max; int boot_val; int reset_val; } ;
struct config_int {int min; int max; int boot_val; int reset_val; } ;
struct config_generic {int flags; char* name; size_t group; size_t context; size_t vartype; size_t source; char* sourcefile; int sourceline; int status; int long_desc; int short_desc; } ;
struct config_enum {int reset_val; int boot_val; } ;
struct config_bool {int reset_val; int boot_val; } ;
typedef int buffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 char** VAR_4 ;
 char** VAR_5 ;





 size_t VAR_6 ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (struct config_generic*,int) ;
 char* FUNC_4 (struct config_enum*,char*,char*,char*) ;
 char* FUNC_5 (struct config_enum*,int ) ;
 int * VAR_7 ;
 char** VAR_8 ;
 char* FUNC_6 (int) ;
 struct config_generic** VAR_9 ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int VAR_10 ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*,int,char*,int) ;

void
FUNC_10(int VAR_11, const char **VAR_12, bool *VAR_13)
{
 char VAR_14[256];
 struct config_generic *VAR_15;


 FUNC_0((VAR_11 >= 0) && (VAR_11 < VAR_10));

 VAR_15 = VAR_9[VAR_11];

 if (VAR_13)
 {
  if ((VAR_15->flags & VAR_1) ||
   ((VAR_15->flags & VAR_3) &&
    !FUNC_7(FUNC_1(), VAR_0)))
   *VAR_13 = 1;
  else
   *VAR_13 = 0;
 }




 VAR_12[0] = VAR_15->name;


 VAR_12[1] = FUNC_3(VAR_15, 0);


 VAR_12[2] = FUNC_6(VAR_15->flags);


 VAR_12[3] = FUNC_2(VAR_7[VAR_15->group]);


 VAR_12[4] = FUNC_2(VAR_15->short_desc);


 VAR_12[5] = FUNC_2(VAR_15->long_desc);


 VAR_12[6] = VAR_4[VAR_15->context];


 VAR_12[7] = VAR_8[VAR_15->vartype];


 VAR_12[8] = VAR_5[VAR_15->source];


 switch (VAR_15->vartype)
 {
  case 132:
   {
    struct config_bool *VAR_16 = (struct config_bool *) VAR_15;


    VAR_12[9] = ((void*)0);


    VAR_12[10] = ((void*)0);


    VAR_12[11] = ((void*)0);


    VAR_12[12] = FUNC_8(VAR_16->boot_val ? "on" : "off");


    VAR_12[13] = FUNC_8(VAR_16->reset_val ? "on" : "off");
   }
   break;

  case 130:
   {
    struct config_int *VAR_17 = (struct config_int *) VAR_15;


    FUNC_9(VAR_14, sizeof(VAR_14), "%d", VAR_17->min);
    VAR_12[9] = FUNC_8(VAR_14);


    FUNC_9(VAR_14, sizeof(VAR_14), "%d", VAR_17->max);
    VAR_12[10] = FUNC_8(VAR_14);


    VAR_12[11] = ((void*)0);


    FUNC_9(VAR_14, sizeof(VAR_14), "%d", VAR_17->boot_val);
    VAR_12[12] = FUNC_8(VAR_14);


    FUNC_9(VAR_14, sizeof(VAR_14), "%d", VAR_17->reset_val);
    VAR_12[13] = FUNC_8(VAR_14);
   }
   break;

  case 129:
   {
    struct config_real *VAR_18 = (struct config_real *) VAR_15;


    FUNC_9(VAR_14, sizeof(VAR_14), "%g", VAR_18->min);
    VAR_12[9] = FUNC_8(VAR_14);


    FUNC_9(VAR_14, sizeof(VAR_14), "%g", VAR_18->max);
    VAR_12[10] = FUNC_8(VAR_14);


    VAR_12[11] = ((void*)0);


    FUNC_9(VAR_14, sizeof(VAR_14), "%g", VAR_18->boot_val);
    VAR_12[12] = FUNC_8(VAR_14);


    FUNC_9(VAR_14, sizeof(VAR_14), "%g", VAR_18->reset_val);
    VAR_12[13] = FUNC_8(VAR_14);
   }
   break;

  case 128:
   {
    struct config_string *VAR_19 = (struct config_string *) VAR_15;


    VAR_12[9] = ((void*)0);


    VAR_12[10] = ((void*)0);


    VAR_12[11] = ((void*)0);


    if (VAR_19->boot_val == ((void*)0))
     VAR_12[12] = ((void*)0);
    else
     VAR_12[12] = FUNC_8(VAR_19->boot_val);


    if (VAR_19->reset_val == ((void*)0))
     VAR_12[13] = ((void*)0);
    else
     VAR_12[13] = FUNC_8(VAR_19->reset_val);
   }
   break;

  case 131:
   {
    struct config_enum *VAR_20 = (struct config_enum *) VAR_15;


    VAR_12[9] = ((void*)0);


    VAR_12[10] = ((void*)0);







    VAR_12[11] = FUNC_4((struct config_enum *) VAR_15,
              "{\"", "\"}", "\",\"");


    VAR_12[12] = FUNC_8(FUNC_5(VAR_20,
                 VAR_20->boot_val));


    VAR_12[13] = FUNC_8(FUNC_5(VAR_20,
                 VAR_20->reset_val));
   }
   break;

  default:
   {





    VAR_12[9] = ((void*)0);


    VAR_12[10] = ((void*)0);


    VAR_12[11] = ((void*)0);


    VAR_12[12] = ((void*)0);


    VAR_12[13] = ((void*)0);
   }
   break;
 }






 if (VAR_15->source == VAR_6 &&
  FUNC_7(FUNC_1(), VAR_0))
 {
  VAR_12[14] = VAR_15->sourcefile;
  FUNC_9(VAR_14, sizeof(VAR_14), "%d", VAR_15->sourceline);
  VAR_12[15] = FUNC_8(VAR_14);
 }
 else
 {
  VAR_12[14] = ((void*)0);
  VAR_12[15] = ((void*)0);
 }

 VAR_12[16] = (VAR_15->status & VAR_2) ? "t" : "f";
}

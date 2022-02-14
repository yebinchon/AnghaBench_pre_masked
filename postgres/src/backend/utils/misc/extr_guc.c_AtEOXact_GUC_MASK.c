
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct config_generic {int vartype; void* extra; int flags; TYPE_3__* stack; int scontext; int source; } ;
struct config_string {char** variable; struct config_generic gen; int (* assign_hook ) (char*,void*) ;} ;
struct config_real {double* variable; struct config_generic gen; int (* assign_hook ) (double,void*) ;} ;
struct config_int {int* variable; struct config_generic gen; int (* assign_hook ) (int,void*) ;} ;
struct config_enum {int* variable; struct config_generic gen; int (* assign_hook ) (int,void*) ;} ;
struct config_bool {int* variable; struct config_generic gen; int (* assign_hook ) (int,void*) ;} ;
struct TYPE_6__ {int boolval; int intval; double realval; char* stringval; int enumval; } ;
struct TYPE_7__ {void* extra; TYPE_1__ val; } ;
typedef TYPE_2__ config_var_value ;
struct TYPE_8__ {int nest_level; int state; TYPE_2__ masked; TYPE_2__ prior; int scontext; int source; int masked_scontext; struct TYPE_8__* prev; } ;
typedef TYPE_3__ GucStack ;
typedef int GucSource ;
typedef int GucContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct config_generic*) ;
 int FUNC_2 (struct config_generic*,TYPE_2__*) ;
 int VAR_3 ;
 struct config_generic** VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct config_generic*,void**,void*) ;
 int FUNC_5 (struct config_string*,char**,char*) ;
 int FUNC_6 (int,void*) ;
 int FUNC_7 (int,void*) ;
 int FUNC_8 (double,void*) ;
 int FUNC_9 (char*,void*) ;
 int FUNC_10 (int,void*) ;

void
FUNC_11(bool VAR_6, int VAR_7)
{
 bool VAR_8;
 int VAR_9;






 FUNC_0(VAR_7 > 0 &&
     (VAR_7 <= VAR_0 ||
   (VAR_7 == VAR_0 + 1 && !VAR_6)));


 if (!VAR_3)
 {
  VAR_0 = VAR_7 - 1;
  return;
 }

 VAR_8 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
 {
  struct config_generic *VAR_10 = VAR_4[VAR_9];
  GucStack *VAR_11;
  while ((VAR_11 = VAR_10->stack) != ((void*)0) &&
      VAR_11->nest_level >= VAR_7)
  {
   GucStack *VAR_12 = VAR_11->prev;
   bool VAR_13 = 0;
   bool VAR_14 = 0;
   bool VAR_15;







   if (!VAR_6)
    VAR_13 = 1;
   else if (VAR_11->state == 135)
    VAR_13 = 1;
   else if (VAR_11->nest_level == 1)
   {

    if (VAR_11->state == 133)
     VAR_14 = 1;
    else if (VAR_11->state == 134)
    {

     FUNC_2(VAR_10, &VAR_11->prior);
    }
    else
     VAR_13 = 1;
   }
   else if (VAR_12 == ((void*)0) ||
      VAR_12->nest_level < VAR_11->nest_level - 1)
   {

    VAR_11->nest_level--;
    continue;
   }
   else
   {




    switch (VAR_11->state)
    {
     case 135:
      FUNC_0(0);
      break;

     case 134:

      FUNC_2(VAR_10, &VAR_11->prior);
      if (VAR_12->state == 133)
       FUNC_2(VAR_10, &VAR_12->masked);
      VAR_12->state = 134;
      break;

     case 136:
      if (VAR_12->state == 134)
      {

       VAR_12->masked_scontext = VAR_11->scontext;
       VAR_12->masked = VAR_11->prior;
       VAR_12->state = 133;
      }
      else
      {

       FUNC_2(VAR_10, &VAR_11->prior);
      }
      break;

     case 133:

      FUNC_2(VAR_10, &VAR_11->prior);

      VAR_12->masked_scontext = VAR_11->masked_scontext;
      if (VAR_12->state == 133)
       FUNC_2(VAR_10, &VAR_12->masked);
      VAR_12->masked = VAR_11->masked;
      VAR_12->state = 133;
      break;
    }
   }

   VAR_15 = 0;

   if (VAR_13 || VAR_14)
   {

    config_var_value VAR_16;
    GucSource VAR_17;
    GucContext VAR_18;

    if (VAR_14)
    {
     VAR_16 = VAR_11->masked;
     VAR_17 = VAR_2;
     VAR_18 = VAR_11->masked_scontext;
    }
    else
    {
     VAR_16 = VAR_11->prior;
     VAR_17 = VAR_11->source;
     VAR_18 = VAR_11->scontext;
    }

    switch (VAR_10->vartype)
    {
     case 132:
      {
       struct config_bool *VAR_19 = (struct config_bool *) VAR_10;
       bool VAR_20 = VAR_16.val.boolval;
       void *VAR_21 = VAR_16.extra;

       if (*VAR_19->variable != VAR_20 ||
        VAR_19->gen.extra != VAR_21)
       {
        if (VAR_19->assign_hook)
         VAR_19->assign_hook(VAR_20, VAR_21);
        *VAR_19->variable = VAR_20;
        FUNC_4(&VAR_19->gen, &VAR_19->gen.extra,
            VAR_21);
        VAR_15 = 1;
       }
       break;
      }
     case 130:
      {
       struct config_int *VAR_22 = (struct config_int *) VAR_10;
       int VAR_23 = VAR_16.val.intval;
       void *VAR_24 = VAR_16.extra;

       if (*VAR_22->variable != VAR_23 ||
        VAR_22->gen.extra != VAR_24)
       {
        if (VAR_22->assign_hook)
         VAR_22->assign_hook(VAR_23, VAR_24);
        *VAR_22->variable = VAR_23;
        FUNC_4(&VAR_22->gen, &VAR_22->gen.extra,
            VAR_24);
        VAR_15 = 1;
       }
       break;
      }
     case 129:
      {
       struct config_real *VAR_25 = (struct config_real *) VAR_10;
       double VAR_26 = VAR_16.val.realval;
       void *VAR_27 = VAR_16.extra;

       if (*VAR_25->variable != VAR_26 ||
        VAR_25->gen.extra != VAR_27)
       {
        if (VAR_25->assign_hook)
         VAR_25->assign_hook(VAR_26, VAR_27);
        *VAR_25->variable = VAR_26;
        FUNC_4(&VAR_25->gen, &VAR_25->gen.extra,
            VAR_27);
        VAR_15 = 1;
       }
       break;
      }
     case 128:
      {
       struct config_string *VAR_28 = (struct config_string *) VAR_10;
       char *VAR_29 = VAR_16.val.stringval;
       void *VAR_30 = VAR_16.extra;

       if (*VAR_28->variable != VAR_29 ||
        VAR_28->gen.extra != VAR_30)
       {
        if (VAR_28->assign_hook)
         VAR_28->assign_hook(VAR_29, VAR_30);
        FUNC_5(VAR_28, VAR_28->variable, VAR_29);
        FUNC_4(&VAR_28->gen, &VAR_28->gen.extra,
            VAR_30);
        VAR_15 = 1;
       }







       FUNC_5(VAR_28, &VAR_11->prior.val.stringval, ((void*)0));
       FUNC_5(VAR_28, &VAR_11->masked.val.stringval, ((void*)0));
       break;
      }
     case 131:
      {
       struct config_enum *VAR_31 = (struct config_enum *) VAR_10;
       int VAR_32 = VAR_16.val.enumval;
       void *VAR_33 = VAR_16.extra;

       if (*VAR_31->variable != VAR_32 ||
        VAR_31->gen.extra != VAR_33)
       {
        if (VAR_31->assign_hook)
         VAR_31->assign_hook(VAR_32, VAR_33);
        *VAR_31->variable = VAR_32;
        FUNC_4(&VAR_31->gen, &VAR_31->gen.extra,
            VAR_33);
        VAR_15 = 1;
       }
       break;
      }
    }




    FUNC_4(VAR_10, &(VAR_11->prior.extra), ((void*)0));
    FUNC_4(VAR_10, &(VAR_11->masked.extra), ((void*)0));


    VAR_10->source = VAR_17;
    VAR_10->scontext = VAR_18;
   }


   VAR_10->stack = VAR_12;
   FUNC_3(VAR_11);


   if (VAR_15 && (VAR_10->flags & VAR_1))
    FUNC_1(VAR_10);
  }

  if (VAR_11 != ((void*)0))
   VAR_8 = 1;
 }


 VAR_3 = VAR_8;


 VAR_0 = VAR_7 - 1;
}

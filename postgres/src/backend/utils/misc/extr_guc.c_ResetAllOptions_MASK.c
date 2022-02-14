
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int extra; } ;
struct config_string {int reset_extra; TYPE_1__ gen; int reset_val; int variable; int (* assign_hook ) (int ,int ) ;} ;
struct config_real {int reset_extra; TYPE_1__ gen; int reset_val; int * variable; int (* assign_hook ) (int ,int ) ;} ;
struct config_int {int reset_extra; TYPE_1__ gen; int reset_val; int * variable; int (* assign_hook ) (int ,int ) ;} ;
struct config_generic {scalar_t__ context; int flags; scalar_t__ source; int vartype; scalar_t__ reset_source; int reset_scontext; int scontext; } ;
struct config_enum {int reset_extra; TYPE_1__ gen; int reset_val; int * variable; int (* assign_hook ) (int ,int ) ;} ;
struct config_bool {int reset_extra; TYPE_1__ gen; int reset_val; int * variable; int (* assign_hook ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct config_generic*) ;
 struct config_generic** VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct config_generic*,int ) ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;
 int FUNC_3 (struct config_string*,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

void
FUNC_9(void)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
 {
  struct config_generic *VAR_9 = VAR_6[VAR_8];


  if (VAR_9->context != VAR_3 &&
   VAR_9->context != VAR_5)
   continue;

  if (VAR_9->flags & VAR_1)
   continue;

  if (VAR_9->source <= VAR_4)
   continue;


  FUNC_1(VAR_9, VAR_0);

  switch (VAR_9->vartype)
  {
   case 132:
    {
     struct config_bool *VAR_10 = (struct config_bool *) VAR_9;

     if (VAR_10->assign_hook)
      VAR_10->assign_hook(VAR_10->reset_val,
            VAR_10->reset_extra);
     *VAR_10->variable = VAR_10->reset_val;
     FUNC_2(&VAR_10->gen, &VAR_10->gen.extra,
         VAR_10->reset_extra);
     break;
    }
   case 130:
    {
     struct config_int *VAR_11 = (struct config_int *) VAR_9;

     if (VAR_11->assign_hook)
      VAR_11->assign_hook(VAR_11->reset_val,
            VAR_11->reset_extra);
     *VAR_11->variable = VAR_11->reset_val;
     FUNC_2(&VAR_11->gen, &VAR_11->gen.extra,
         VAR_11->reset_extra);
     break;
    }
   case 129:
    {
     struct config_real *VAR_12 = (struct config_real *) VAR_9;

     if (VAR_12->assign_hook)
      VAR_12->assign_hook(VAR_12->reset_val,
            VAR_12->reset_extra);
     *VAR_12->variable = VAR_12->reset_val;
     FUNC_2(&VAR_12->gen, &VAR_12->gen.extra,
         VAR_12->reset_extra);
     break;
    }
   case 128:
    {
     struct config_string *VAR_13 = (struct config_string *) VAR_9;

     if (VAR_13->assign_hook)
      VAR_13->assign_hook(VAR_13->reset_val,
            VAR_13->reset_extra);
     FUNC_3(VAR_13, VAR_13->variable, VAR_13->reset_val);
     FUNC_2(&VAR_13->gen, &VAR_13->gen.extra,
         VAR_13->reset_extra);
     break;
    }
   case 131:
    {
     struct config_enum *VAR_14 = (struct config_enum *) VAR_9;

     if (VAR_14->assign_hook)
      VAR_14->assign_hook(VAR_14->reset_val,
            VAR_14->reset_extra);
     *VAR_14->variable = VAR_14->reset_val;
     FUNC_2(&VAR_14->gen, &VAR_14->gen.extra,
         VAR_14->reset_extra);
     break;
    }
  }

  VAR_9->source = VAR_9->reset_source;
  VAR_9->scontext = VAR_9->reset_scontext;

  if (VAR_9->flags & VAR_2)
   FUNC_0(VAR_9);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_generic {TYPE_1__* stack; int scontext; int source; } ;
struct TYPE_2__ {scalar_t__ nest_level; void* state; int prior; int scontext; int source; struct TYPE_2__* prev; int masked; int masked_scontext; } ;
typedef TYPE_1__ GucStack ;
typedef int GucAction ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;



 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_5 ;
 int FUNC_2 (struct config_generic*,int *) ;
 int VAR_6 ;
 int FUNC_3 (struct config_generic*,int *) ;

__attribute__((used)) static void
FUNC_4(struct config_generic *VAR_7, GucAction VAR_8)
{
 GucStack *VAR_9;


 if (VAR_0 == 0)
  return;


 VAR_9 = VAR_7->stack;
 if (VAR_9 && VAR_9->nest_level >= VAR_0)
 {

  FUNC_0(VAR_9->nest_level == VAR_0);
  switch (VAR_8)
  {
   case 128:

    if (VAR_9->state == VAR_4)
    {

     FUNC_2(VAR_7, &VAR_9->masked);
    }
    VAR_9->state = VAR_3;
    break;
   case 130:
    if (VAR_9->state == VAR_3)
    {

     VAR_9->masked_scontext = VAR_7->scontext;
     FUNC_3(VAR_7, &VAR_9->masked);
     VAR_9->state = VAR_4;
    }

    break;
   case 129:

    FUNC_0(VAR_9->state == VAR_2);
    break;
  }
  FUNC_0(VAR_6);
  return;
 }






 VAR_9 = (GucStack *) FUNC_1(VAR_5,
            sizeof(GucStack));

 VAR_9->prev = VAR_7->stack;
 VAR_9->nest_level = VAR_0;
 switch (VAR_8)
 {
  case 128:
   VAR_9->state = VAR_3;
   break;
  case 130:
   VAR_9->state = VAR_1;
   break;
  case 129:
   VAR_9->state = VAR_2;
   break;
 }
 VAR_9->source = VAR_7->source;
 VAR_9->scontext = VAR_7->scontext;
 FUNC_3(VAR_7, &VAR_9->prior);

 VAR_7->stack = VAR_9;


 VAR_6 = 1;
}

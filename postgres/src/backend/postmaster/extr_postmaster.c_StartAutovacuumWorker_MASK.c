
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dead_end; int bgworker_notify; scalar_t__ pid; int child_slot; int elem; int bkend_type; int cancel_key; } ;
typedef TYPE_1__ Backend ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 () ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13(void)
{
 Backend *VAR_10;
 if (FUNC_6(VAR_1) == VAR_3)
 {






  if (!FUNC_2(&VAR_7))
  {
   FUNC_8(VAR_6,
     (FUNC_9(VAR_4),
      FUNC_10("could not generate random cancel key")));
   return;
  }

  VAR_10 = (Backend *) FUNC_12(sizeof(Backend));
  if (VAR_10)
  {
   VAR_10->cancel_key = VAR_7;


   VAR_10->dead_end = 0;
   VAR_10->child_slot = VAR_8 = FUNC_0();
   VAR_10->bgworker_notify = 0;

   VAR_10->pid = FUNC_5();
   if (VAR_10->pid > 0)
   {
    VAR_10->bkend_type = VAR_1;
    FUNC_7(&VAR_2, &VAR_10->elem);




    return;
   }





   (void) FUNC_3(VAR_10->child_slot);
   FUNC_11(VAR_10);
  }
  else
   FUNC_8(VAR_6,
     (FUNC_9(VAR_5),
      FUNC_10("out of memory")));
 }
 if (VAR_0 != 0)
 {
  FUNC_1();
  VAR_9 = 1;
 }
}

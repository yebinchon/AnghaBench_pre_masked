
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ckpt_failed; int ckpt_started; int ckpt_flags; scalar_t__ checkpointer_pid; int ckpt_done; int done_cv; int ckpt_lck; int start_cv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (long) ;
 int FUNC_13 () ;

void
FUNC_14(int VAR_11)
{
 int VAR_12;
 int VAR_13,
    VAR_14;




 if (!VAR_5)
 {




  FUNC_4(VAR_11 | VAR_0);





  FUNC_13();

  return;
 }
 FUNC_5(&VAR_3->ckpt_lck);

 VAR_13 = VAR_3->ckpt_failed;
 VAR_14 = VAR_3->ckpt_started;
 VAR_3->ckpt_flags |= (VAR_11 | VAR_1);

 FUNC_6(&VAR_3->ckpt_lck);
 for (VAR_12 = 0;; VAR_12++)
 {
  if (VAR_3->checkpointer_pid == 0)
  {
   if (VAR_12 >= 600 || !(VAR_11 & VAR_2))
   {
    FUNC_7((VAR_11 & VAR_2) ? VAR_4 : VAR_6,
      "could not signal for checkpoint: checkpointer is not running");
    break;
   }
  }
  else if (FUNC_11(VAR_3->checkpointer_pid, VAR_8) != 0)
  {
   if (VAR_12 >= 600 || !(VAR_11 & VAR_2))
   {
    FUNC_7((VAR_11 & VAR_2) ? VAR_4 : VAR_6,
      "could not signal for checkpoint: %m");
    break;
   }
  }
  else
   break;

  FUNC_0();
  FUNC_12(100000L);
 }





 if (VAR_11 & VAR_2)
 {
  int VAR_15,
     VAR_16;


  FUNC_2(&VAR_3->start_cv);
  for (;;)
  {
   FUNC_5(&VAR_3->ckpt_lck);
   VAR_15 = VAR_3->ckpt_started;
   FUNC_6(&VAR_3->ckpt_lck);

   if (VAR_15 != VAR_14)
    break;

   FUNC_3(&VAR_3->start_cv,
           VAR_10);
  }
  FUNC_1();




  FUNC_2(&VAR_3->done_cv);
  for (;;)
  {
   int VAR_17;

   FUNC_5(&VAR_3->ckpt_lck);
   VAR_17 = VAR_3->ckpt_done;
   VAR_16 = VAR_3->ckpt_failed;
   FUNC_6(&VAR_3->ckpt_lck);

   if (VAR_17 - VAR_15 >= 0)
    break;

   FUNC_3(&VAR_3->done_cv,
           VAR_9);
  }
  FUNC_1();

  if (VAR_16 != VAR_13)
   FUNC_8(VAR_4,
     (FUNC_10("checkpoint request failed"),
      FUNC_9("Consult recent messages in the server log for details.")));
 }
}

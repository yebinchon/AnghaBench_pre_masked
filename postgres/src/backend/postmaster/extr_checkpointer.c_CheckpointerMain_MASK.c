
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sigjmp_buf ;
typedef int pg_time_t ;
struct TYPE_10__ {int m_timed_checkpoints; int m_requested_checkpoints; } ;
struct TYPE_9__ {int ckpt_flags; int done_cv; int ckpt_lck; scalar_t__ ckpt_started; scalar_t__ ckpt_done; int start_cv; int ckpt_failed; int checkpointer_pid; } ;
struct TYPE_8__ {int procLatch; } ;
struct TYPE_7__ {int * checkpointerLatch; } ;
struct TYPE_6__ {scalar_t__ ckpt_flags; } ;
typedef int MemoryContext ;
typedef TYPE_1__ CheckpointerShmemStruct ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 TYPE_5__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 () ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int VAR_10 ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int *) ;
 int FUNC_16 () ;
 int VAR_11 ;
 int FUNC_17 () ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int,int) ;
 int VAR_12 ;
 TYPE_3__* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_21 (int *) ;
 int * VAR_16 ;
 TYPE_2__* VAR_17 ;
 int FUNC_22 (int ) ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 (int) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_26 (int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_30 () ;
 int FUNC_31 () ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_32 (int ,int,int,int ) ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_33 (int ,int ) ;
 int FUNC_34 (char*) ;
 int FUNC_35 (char*,char*,int,int) ;
 int * VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_36 (long) ;
 int FUNC_37 () ;
 int FUNC_38 () ;
 int FUNC_39 (int ,int ) ;
 int FUNC_40 (int ) ;
 scalar_t__ VAR_48 ;
 int FUNC_41 (int *,int ) ;
 scalar_t__ FUNC_42 (int ,int) ;
 int FUNC_43 () ;
 scalar_t__ FUNC_44 (int *) ;

void
FUNC_45(void)
{
 sigjmp_buf VAR_49;
 MemoryContext VAR_50;

 VAR_8->checkpointer_pid = VAR_14;
 FUNC_39(VAR_22, VAR_9);
 FUNC_39(VAR_23, VAR_18);
 FUNC_39(VAR_26, VAR_30);
 FUNC_39(VAR_25, VAR_38);
 FUNC_39(VAR_20, VAR_30);
 FUNC_39(VAR_24, VAR_30);
 FUNC_39(VAR_27, VAR_39);
 FUNC_39(VAR_28, VAR_19);




 FUNC_39(VAR_21, VAR_29);


 FUNC_41(&VAR_2, VAR_25);




 VAR_46 = VAR_47 = (pg_time_t) FUNC_44(((void*)0));







 VAR_50 = FUNC_2(VAR_31,
             "Checkpointer",
             VAR_0);
 FUNC_19(VAR_50);






 if (FUNC_42(VAR_49, 1) != 0)
 {

  VAR_44 = ((void*)0);


  FUNC_16();


  FUNC_12();







  FUNC_17();
  FUNC_9();
  FUNC_37();
  FUNC_0();
  FUNC_30();
  FUNC_25(0);
  FUNC_3(0);
  FUNC_6();
  FUNC_4(0);
  FUNC_5(0);


  if (VAR_40)
  {
   FUNC_28(&VAR_8->ckpt_lck);
   VAR_8->ckpt_failed++;
   VAR_8->ckpt_done = VAR_8->ckpt_started;
   FUNC_29(&VAR_8->ckpt_lck);

   FUNC_8(&VAR_8->done_cv);

   VAR_40 = 0;
  }





  FUNC_19(VAR_50);
  FUNC_13();


  FUNC_18(VAR_50);


  FUNC_23();






  FUNC_36(1000000L);






  FUNC_43();
 }


 VAR_16 = &VAR_49;




 FUNC_21(&VAR_32);





 FUNC_31();





 VAR_17->checkpointerLatch = &VAR_13->procLatch;




 for (;;)
 {
  bool VAR_51 = 0;
  int VAR_52 = 0;
  pg_time_t VAR_53;
  int VAR_54;
  int VAR_55;


  FUNC_26(VAR_12);




  FUNC_1();

  if (VAR_45)
  {
   VAR_45 = 0;
   FUNC_22(VAR_15);
   FUNC_31();
  }
  if (VAR_48)
  {




   VAR_10 = 1;

   FUNC_27(0, 0);

   FUNC_40(0);
  }






  if (((volatile CheckpointerShmemStruct *) VAR_8)->ckpt_flags)
  {
   VAR_51 = 1;
   VAR_1.m_requested_checkpoints++;
  }







  VAR_53 = (pg_time_t) FUNC_44(((void*)0));
  VAR_54 = VAR_53 - VAR_46;
  if (VAR_54 >= VAR_6)
  {
   if (!VAR_51)
    VAR_1.m_timed_checkpoints++;
   VAR_51 = 1;
   VAR_52 |= VAR_3;
  }




  if (VAR_51)
  {
   bool VAR_56 = 0;
   bool VAR_57;






   VAR_57 = FUNC_24();






   FUNC_28(&VAR_8->ckpt_lck);
   VAR_52 |= VAR_8->ckpt_flags;
   VAR_8->ckpt_flags = 0;
   VAR_8->ckpt_started++;
   FUNC_29(&VAR_8->ckpt_lck);

   FUNC_8(&VAR_8->start_cv);





   if (VAR_52 & VAR_5)
    VAR_57 = 0;
   if (!VAR_57 &&
    (VAR_52 & VAR_4) &&
    VAR_54 < VAR_7)
    FUNC_33(VAR_11,
      (FUNC_35("checkpoints are occurring too frequently (%d second apart)",
            "checkpoints are occurring too frequently (%d seconds apart)",
            VAR_54,
            VAR_54),
       FUNC_34("Consider increasing the configuration parameter \"max_wal_size\".")));





   VAR_40 = 1;
   if (VAR_57)
    VAR_42 = FUNC_15(((void*)0));
   else
    VAR_42 = FUNC_14();
   VAR_43 = VAR_53;
   VAR_41 = 0;




   if (!VAR_57)
   {
    FUNC_10(VAR_52);
    VAR_56 = 1;
   }
   else
    VAR_56 = FUNC_11(VAR_52);





   FUNC_43();




   FUNC_28(&VAR_8->ckpt_lck);
   VAR_8->ckpt_done = VAR_8->ckpt_started;
   FUNC_29(&VAR_8->ckpt_lck);

   FUNC_8(&VAR_8->done_cv);

   if (VAR_56)
   {





    VAR_46 = VAR_53;
   }
   else
   {






    VAR_46 = VAR_53 - VAR_6 + 15;
   }

   VAR_40 = 0;
  }


  FUNC_7();
  FUNC_38();





  VAR_53 = (pg_time_t) FUNC_44(((void*)0));
  VAR_54 = VAR_53 - VAR_46;
  if (VAR_54 >= VAR_6)
   continue;
  VAR_55 = VAR_6 - VAR_54;
  if (VAR_37 > 0 && !FUNC_24())
  {
   VAR_54 = VAR_53 - VAR_47;
   if (VAR_54 >= VAR_37)
    continue;
   VAR_55 = FUNC_20(VAR_55, VAR_37 - VAR_54);
  }

  (void) FUNC_32(VAR_12,
       VAR_35 | VAR_36 | VAR_34,
       VAR_55 * 1000L ,
       VAR_33);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sigjmp_buf ;
struct TYPE_4__ {int procLatch; } ;
struct TYPE_3__ {int * walwriterLatch; } ;
typedef int MemoryContext ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 long VAR_2 ;
 int FUNC_9 () ;
 int VAR_3 ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (int *) ;
 int * VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_18 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_19 () ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_20 (int ,int,long,int ) ;
 int VAR_26 ;
 int VAR_27 ;
 long VAR_28 ;
 scalar_t__ FUNC_21 () ;
 int * VAR_29 ;
 int VAR_30 ;
 int FUNC_22 (long) ;
 int FUNC_23 () ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int ) ;
 scalar_t__ VAR_31 ;
 int FUNC_26 (int *,int ) ;
 scalar_t__ FUNC_27 (int ,int) ;
 int FUNC_28 () ;
 int VAR_32 ;
 int VAR_33 ;

void
FUNC_29(void)
{
 sigjmp_buf VAR_34;
 MemoryContext VAR_35;
 int VAR_36;
 bool VAR_37;







 FUNC_24(VAR_11, VAR_27);
 FUNC_24(VAR_12, VAR_26);
 FUNC_24(VAR_15, VAR_26);
 FUNC_24(VAR_14, VAR_32);
 FUNC_24(VAR_9, VAR_19);
 FUNC_24(VAR_13, VAR_19);
 FUNC_24(VAR_16, VAR_33);
 FUNC_24(VAR_17, VAR_19);




 FUNC_24(VAR_10, VAR_18);


 FUNC_26(&VAR_1, VAR_14);







 VAR_35 = FUNC_1(VAR_20,
             "Wal Writer",
             VAR_0);
 FUNC_12(VAR_35);






 if (FUNC_27(VAR_34, 1) != 0)
 {

  VAR_29 = ((void*)0);


  FUNC_9();


  FUNC_7();






  FUNC_10();
  FUNC_6();
  FUNC_23();
  FUNC_0();
  FUNC_19();
  FUNC_16(0);
  FUNC_2(0);
  FUNC_5();
  FUNC_3(0);
  FUNC_4(0);





  FUNC_12(VAR_35);
  FUNC_8();


  FUNC_11(VAR_35);


  FUNC_15();






  FUNC_22(1000000L);






  FUNC_28();
 }


 VAR_7 = &VAR_34;




 FUNC_13(&VAR_21);




 VAR_36 = VAR_3;
 VAR_37 = 0;
 FUNC_18(0);





 VAR_8->walwriterLatch = &VAR_5->procLatch;




 for (;;)
 {
  long VAR_38;
  if (VAR_37 != (VAR_36 <= 1))
  {
   VAR_37 = (VAR_36 <= 1);
   FUNC_18(VAR_37);
  }


  FUNC_17(VAR_4);




  if (VAR_30)
  {
   VAR_30 = 0;
   FUNC_14(VAR_6);
  }
  if (VAR_31)
  {

   FUNC_25(0);
  }





  if (FUNC_21())
   VAR_36 = VAR_3;
  else if (VAR_36 > 0)
   VAR_36--;






  if (VAR_36 > 0)
   VAR_38 = VAR_28;
  else
   VAR_38 = VAR_28 * VAR_2;

  (void) FUNC_20(VAR_4,
       VAR_24 | VAR_25 | VAR_23,
       VAR_38,
       VAR_22);
 }
}

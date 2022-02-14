
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sigjmp_buf ;
typedef int WritebackContext ;
typedef scalar_t__ TimestampTz ;
struct TYPE_2__ {int pgprocno; } ;
typedef int MemoryContext ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_4 ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 () ;
 void* FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 int VAR_5 ;
 int FUNC_13 () ;
 int VAR_6 ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int FUNC_18 (int *) ;
 int * VAR_10 ;
 int FUNC_19 (int ) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 (int) ;
 int VAR_11 ;
 int FUNC_23 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_24 (int) ;
 scalar_t__ FUNC_25 (void*,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_26 () ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_27 (int ,int,int,int ) ;
 int FUNC_28 (int *,int *) ;
 scalar_t__ FUNC_29 () ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int * VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 void* VAR_36 ;
 int FUNC_30 (long) ;
 int FUNC_31 () ;
 int FUNC_32 () ;
 int FUNC_33 (int ,int ) ;
 int FUNC_34 (int ) ;
 scalar_t__ VAR_37 ;
 int FUNC_35 (int *,int ) ;
 scalar_t__ FUNC_36 (int ,int) ;
 int FUNC_37 () ;

void
FUNC_38(void)
{
 sigjmp_buf VAR_38;
 MemoryContext VAR_39;
 bool VAR_40;
 WritebackContext VAR_41;







 FUNC_33(VAR_14, VAR_1);
 FUNC_33(VAR_15, VAR_22);
 FUNC_33(VAR_18, VAR_11);
 FUNC_33(VAR_17, VAR_30);
 FUNC_33(VAR_12, VAR_22);
 FUNC_33(VAR_16, VAR_22);
 FUNC_33(VAR_19, VAR_32);
 FUNC_33(VAR_20, VAR_22);




 FUNC_33(VAR_13, VAR_21);


 FUNC_35(&VAR_3, VAR_17);





 VAR_36 = FUNC_11();







 VAR_39 = FUNC_1(VAR_23,
            "Background Writer",
            VAR_0);
 FUNC_17(VAR_39);

 FUNC_28(&VAR_41, &VAR_31);






 if (FUNC_36(VAR_38, 1) != 0)
 {

  VAR_33 = ((void*)0);


  FUNC_13();


  FUNC_8();






  FUNC_14();
  FUNC_7();
  FUNC_0();
  FUNC_26();
  FUNC_22(0);
  FUNC_2(0);
  FUNC_5();
  FUNC_3(0);
  FUNC_4(0);





  FUNC_17(VAR_39);
  FUNC_10();


  FUNC_16(VAR_39);


  FUNC_28(&VAR_41, &VAR_31);


  FUNC_20();






  FUNC_30(1000000L);






  FUNC_37();


  FUNC_31();
 }


 VAR_10 = &VAR_38;




 FUNC_18(&VAR_24);




 VAR_40 = 0;




 for (;;)
 {
  bool VAR_42;
  int VAR_43;


  FUNC_23(VAR_7);

  if (VAR_34)
  {
   VAR_34 = 0;
   FUNC_19(VAR_9);
  }
  if (VAR_37)
  {




   VAR_4 = 1;

   FUNC_34(0);
  }




  VAR_42 = FUNC_6(&VAR_41);




  FUNC_32();

  if (FUNC_9())
  {




   FUNC_37();
  }
  if (FUNC_29() && !FUNC_21())
  {
   TimestampTz VAR_44 = 0;
   TimestampTz VAR_45 = FUNC_11();

   VAR_44 = FUNC_25(VAR_36,
              VAR_6);
   if (VAR_45 >= VAR_44 &&
    VAR_35 <= FUNC_12())
   {
    VAR_35 = FUNC_15();
    VAR_36 = VAR_45;
   }
  }
  VAR_43 = FUNC_27(VAR_7,
        VAR_28 | VAR_29 | VAR_27,
        VAR_2 , VAR_26);
  if (VAR_43 == VAR_29 && VAR_42 && VAR_40)
  {

   FUNC_24(VAR_8->pgprocno);

   (void) FUNC_27(VAR_7,
        VAR_28 | VAR_29 | VAR_27,
        VAR_2 * VAR_5,
        VAR_25);

   FUNC_24(-1);
  }

  VAR_40 = VAR_42;
 }
}

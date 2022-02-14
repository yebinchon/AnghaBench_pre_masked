
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;
typedef int ShmemIndexEnt ;
typedef int PGShmemHeader ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int VAR_0 ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int FUNC_26 (int *) ;
 int FUNC_27 () ;
 int FUNC_28 () ;
 int VAR_1 ;
 int FUNC_29 () ;
 int FUNC_30 () ;
 int FUNC_31 () ;
 int FUNC_32 () ;
 int VAR_2 ;
 int FUNC_33 (int) ;
 int FUNC_34 (int) ;
 int * FUNC_35 (int,int **) ;
 int FUNC_36 () ;
 int FUNC_37 () ;
 int FUNC_38 () ;
 int FUNC_39 () ;
 int FUNC_40 () ;
 int FUNC_41 () ;
 int FUNC_42 () ;
 int FUNC_43 () ;
 int FUNC_44 () ;
 int FUNC_45 () ;
 int FUNC_46 () ;
 int FUNC_47 () ;
 int VAR_3 ;
 int FUNC_48 () ;
 int FUNC_49 () ;
 int FUNC_50 () ;
 int FUNC_51 () ;
 int FUNC_52 () ;
 int FUNC_53 () ;
 int FUNC_54 () ;
 int FUNC_55 () ;
 int FUNC_56 () ;
 scalar_t__ FUNC_57 () ;
 int FUNC_58 () ;
 int FUNC_59 () ;
 int FUNC_60 () ;
 int FUNC_61 () ;
 int FUNC_62 () ;
 int FUNC_63 () ;
 int FUNC_64 () ;
 int FUNC_65 () ;
 int FUNC_66 () ;
 int FUNC_67 () ;
 int FUNC_68 (int,int) ;
 int VAR_4 ;
 int FUNC_69 (int *) ;
 int FUNC_70 (int ,char*,...) ;
 int FUNC_71 (int ,int) ;
 int FUNC_72 () ;
 int VAR_5 ;

void
FUNC_73(void)
{
 PGShmemHeader *VAR_6 = ((void*)0);

 if (!VAR_1)
 {
  PGShmemHeader *VAR_7;
  Size VAR_8;
  int VAR_9;


  VAR_9 = FUNC_40();
  VAR_9 += FUNC_57();
  VAR_8 = 100000;
  VAR_8 = FUNC_68(VAR_8, FUNC_34(VAR_9));
  VAR_8 = FUNC_68(VAR_8, FUNC_56());
  VAR_8 = FUNC_68(VAR_8, FUNC_71(VAR_3,
             sizeof(ShmemIndexEnt)));
  VAR_8 = FUNC_68(VAR_8, FUNC_11());
  VAR_8 = FUNC_68(VAR_8, FUNC_30());
  VAR_8 = FUNC_68(VAR_8, FUNC_38());
  VAR_8 = FUNC_68(VAR_8, FUNC_41());
  VAR_8 = FUNC_68(VAR_8, FUNC_67());
  VAR_8 = FUNC_68(VAR_8, FUNC_13());
  VAR_8 = FUNC_68(VAR_8, FUNC_17());
  VAR_8 = FUNC_68(VAR_8, FUNC_50());
  VAR_8 = FUNC_68(VAR_8, FUNC_61());
  VAR_8 = FUNC_68(VAR_8, FUNC_10());
  VAR_8 = FUNC_68(VAR_8, FUNC_32());
  VAR_8 = FUNC_68(VAR_8, FUNC_29());
  VAR_8 = FUNC_68(VAR_8, FUNC_39());
  VAR_8 = FUNC_68(VAR_8, FUNC_8());
  VAR_8 = FUNC_68(VAR_8, FUNC_48());
  VAR_8 = FUNC_68(VAR_8, FUNC_37());
  VAR_8 = FUNC_68(VAR_8, FUNC_43());
  VAR_8 = FUNC_68(VAR_8, FUNC_15());
  VAR_8 = FUNC_68(VAR_8, FUNC_5());
  VAR_8 = FUNC_68(VAR_8, FUNC_47());
  VAR_8 = FUNC_68(VAR_8, FUNC_45());
  VAR_8 = FUNC_68(VAR_8, FUNC_65());
  VAR_8 = FUNC_68(VAR_8, FUNC_63());
  VAR_8 = FUNC_68(VAR_8, FUNC_1());
  VAR_8 = FUNC_68(VAR_8, FUNC_54());
  VAR_8 = FUNC_68(VAR_8, FUNC_7());
  VAR_8 = FUNC_68(VAR_8, FUNC_59());
  VAR_8 = FUNC_68(VAR_8, FUNC_3());





  VAR_4 = 0;
  VAR_8 = FUNC_68(VAR_8, VAR_5);


  VAR_8 = FUNC_68(VAR_8, 8192 - (VAR_8 % 8192));

  FUNC_70(VAR_0, "invoking IpcMemoryCreate(size=%zu)", VAR_8);




  VAR_7 = FUNC_35(VAR_8, &VAR_6);

  FUNC_26(VAR_7);




  FUNC_33(VAR_9);






  FUNC_55();

 }
 else
 {





  FUNC_70(VAR_2, "should be attached to shared memory already");

 }




 if (!VAR_1)
  FUNC_27();





 FUNC_18();




 FUNC_28();




 FUNC_66();
 FUNC_12();
 FUNC_16();
 FUNC_49();
 FUNC_31();
 FUNC_22();




 FUNC_23();




 FUNC_24();




 if (!VAR_1)
  FUNC_25();
 FUNC_21();
 FUNC_19();
 FUNC_60();
 FUNC_9();




 FUNC_20();




 FUNC_36();
 FUNC_42();
 FUNC_14();
 FUNC_4();
 FUNC_46();
 FUNC_44();
 FUNC_64();
 FUNC_62();
 FUNC_0();




 FUNC_53();
 FUNC_6();
 FUNC_58();
 FUNC_2();
 if (!VAR_1)
  FUNC_69(VAR_6);




 if (&FUNC_72)
  FUNC_72();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int totalsize; int freeoffset; scalar_t__ dsm_control; int magic; int creatorPID; } ;
typedef int Size ;
typedef int SIZE_T ;
typedef TYPE_1__ PGShmemHeader ;
typedef int * HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *,int,int,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,int ,int **,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 char* FUNC_8 () ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (int) ;
 int VAR_12 ;
 void* FUNC_10 (int *,int,int ,int ,int ,int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_11 (int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_12 (int ) ;
 int * VAR_19 ;
 int FUNC_13 (int) ;
 int VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 int VAR_23 ;
 int * FUNC_14 (int *,int ,int ,int ) ;
 int FUNC_15 (int ,char*,int) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*,...) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*,...) ;
 int FUNC_21 (char*) ;
 int FUNC_22 () ;
 scalar_t__ VAR_24 ;
 int FUNC_23 (int ,int ) ;
 int VAR_25 ;

PGShmemHeader *
FUNC_24(Size VAR_26,
      PGShmemHeader **VAR_27)
{
 void *VAR_28;
 PGShmemHeader *VAR_29;
 HANDLE VAR_30,
    VAR_31;
 char *VAR_32;
 int VAR_33;
 DWORD VAR_34;
 DWORD VAR_35;
 SIZE_T VAR_36 = 0;
 Size VAR_37 = VAR_26;
 DWORD VAR_38 = VAR_14;

 VAR_19 = FUNC_14(((void*)0), VAR_16,
           VAR_12, VAR_13);
 if (VAR_19 == ((void*)0))
  FUNC_15(VAR_5, "could not reserve memory region: error code %lu",
    FUNC_7());


 FUNC_0(VAR_26 > FUNC_9(sizeof(PGShmemHeader)));

 VAR_32 = FUNC_8();

 VAR_21 = ((void*)0);

 if (VAR_24 == VAR_8 || VAR_24 == VAR_9)
 {

  VAR_36 = FUNC_6();
  if (VAR_36 == 0)
  {
   FUNC_16(VAR_24 == VAR_8 ? VAR_5 : VAR_0,
     (FUNC_17(VAR_2),
      FUNC_20("the processor does not support large pages")));
   FUNC_16(VAR_0,
     (FUNC_20("disabling huge pages")));
  }
  else if (!FUNC_4(VAR_24 == VAR_8 ? VAR_5 : VAR_0))
  {
   FUNC_16(VAR_0,
     (FUNC_20("disabling huge pages")));
  }
  else
  {

   VAR_38 = VAR_14 | VAR_17 | VAR_18;


   if (VAR_26 % VAR_36 != 0)
    VAR_26 += VAR_36 - (VAR_26 % VAR_36);
  }
 }

retry:



 VAR_34 = 0;

 VAR_35 = (DWORD) VAR_26;







 for (VAR_33 = 0; VAR_33 < 10; VAR_33++)
 {




  FUNC_12(0);

  VAR_30 = FUNC_2(VAR_10,
         ((void*)0),
         VAR_38,
         VAR_34,
         VAR_35,
         VAR_32);

  if (!VAR_30)
  {
   if (FUNC_7() == VAR_4 &&
    VAR_24 == VAR_9 &&
    (VAR_38 & VAR_18) != 0)
   {
    FUNC_15(VAR_0, "CreateFileMapping(%zu) with SEC_LARGE_PAGES failed, "
      "huge pages disabled",
      VAR_26);





    VAR_26 = VAR_37;
    VAR_38 = VAR_14;
    goto retry;
   }
   else
    FUNC_16(VAR_5,
      (FUNC_20("could not create shared memory segment: error code %lu", FUNC_7()),
       FUNC_18("Failed system call was CreateFileMapping(size=%zu, name=%s).",
           VAR_26, VAR_32)));
  }





  if (FUNC_7() == VAR_3)
  {
   FUNC_1(VAR_30);

   VAR_30 = ((void*)0);
   FUNC_13(1000);
   continue;
  }
  break;
 }





 if (!VAR_30)
  FUNC_16(VAR_5,
    (FUNC_20("pre-existing shared memory block is still in use"),
     FUNC_19("Check if there are any old server processes still running, and terminate them.")));

 FUNC_21(VAR_32);




 if (!FUNC_3(FUNC_5(), VAR_30, FUNC_5(), &VAR_31, 0, VAR_20, VAR_1))
  FUNC_16(VAR_5,
    (FUNC_20("could not create shared memory segment: error code %lu", FUNC_7()),
     FUNC_18("Failed system call was DuplicateHandle.")));





 if (!FUNC_1(VAR_30))
  FUNC_15(VAR_11, "could not close handle to shared memory: error code %lu", FUNC_7());






 VAR_28 = FUNC_10(VAR_31, VAR_7 | VAR_6, 0, 0, 0, ((void*)0));
 if (!VAR_28)
  FUNC_16(VAR_5,
    (FUNC_20("could not create shared memory segment: error code %lu", FUNC_7()),
     FUNC_18("Failed system call was MapViewOfFileEx.")));
 VAR_29 = (PGShmemHeader *) VAR_28;
 VAR_29->creatorPID = FUNC_22();
 VAR_29->magic = VAR_15;




 VAR_29->totalsize = VAR_26;
 VAR_29->freeoffset = FUNC_9(sizeof(PGShmemHeader));
 VAR_29->dsm_control = 0;


 VAR_21 = VAR_28;
 VAR_23 = VAR_26;
 VAR_22 = VAR_31;


 FUNC_23(VAR_25, FUNC_11(VAR_31));

 *VAR_27 = VAR_29;
 return VAR_29;
}

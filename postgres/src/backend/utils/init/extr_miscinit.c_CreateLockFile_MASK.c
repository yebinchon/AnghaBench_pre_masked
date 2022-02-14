
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int buffer ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char const*,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,...) ;
 int VAR_22 ;
 char* FUNC_9 (char*) ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 (scalar_t__,int ) ;
 scalar_t__ FUNC_13 (int ,scalar_t__) ;
 scalar_t__ VAR_23 ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (char const*,int,int ) ;
 int VAR_24 ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 () ;
 int FUNC_18 (int ) ;
 int FUNC_19 (char const*) ;
 int FUNC_20 (int,char*,int) ;
 int FUNC_21 (char*,int,char*,int,char*,long,int ,char const*) ;
 int FUNC_22 (char*,char*,unsigned long*,unsigned long*) ;
 char* FUNC_23 (char*,char) ;
 int FUNC_24 (char*,char*,int) ;
 scalar_t__ FUNC_25 (char*) ;
 scalar_t__ FUNC_26 (char const*) ;
 scalar_t__ FUNC_27 (int,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_28(const char *VAR_25, bool VAR_26,
      const char *VAR_27,
      bool VAR_28, const char *VAR_29)
{
 int VAR_30;
 char VAR_31[VAR_10 * 2 + 256];
 int VAR_32;
 int VAR_33;
 int VAR_34;
 pid_t VAR_35;
 pid_t VAR_36,
    VAR_37,
    VAR_38;
 const char *VAR_39;
 VAR_36 = FUNC_10();


 VAR_37 = FUNC_11();
 VAR_39 = FUNC_9("PG_GRANDPARENT_PID");
 if (VAR_39)
  VAR_38 = FUNC_1(VAR_39);
 else
  VAR_38 = 0;






 for (VAR_32 = 0;; VAR_32++)
 {






  VAR_30 = FUNC_15(VAR_25, VAR_16 | VAR_13 | VAR_14, VAR_24);
  if (VAR_30 >= 0)
   break;




  if ((VAR_22 != VAR_2 && VAR_22 != VAR_1) || VAR_32 > 100)
   FUNC_4(VAR_8,
     (FUNC_6(),
      FUNC_8("could not create lock file \"%s\": %m",
       VAR_25)));





  VAR_30 = FUNC_15(VAR_25, VAR_15, VAR_24);
  if (VAR_30 < 0)
  {
   if (VAR_22 == VAR_3)
    continue;
   FUNC_4(VAR_8,
     (FUNC_6(),
      FUNC_8("could not open lock file \"%s\": %m",
       VAR_25)));
  }
  FUNC_18(VAR_19);
  if ((VAR_33 = FUNC_20(VAR_30, VAR_31, sizeof(VAR_31) - 1)) < 0)
   FUNC_4(VAR_8,
     (FUNC_6(),
      FUNC_8("could not read lock file \"%s\": %m",
       VAR_25)));
  FUNC_17();
  FUNC_2(VAR_30);

  if (VAR_33 == 0)
  {
   FUNC_4(VAR_8,
     (FUNC_5(VAR_6),
      FUNC_8("lock file \"%s\" is empty", VAR_25),
      FUNC_7("Either another server is starting, or the lock file is the remnant of a previous server startup crash.")));
  }

  VAR_31[VAR_33] = '\0';
  VAR_34 = FUNC_1(VAR_31);


  VAR_35 = (pid_t) (VAR_34 < 0 ? -VAR_34 : VAR_34);

  if (VAR_35 <= 0)
   FUNC_3(VAR_8, "bogus data in lock file \"%s\": \"%s\"",
     VAR_25, VAR_31);
  if (VAR_35 != VAR_36 && VAR_35 != VAR_37 &&
   VAR_35 != VAR_38)
  {
   if (FUNC_12(VAR_35, 0) == 0 ||
    (VAR_22 != VAR_7 && VAR_22 != VAR_5))
   {

    FUNC_4(VAR_8,
      (FUNC_5(VAR_6),
       FUNC_8("lock file \"%s\" already exists",
        VAR_25),
       VAR_28 ?
       (VAR_34 < 0 ?
        FUNC_7("Is another postgres (PID %d) running in data directory \"%s\"?",
          (int) VAR_35, VAR_29) :
        FUNC_7("Is another postmaster (PID %d) running in data directory \"%s\"?",
          (int) VAR_35, VAR_29)) :
       (VAR_34 < 0 ?
        FUNC_7("Is another postgres (PID %d) using socket file \"%s\"?",
          (int) VAR_35, VAR_29) :
        FUNC_7("Is another postmaster (PID %d) using socket file \"%s\"?",
          (int) VAR_35, VAR_29))));
   }
  }
  if (VAR_28)
  {
   char *VAR_40 = VAR_31;
   unsigned long VAR_41,
      VAR_42;
   int VAR_43;

   for (VAR_43 = 1; VAR_43 < VAR_9; VAR_43++)
   {
    if ((VAR_40 = FUNC_23(VAR_40, '\n')) == ((void*)0))
     break;
    VAR_40++;
   }

   if (VAR_40 != ((void*)0) &&
    FUNC_22(VAR_40, "%lu %lu", &VAR_41, &VAR_42) == 2)
   {
    if (FUNC_0(VAR_41, VAR_42))
     FUNC_4(VAR_8,
       (FUNC_5(VAR_6),
        FUNC_8("pre-existing shared memory block (key %lu, ID %lu) is still in use",
         VAR_41, VAR_42),
        FUNC_7("Terminate any old server processes associated with data directory \"%s\".",
          VAR_29)));
   }
  }






  if (FUNC_26(VAR_25) < 0)
   FUNC_4(VAR_8,
     (FUNC_6(),
      FUNC_8("could not remove old lock file \"%s\": %m",
       VAR_25),
      FUNC_7("The file seems accidentally left over, but "
        "it could not be removed. Please remove the file "
        "by hand and try again.")));
 }







 FUNC_21(VAR_31, sizeof(VAR_31), "%d\n%s\n%ld\n%d\n%s\n",
    VAR_26 ? (int) VAR_36 : -((int) VAR_36),
    VAR_0,
    (long) VAR_11,
    VAR_17,
    VAR_27);





 if (VAR_28 && !VAR_26)
  FUNC_24(VAR_31, "\n", sizeof(VAR_31));

 VAR_22 = 0;
 FUNC_18(VAR_21);
 if (FUNC_27(VAR_30, VAR_31, FUNC_25(VAR_31)) != FUNC_25(VAR_31))
 {
  int VAR_44 = VAR_22;

  FUNC_2(VAR_30);
  FUNC_26(VAR_25);

  VAR_22 = VAR_44 ? VAR_44 : VAR_4;
  FUNC_4(VAR_8,
    (FUNC_6(),
     FUNC_8("could not write lock file \"%s\": %m", VAR_25)));
 }
 FUNC_17();

 FUNC_18(VAR_20);
 if (FUNC_16(VAR_30) != 0)
 {
  int VAR_45 = VAR_22;

  FUNC_2(VAR_30);
  FUNC_26(VAR_25);
  VAR_22 = VAR_45;
  FUNC_4(VAR_8,
    (FUNC_6(),
     FUNC_8("could not write lock file \"%s\": %m", VAR_25)));
 }
 FUNC_17();
 if (FUNC_2(VAR_30) != 0)
 {
  int VAR_46 = VAR_22;

  FUNC_26(VAR_25);
  VAR_22 = VAR_46;
  FUNC_4(VAR_8,
    (FUNC_6(),
     FUNC_8("could not write lock file \"%s\": %m", VAR_25)));
 }






 if (VAR_23 == VAR_12)
  FUNC_14(VAR_18, 0);





 VAR_23 = FUNC_13(FUNC_19(VAR_25), VAR_23);
}

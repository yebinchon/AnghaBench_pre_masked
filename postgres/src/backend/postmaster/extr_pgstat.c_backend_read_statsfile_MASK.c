
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TimestampTz ;
typedef int Oid ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int ,char*,char*,char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (long) ;
 int FUNC_11 (int ,int,scalar_t__*) ;
 scalar_t__ FUNC_12 (int ,int,int) ;
 int FUNC_13 (scalar_t__,scalar_t__,int ) ;
 char* FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__) ;

__attribute__((used)) static void
FUNC_16(void)
{
 TimestampTz VAR_9 = 0;
 TimestampTz VAR_10 = 0;
 Oid VAR_11;
 int VAR_12;


 if (VAR_7)
  return;
 FUNC_0(!VAR_8);







 if (FUNC_3())
  VAR_11 = VAR_0;
 else
  VAR_11 = VAR_2;






 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
 {
  bool VAR_13;
  TimestampTz VAR_14 = 0;
  TimestampTz VAR_15;

  FUNC_1();

  VAR_13 = FUNC_11(VAR_11, 0, &VAR_14);

  VAR_15 = FUNC_2();

  if (VAR_12 == 0 || VAR_15 < VAR_10)
  {
   VAR_10 = VAR_15;
   if (FUNC_4())
    VAR_9 = FUNC_5(VAR_10,
              -VAR_5);
   else
    VAR_9 = FUNC_5(VAR_10,
              -VAR_6);
  }
  if (VAR_13 && VAR_14 > VAR_15)
  {





   if (VAR_14 >= FUNC_5(VAR_15, 1000))
   {
    char *VAR_16;
    char *VAR_17;


    VAR_16 = FUNC_14(FUNC_15(VAR_14));
    VAR_17 = FUNC_14(FUNC_15(VAR_15));
    FUNC_6(VAR_1, "stats collector's time %s is later than backend local time %s",
      VAR_16, VAR_17);
    FUNC_9(VAR_16);
    FUNC_9(VAR_17);
   }

   FUNC_13(VAR_15, VAR_9, VAR_11);
   break;
  }


  if (VAR_13 && VAR_14 >= VAR_9)
   break;


  if ((VAR_12 % VAR_3) == 0)
   FUNC_13(VAR_15, VAR_9, VAR_11);

  FUNC_10(VAR_5 * 1000L);
 }

 if (VAR_12 >= VAR_4)
  FUNC_7(VAR_1,
    (FUNC_8("using stale statistics instead of current ones "
      "because stats collector is not responding")));






 if (FUNC_3())
  VAR_7 = FUNC_12(VAR_0, 0, 0);
 else
  VAR_7 = FUNC_12(VAR_2, 0, 1);
}

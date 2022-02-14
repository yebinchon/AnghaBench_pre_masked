
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int off_t ;
typedef int XLogSegNo ;
typedef int XLogRecPtr ;
typedef scalar_t__ TimeLineID ;
typedef scalar_t__ Size ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (char*,scalar_t__,int ,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char*,...) ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (int,int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,char*,int) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_14(char *VAR_9, int VAR_10, TimeLineID VAR_11, XLogRecPtr VAR_12,
   Size VAR_13)
{
 char *VAR_14;
 XLogRecPtr VAR_15;
 Size VAR_16;


 static int VAR_17 = -1;
 static XLogSegNo VAR_18 = 0;
 static TimeLineID VAR_19 = 0;
 static uint32 VAR_20 = 0;

 FUNC_0(VAR_10 == VAR_8);

 VAR_14 = VAR_9;
 VAR_15 = VAR_12;
 VAR_16 = VAR_13;

 while (VAR_16 > 0)
 {
  uint32 VAR_21;
  int VAR_22;
  int VAR_23;

  VAR_21 = FUNC_5(VAR_15, VAR_10);


  if (VAR_17 < 0 || !FUNC_2(VAR_15, VAR_18, VAR_10) ||
   VAR_19 != VAR_11)
  {
   char VAR_24[VAR_2];

   if (VAR_17 >= 0)
    FUNC_6(VAR_17);

   FUNC_3(VAR_15, VAR_18, VAR_10);

   FUNC_4(VAR_24, VAR_11, VAR_18, VAR_10);

   VAR_17 = FUNC_1(VAR_24, VAR_3 | VAR_4);

   if (VAR_17 < 0)
   {
    if (VAR_7 == VAR_0)
     FUNC_7(VAR_1,
       (FUNC_8(),
        FUNC_9("requested WAL segment %s has already been removed",
         VAR_24)));
    else
     FUNC_7(VAR_1,
       (FUNC_8(),
        FUNC_9("could not open file \"%s\": %m",
         VAR_24)));
   }
   VAR_20 = 0;
   VAR_19 = VAR_11;
  }


  if (VAR_20 != VAR_21)
  {
   if (FUNC_10(VAR_17, (off_t) VAR_21, VAR_5) < 0)
   {
    char VAR_25[VAR_2];
    int VAR_26 = VAR_7;

    FUNC_4(VAR_25, VAR_11, VAR_18, VAR_10);
    VAR_7 = VAR_26;
    FUNC_7(VAR_1,
      (FUNC_8(),
       FUNC_9("could not seek in log segment %s to offset %u: %m",
        VAR_25, VAR_21)));
   }
   VAR_20 = VAR_21;
  }


  if (VAR_16 > (VAR_10 - VAR_21))
   VAR_22 = VAR_10 - VAR_21;
  else
   VAR_22 = VAR_16;

  FUNC_12(VAR_6);
  VAR_23 = FUNC_13(VAR_17, VAR_14, VAR_22);
  FUNC_11();
  if (VAR_23 <= 0)
  {
   char VAR_27[VAR_2];
   int VAR_28 = VAR_7;

   FUNC_4(VAR_27, VAR_11, VAR_18, VAR_10);
   VAR_7 = VAR_28;
   FUNC_7(VAR_1,
     (FUNC_8(),
      FUNC_9("could not read from log segment %s, offset %u, length %lu: %m",
       VAR_27, VAR_20, (unsigned long) VAR_22)));
  }


  VAR_15 += VAR_23;

  VAR_20 += VAR_23;
  VAR_16 -= VAR_23;
  VAR_14 += VAR_23;
 }
}

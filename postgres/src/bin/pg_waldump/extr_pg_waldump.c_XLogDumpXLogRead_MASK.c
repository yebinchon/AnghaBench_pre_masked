
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
typedef int off_t ;
typedef int XLogSegNo ;
typedef int XLogRecPtr ;
typedef int TimeLineID ;
typedef scalar_t__ Size ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,int ,scalar_t__) ;
 int FUNC_1 (int,int ,scalar_t__) ;
 int FUNC_2 (char*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (char*,char*,scalar_t__,...) ;
 scalar_t__ FUNC_6 (int,int ,int ) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,char*,int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11(const char *VAR_6, TimeLineID VAR_7,
     XLogRecPtr VAR_8, char *VAR_9, Size VAR_10)
{
 char *VAR_11;
 XLogRecPtr VAR_12;
 Size VAR_13;

 static int VAR_14 = -1;
 static XLogSegNo VAR_15 = 0;
 static uint32 VAR_16 = 0;

 VAR_11 = VAR_9;
 VAR_12 = VAR_8;
 VAR_13 = VAR_10;

 while (VAR_13 > 0)
 {
  uint32 VAR_17;
  int VAR_18;
  int VAR_19;

  VAR_17 = FUNC_3(VAR_12, VAR_4);

  if (VAR_14 < 0 || !FUNC_0(VAR_12, VAR_15, VAR_4))
  {
   char VAR_20[VAR_1];
   int VAR_21;


   if (VAR_14 >= 0)
    FUNC_4(VAR_14);

   FUNC_1(VAR_12, VAR_15, VAR_4);

   FUNC_2(VAR_20, VAR_7, VAR_15, VAR_4);







   for (VAR_21 = 0; VAR_21 < 10; VAR_21++)
   {
    VAR_14 = FUNC_7(VAR_6, VAR_20);
    if (VAR_14 >= 0)
     break;
    if (VAR_5 == VAR_0)
    {
     int VAR_22 = VAR_5;


     FUNC_8(500 * 1000);

     VAR_5 = VAR_22;
     continue;
    }

    break;
   }

   if (VAR_14 < 0)
    FUNC_5("could not find file \"%s\": %s",
       VAR_20, FUNC_10(VAR_5));
   VAR_16 = 0;
  }


  if (VAR_16 != VAR_17)
  {
   if (FUNC_6(VAR_14, (off_t) VAR_17, VAR_3) < 0)
   {
    int VAR_23 = VAR_5;
    char VAR_24[VAR_2];

    FUNC_2(VAR_24, VAR_7, VAR_15, VAR_4);

    FUNC_5("could not seek in log file %s to offset %u: %s",
       VAR_24, VAR_17, FUNC_10(VAR_23));
   }
   VAR_16 = VAR_17;
  }


  if (VAR_13 > (VAR_4 - VAR_17))
   VAR_18 = VAR_4 - VAR_17;
  else
   VAR_18 = VAR_13;

  VAR_19 = FUNC_9(VAR_14, VAR_11, VAR_18);
  if (VAR_19 <= 0)
  {
   int VAR_25 = VAR_5;
   char VAR_26[VAR_2];
   int VAR_27 = VAR_5;

   FUNC_2(VAR_26, VAR_7, VAR_15, VAR_4);
   VAR_5 = VAR_27;

   if (VAR_19 < 0)
    FUNC_5("could not read from log file %s, offset %u, length %d: %s",
       VAR_26, VAR_16, VAR_18, FUNC_10(VAR_25));
   else if (VAR_19 == 0)
    FUNC_5("could not read from log file %s, offset %u: read %d of %zu",
       VAR_26, VAR_16, VAR_19, (Size) VAR_18);
  }


  VAR_12 += VAR_19;

  VAR_16 += VAR_19;
  VAR_13 -= VAR_19;
  VAR_11 += VAR_19;
 }
}

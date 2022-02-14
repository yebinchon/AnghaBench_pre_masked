
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tzname ;
typedef int text ;
struct pg_tm {int dummy; } ;
typedef int pg_tz ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int*) ;
 int FUNC_1 (int ,char*,int*,int **) ;
 int FUNC_2 (struct pg_tm*,char*,int *) ;
 int FUNC_3 (struct pg_tm*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,...) ;
 scalar_t__ FUNC_9 (unsigned char) ;
 int * FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_13(struct pg_tm *VAR_8, text *VAR_9)
{
 char VAR_10[VAR_7 + 1];
 int VAR_11;
 int VAR_12;

 FUNC_12(VAR_9, VAR_10, sizeof(VAR_10));
 if (FUNC_9((unsigned char) *VAR_10))
  FUNC_5(VAR_5,
    (FUNC_6(VAR_4),
     FUNC_8("invalid input syntax for type %s: \"%s\"",
      "numeric time zone", VAR_10),
     FUNC_7("Numeric time zones must have \"-\" or \"+\" as first character.")));

 VAR_11 = FUNC_0(VAR_10, &VAR_12);
 if (VAR_11 != 0)
 {
  char *VAR_13;
  int VAR_14,
     VAR_15;
  pg_tz *VAR_16;

  if (VAR_11 == VAR_1)
   FUNC_5(VAR_5,
     (FUNC_6(VAR_4),
      FUNC_8("numeric time zone \"%s\" out of range", VAR_10)));
  else if (VAR_11 != VAR_0)
   FUNC_5(VAR_5,
     (FUNC_6(VAR_4),
      FUNC_8("time zone \"%s\" not recognized", VAR_10)));


  VAR_13 = FUNC_4(VAR_10,
              FUNC_11(VAR_10),
              0);
  VAR_14 = FUNC_1(0, VAR_13, &VAR_15, &VAR_16);

  if (VAR_14 == VAR_6 || VAR_14 == VAR_2)
  {

   VAR_12 = -VAR_15;
  }
  else if (VAR_14 == VAR_3)
  {

   VAR_12 = FUNC_2(VAR_8, VAR_10, VAR_16);
  }
  else
  {

   VAR_16 = FUNC_10(VAR_10);
   if (VAR_16)
    VAR_12 = FUNC_3(VAR_8, VAR_16);
   else
    FUNC_5(VAR_5,
      (FUNC_6(VAR_4),
       FUNC_8("time zone \"%s\" not recognized", VAR_10)));
  }
 }

 return VAR_12;
}

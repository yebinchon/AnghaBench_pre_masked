
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double VAR_4 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,...) ;
 int VAR_5 ;
 double FUNC_4 () ;
 double FUNC_5 () ;
 scalar_t__ FUNC_6 (unsigned char) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 char* FUNC_8 (char*) ;
 double FUNC_9 (char*,char**) ;

double
FUNC_10(char *VAR_6, char **VAR_7,
       const char *VAR_8, const char *VAR_9,
       bool *VAR_10)
{
 double VAR_11;
 char *VAR_12;

 if (VAR_10)
  *VAR_10 = 0;


 while (*VAR_6 != '\0' && FUNC_6((unsigned char) *VAR_6))
  VAR_6++;





 if (*VAR_6 == '\0')
  FUNC_0(FUNC_1(VAR_3,
        (FUNC_2(VAR_1),
         FUNC_3("invalid input syntax for type %s: \"%s\"",
          VAR_8, VAR_9))),
      VAR_10);

 VAR_5 = 0;
 VAR_11 = FUNC_9(VAR_6, &VAR_12);


 if (VAR_12 == VAR_6 || VAR_5 != 0)
 {
  int VAR_13 = VAR_5;
  if (FUNC_7(VAR_6, "NaN", 3) == 0)
  {
   VAR_11 = FUNC_5();
   VAR_12 = VAR_6 + 3;
  }
  else if (FUNC_7(VAR_6, "Infinity", 8) == 0)
  {
   VAR_11 = FUNC_4();
   VAR_12 = VAR_6 + 8;
  }
  else if (FUNC_7(VAR_6, "+Infinity", 9) == 0)
  {
   VAR_11 = FUNC_4();
   VAR_12 = VAR_6 + 9;
  }
  else if (FUNC_7(VAR_6, "-Infinity", 9) == 0)
  {
   VAR_11 = -FUNC_4();
   VAR_12 = VAR_6 + 9;
  }
  else if (FUNC_7(VAR_6, "inf", 3) == 0)
  {
   VAR_11 = FUNC_4();
   VAR_12 = VAR_6 + 3;
  }
  else if (FUNC_7(VAR_6, "+inf", 4) == 0)
  {
   VAR_11 = FUNC_4();
   VAR_12 = VAR_6 + 4;
  }
  else if (FUNC_7(VAR_6, "-inf", 4) == 0)
  {
   VAR_11 = -FUNC_4();
   VAR_12 = VAR_6 + 4;
  }
  else if (VAR_13 == VAR_0)
  {
   if (VAR_11 == 0.0 || VAR_11 >= VAR_4 || VAR_11 <= -VAR_4)
   {
    char *VAR_14 = FUNC_8(VAR_6);

    VAR_14[VAR_12 - VAR_6] = '\0';
    FUNC_0(FUNC_1(VAR_3,
          (FUNC_2(VAR_2),
           FUNC_3("\"%s\" is out of range for type double precision",
            VAR_14))),
        VAR_10);
   }
  }
  else
   FUNC_0(FUNC_1(VAR_3,
         (FUNC_2(VAR_1),
          FUNC_3("invalid input syntax for type "
           "%s: \"%s\"",
           VAR_8, VAR_9))),
       VAR_10);
 }
 while (*VAR_12 != '\0' && FUNC_6((unsigned char) *VAR_12))
  VAR_12++;


 if (VAR_7)
  *VAR_7 = VAR_12;
 else if (*VAR_12 != '\0')
  FUNC_0(FUNC_1(VAR_3,
        (FUNC_2(VAR_1),
         FUNC_3("invalid input syntax for type "
          "%s: \"%s\"",
          VAR_8, VAR_9))),
      VAR_10);

 return VAR_11;
}

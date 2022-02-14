
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 scalar_t__ FUNC_5 (char const*,int ,int ) ;
 char* FUNC_6 (char const*,char const*,char**,int*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_8, char *VAR_9, char **VAR_10,
   char **VAR_11)
{
 const char *VAR_12 = VAR_8;
 bool VAR_13;

 *VAR_9 = 0;


 while (*VAR_12 != '\0' && FUNC_4((unsigned char) *VAR_12))
  VAR_12++;


 if (FUNC_5(VAR_12, VAR_3,
        FUNC_7(VAR_3)) == 0)
 {
  *VAR_9 = VAR_2;
  *VAR_10 = ((void*)0);
  *VAR_11 = ((void*)0);

  VAR_12 += FUNC_7(VAR_3);


  while (*VAR_12 != '\0' && FUNC_4((unsigned char) *VAR_12))
   VAR_12++;


  if (*VAR_12 != '\0')
   FUNC_0(VAR_1,
     (FUNC_1(VAR_0),
      FUNC_3("malformed range literal: \"%s\"",
       VAR_8),
      FUNC_2("Junk after \"empty\" key word.")));

  return;
 }

 if (*VAR_12 == '[')
 {
  *VAR_9 |= VAR_4;
  VAR_12++;
 }
 else if (*VAR_12 == '(')
  VAR_12++;
 else
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("malformed range literal: \"%s\"",
      VAR_8),
     FUNC_2("Missing left parenthesis or bracket.")));

 VAR_12 = FUNC_6(VAR_8, VAR_12, VAR_10, &VAR_13);
 if (VAR_13)
  *VAR_9 |= VAR_5;

 if (*VAR_12 == ',')
  VAR_12++;
 else
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("malformed range literal: \"%s\"",
      VAR_8),
     FUNC_2("Missing comma after lower bound.")));

 VAR_12 = FUNC_6(VAR_8, VAR_12, VAR_11, &VAR_13);
 if (VAR_13)
  *VAR_9 |= VAR_7;

 if (*VAR_12 == ']')
 {
  *VAR_9 |= VAR_6;
  VAR_12++;
 }
 else if (*VAR_12 == ')')
  VAR_12++;
 else
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("malformed range literal: \"%s\"",
      VAR_8),
     FUNC_2("Too many commas.")));


 while (*VAR_12 != '\0' && FUNC_4((unsigned char) *VAR_12))
  VAR_12++;

 if (*VAR_12 != '\0')
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("malformed range literal: \"%s\"",
      VAR_8),
     FUNC_2("Junk after right parenthesis or bracket.")));
}

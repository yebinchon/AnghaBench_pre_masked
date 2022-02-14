
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int Oid ;
typedef int List ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int *,int*,int) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 char* FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char) ;
 int * FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(const char *VAR_5, bool VAR_6, List **VAR_7,
      int *VAR_8, Oid *VAR_9)
{
 char *VAR_10;
 char *VAR_11;
 char *VAR_12;
 char *VAR_13;
 bool VAR_14;
 bool VAR_15;
 int VAR_16;
 Oid VAR_17;
 int32 VAR_18;


 VAR_10 = FUNC_7(VAR_5);


 VAR_14 = 0;
 for (VAR_11 = VAR_10; *VAR_11; VAR_11++)
 {
  if (*VAR_11 == '"')
   VAR_14 = !VAR_14;
  else if (*VAR_11 == '(' && !VAR_14)
   break;
 }
 if (*VAR_11 == '\0')
  FUNC_1(VAR_2,
    (FUNC_2(VAR_0),
     FUNC_3("expected a left parenthesis")));


 *VAR_11++ = '\0';
 *VAR_7 = FUNC_9(VAR_10);


 VAR_12 = VAR_11 + FUNC_10(VAR_11);
 while (--VAR_12 > VAR_11)
 {
  if (!FUNC_8(*VAR_12))
   break;
 }
 if (*VAR_12 != ')')
  FUNC_1(VAR_2,
    (FUNC_2(VAR_0),
     FUNC_3("expected a right parenthesis")));

 *VAR_12 = '\0';


 *VAR_8 = 0;
 VAR_15 = 0;

 for (;;)
 {

  while (FUNC_8(*VAR_11))
   VAR_11++;
  if (*VAR_11 == '\0')
  {

   if (VAR_15)
    FUNC_1(VAR_2,
      (FUNC_2(VAR_0),
       FUNC_3("expected a type name")));
   break;
  }
  VAR_13 = VAR_11;


  VAR_14 = 0;
  VAR_16 = 0;
  for (; *VAR_11; VAR_11++)
  {
   if (*VAR_11 == '"')
    VAR_14 = !VAR_14;
   else if (*VAR_11 == ',' && !VAR_14 && VAR_16 == 0)
    break;
   else if (!VAR_14)
   {
    switch (*VAR_11)
    {
     case '(':
     case '[':
      VAR_16++;
      break;
     case ')':
     case ']':
      VAR_16--;
      break;
    }
   }
  }
  if (VAR_14 || VAR_16 != 0)
   FUNC_1(VAR_2,
     (FUNC_2(VAR_0),
      FUNC_3("improper type name")));

  VAR_12 = VAR_11;
  if (*VAR_11 == ',')
  {
   VAR_15 = 1;
   *VAR_11++ = '\0';
  }
  else
  {
   VAR_15 = 0;
   FUNC_0(*VAR_11 == '\0');
  }

  while (--VAR_12 >= VAR_13)
  {
   if (!FUNC_8(*VAR_12))
    break;
   *VAR_12 = '\0';
  }

  if (VAR_6 && FUNC_6(VAR_13, "none") == 0)
  {

   VAR_17 = VAR_4;
   VAR_18 = -1;
  }
  else
  {

   FUNC_4(VAR_13, &VAR_17, &VAR_18, 0);
  }
  if (*VAR_8 >= VAR_3)
   FUNC_1(VAR_2,
     (FUNC_2(VAR_1),
      FUNC_3("too many arguments")));

  VAR_9[*VAR_8] = VAR_17;
  (*VAR_8)++;
 }

 FUNC_5(VAR_10);
}

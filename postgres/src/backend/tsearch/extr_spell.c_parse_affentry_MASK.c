
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static bool
FUNC_9(char *VAR_8, char *VAR_9, char *VAR_10, char *VAR_11)
{
 int VAR_12 = VAR_6;
 char *VAR_13 = VAR_9,
      *VAR_14 = VAR_10,
      *VAR_15 = VAR_11;

 *VAR_9 = *VAR_10 = *VAR_11 = '\0';

 while (*VAR_8)
 {
  if (VAR_12 == VAR_6)
  {
   if (FUNC_7(VAR_8, '#'))
    return 0;
   else if (!FUNC_8(VAR_8))
   {
    FUNC_0(VAR_13, VAR_8);
    VAR_13 += FUNC_5(VAR_8);
    VAR_12 = VAR_3;
   }
  }
  else if (VAR_12 == VAR_3)
  {
   if (FUNC_7(VAR_8, '>'))
   {
    *VAR_13 = '\0';
    VAR_12 = VAR_5;
   }
   else if (!FUNC_8(VAR_8))
   {
    FUNC_0(VAR_13, VAR_8);
    VAR_13 += FUNC_5(VAR_8);
   }
  }
  else if (VAR_12 == VAR_5)
  {
   if (FUNC_7(VAR_8, '-'))
   {
    VAR_12 = VAR_2;
   }
   else if (FUNC_6(VAR_8) || FUNC_7(VAR_8, '\'') )
   {
    FUNC_0(VAR_15, VAR_8);
    VAR_15 += FUNC_5(VAR_8);
    VAR_12 = VAR_4;
   }
   else if (!FUNC_8(VAR_8))
    FUNC_2(VAR_1,
      (FUNC_3(VAR_0),
       FUNC_4("syntax error")));
  }
  else if (VAR_12 == VAR_2)
  {
   if (FUNC_7(VAR_8, ','))
   {
    *VAR_14 = '\0';
    VAR_12 = VAR_7;
   }
   else if (FUNC_6(VAR_8))
   {
    FUNC_0(VAR_14, VAR_8);
    VAR_14 += FUNC_5(VAR_8);
   }
   else if (!FUNC_8(VAR_8))
    FUNC_2(VAR_1,
      (FUNC_3(VAR_0),
       FUNC_4("syntax error")));
  }
  else if (VAR_12 == VAR_7)
  {
   if (FUNC_7(VAR_8, '-'))
   {
    break;
   }
   else if (FUNC_6(VAR_8))
   {
    FUNC_0(VAR_15, VAR_8);
    VAR_15 += FUNC_5(VAR_8);
    VAR_12 = VAR_4;
   }
   else if (!FUNC_8(VAR_8))
    FUNC_2(VAR_1,
      (FUNC_3(VAR_0),
       FUNC_4("syntax error")));
  }
  else if (VAR_12 == VAR_4)
  {
   if (FUNC_7(VAR_8, '#'))
   {
    *VAR_15 = '\0';
    break;
   }
   else if (FUNC_6(VAR_8))
   {
    FUNC_0(VAR_15, VAR_8);
    VAR_15 += FUNC_5(VAR_8);
   }
   else if (!FUNC_8(VAR_8))
    FUNC_2(VAR_1,
      (FUNC_3(VAR_0),
       FUNC_4("syntax error")));
  }
  else
   FUNC_1(VAR_1, "unrecognized state in parse_affentry: %d", VAR_12);

  VAR_8 += FUNC_5(VAR_8);
 }

 *VAR_13 = *VAR_14 = *VAR_15 = '\0';

 return (*VAR_9 && (*VAR_10 || *VAR_11));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 char* FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,char*,int) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int) ;

__attribute__((used)) static text *
FUNC_13(text *VAR_4, text *VAR_5)
{
 text *VAR_6;
 char *VAR_7,
      *VAR_8,
      *VAR_9;
 int VAR_10,
    VAR_11;
 bool VAR_12 = 0;
 bool VAR_13 = 0;
 int VAR_14 = 0;

 VAR_7 = FUNC_2(VAR_4);
 VAR_10 = FUNC_3(VAR_4);
 if (VAR_5 == ((void*)0))
 {

  VAR_8 = "\\";
  VAR_11 = 1;
 }
 else
 {
  VAR_8 = FUNC_2(VAR_5);
  VAR_11 = FUNC_3(VAR_5);
  if (VAR_11 == 0)
   VAR_8 = ((void*)0);
  else if (VAR_11 > 1)
  {
   int VAR_15 = FUNC_12(VAR_8, VAR_11);

   if (VAR_15 > 1)
    FUNC_4(VAR_2,
      (FUNC_5(VAR_0),
       FUNC_7("invalid escape string"),
       FUNC_6("Escape string must be empty or one character.")));
  }
 }
 VAR_6 = (text *) FUNC_10(VAR_3 + 23 + 3 * (size_t) VAR_10);
 VAR_9 = FUNC_1(VAR_6);

 *VAR_9++ = '^';
 *VAR_9++ = '(';
 *VAR_9++ = '?';
 *VAR_9++ = ':';

 while (VAR_10 > 0)
 {
  char VAR_16 = *VAR_7;
  if (VAR_11 > 1)
  {
   int VAR_17 = FUNC_11(VAR_7);

   if (VAR_17 > 1)
   {

    if (VAR_12)
    {
     *VAR_9++ = '\\';
     FUNC_9(VAR_9, VAR_7, VAR_17);
     VAR_9 += VAR_17;
     VAR_12 = 0;
    }
    else if (VAR_8 && VAR_11 == VAR_17 && FUNC_8(VAR_8, VAR_7, VAR_17) == 0)
    {

     VAR_12 = 1;
    }
    else
    {





     FUNC_9(VAR_9, VAR_7, VAR_17);
     VAR_9 += VAR_17;
    }

    VAR_7 += VAR_17;
    VAR_10 -= VAR_17;

    continue;
   }
  }


  if (VAR_12)
  {
   if (VAR_16 == '"' && !VAR_13)
   {

    if (VAR_14 == 0)
    {
     *VAR_9++ = ')';
     *VAR_9++ = '{';
     *VAR_9++ = '1';
     *VAR_9++ = ',';
     *VAR_9++ = '1';
     *VAR_9++ = '}';
     *VAR_9++ = '?';
     *VAR_9++ = '(';
    }
    else if (VAR_14 == 1)
    {
     *VAR_9++ = ')';
     *VAR_9++ = '{';
     *VAR_9++ = '1';
     *VAR_9++ = ',';
     *VAR_9++ = '1';
     *VAR_9++ = '}';
     *VAR_9++ = '(';
     *VAR_9++ = '?';
     *VAR_9++ = ':';
    }
    else
     FUNC_4(VAR_2,
       (FUNC_5(VAR_1),
        FUNC_7("SQL regular expression may not contain more than two escape-double-quote separators")));
    VAR_14++;
   }
   else
   {





    *VAR_9++ = '\\';
    *VAR_9++ = VAR_16;
   }
   VAR_12 = 0;
  }
  else if (VAR_8 && VAR_16 == *VAR_8)
  {

   VAR_12 = 1;
  }
  else if (VAR_13)
  {
   if (VAR_16 == '\\')
    *VAR_9++ = '\\';
   *VAR_9++ = VAR_16;
   if (VAR_16 == ']')
    VAR_13 = 0;
  }
  else if (VAR_16 == '[')
  {
   *VAR_9++ = VAR_16;
   VAR_13 = 1;
  }
  else if (VAR_16 == '%')
  {
   *VAR_9++ = '.';
   *VAR_9++ = '*';
  }
  else if (VAR_16 == '_')
   *VAR_9++ = '.';
  else if (VAR_16 == '(')
  {

   *VAR_9++ = '(';
   *VAR_9++ = '?';
   *VAR_9++ = ':';
  }
  else if (VAR_16 == '\\' || VAR_16 == '.' ||
     VAR_16 == '^' || VAR_16 == '$')
  {
   *VAR_9++ = '\\';
   *VAR_9++ = VAR_16;
  }
  else
   *VAR_9++ = VAR_16;
  VAR_7++, VAR_10--;
 }

 *VAR_9++ = ')';
 *VAR_9++ = '$';

 FUNC_0(VAR_6, VAR_9 - ((char *) VAR_6));

 return VAR_6;
}

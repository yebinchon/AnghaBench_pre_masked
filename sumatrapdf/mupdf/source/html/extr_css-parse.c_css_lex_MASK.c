
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexbuf {char c; scalar_t__ string_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct lexbuf*,char) ;
 int FUNC_1 (struct lexbuf*,char) ;
 int FUNC_2 (struct lexbuf*) ;
 int FUNC_3 (struct lexbuf*) ;
 int FUNC_4 (struct lexbuf*) ;
 int FUNC_5 (struct lexbuf*) ;
 int FUNC_6 (struct lexbuf*,char) ;
 int FUNC_7 (struct lexbuf*) ;
 int FUNC_8 (struct lexbuf*,unsigned char) ;
 int FUNC_9 (struct lexbuf*,char*) ;
 scalar_t__ FUNC_10 (char) ;
 scalar_t__ FUNC_11 (char) ;
 scalar_t__ FUNC_12 (char) ;

__attribute__((used)) static int FUNC_13(struct lexbuf *VAR_2)
{
 int VAR_3;



 VAR_2->string_len = 0;

restart:
 if (VAR_2->c == 0)
  return VAR_1;

 if (FUNC_12(VAR_2->c))
 {
  while (FUNC_12(VAR_2->c))
   FUNC_4(VAR_2);
  return ' ';
 }

 if (FUNC_0(VAR_2, '/'))
 {
  if (FUNC_0(VAR_2, '*'))
  {
   while (VAR_2->c)
   {
    if (FUNC_0(VAR_2, '*'))
    {
     while (VAR_2->c == '*')
      FUNC_4(VAR_2);
     if (FUNC_0(VAR_2, '/'))
      goto restart;
    }
    FUNC_4(VAR_2);
   }
   FUNC_9(VAR_2, "unterminated comment");
  }
  return '/';
 }

 if (FUNC_0(VAR_2, '<'))
 {
  if (FUNC_0(VAR_2, '!'))
  {
   FUNC_1(VAR_2, '-');
   FUNC_1(VAR_2, '-');
   goto restart;
  }
  return '<';
 }

 if (FUNC_0(VAR_2, '-'))
 {
  if (FUNC_0(VAR_2, '-'))
  {
   FUNC_1(VAR_2, '>');
   goto restart;
  }
  if (FUNC_11(VAR_2->c))
  {
   FUNC_8(VAR_2, '-');
   return FUNC_3(VAR_2);
  }
  return '-';
 }

 if (FUNC_0(VAR_2, '.'))
 {
  if (VAR_2->c >= '0' && VAR_2->c <= '9')
  {
   FUNC_8(VAR_2, '.');
   return FUNC_5(VAR_2);
  }
  return '.';
 }

 if (FUNC_0(VAR_2, '#'))
 {
  if (FUNC_10(VAR_2->c))
   return FUNC_2(VAR_2);
  return '#';
 }

 if (FUNC_0(VAR_2, '"'))
  return FUNC_6(VAR_2, '"');
 if (FUNC_0(VAR_2, '\''))
  return FUNC_6(VAR_2, '\'');

 if (VAR_2->c >= '0' && VAR_2->c <= '9')
  return FUNC_5(VAR_2);

 if (FUNC_0(VAR_2, 'u'))
 {
  if (FUNC_0(VAR_2, 'r'))
  {
   if (FUNC_0(VAR_2, 'l'))
   {
    if (FUNC_0(VAR_2, '('))
    {
     while (FUNC_12(VAR_2->c))
      FUNC_4(VAR_2);
     if (FUNC_0(VAR_2, '"'))
      FUNC_6(VAR_2, '"');
     else if (FUNC_0(VAR_2, '\''))
      FUNC_6(VAR_2, '\'');
     else
      FUNC_7(VAR_2);
     while (FUNC_12(VAR_2->c))
      FUNC_4(VAR_2);
     FUNC_1(VAR_2, ')');
     return VAR_0;
    }
    FUNC_8(VAR_2, 'u');
    FUNC_8(VAR_2, 'r');
    FUNC_8(VAR_2, 'l');
    return FUNC_3(VAR_2);
   }
   FUNC_8(VAR_2, 'u');
   FUNC_8(VAR_2, 'r');
   return FUNC_3(VAR_2);
  }
  FUNC_8(VAR_2, 'u');
  return FUNC_3(VAR_2);
 }

 if (FUNC_11(VAR_2->c))
 {
  FUNC_8(VAR_2, VAR_2->c);
  FUNC_4(VAR_2);
  return FUNC_3(VAR_2);
 }

 VAR_3 = VAR_2->c;
 FUNC_4(VAR_2);
 return VAR_3;
}

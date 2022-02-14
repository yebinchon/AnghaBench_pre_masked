
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int digits; char sign; char* val_string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (long) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char const*,int) ;
 size_t FUNC_6 (char const*) ;
 TYPE_1__ VAR_2 ;

int
FUNC_7(long VAR_3, const char *VAR_4, char *VAR_5)
{
 size_t VAR_6 = FUNC_6(VAR_4);
 size_t VAR_7;
 int VAR_8,
    VAR_9,
    VAR_10,
    VAR_11;
 int VAR_12 = 0,
    VAR_13 = 0,
    VAR_14 = 0,
    VAR_15 = 0,
    VAR_16 = 0,
    VAR_17 = 0;
 char *VAR_18;
 char VAR_19[2] = " ";
 char VAR_20 = ' ',
    VAR_21 = ' ';

 VAR_18 = (char *) FUNC_3(VAR_6 + 1);
 if (!VAR_18)
 {
  VAR_1 = VAR_0;
  return -1;
 }


 if (FUNC_2(VAR_3) == -1)
 {
  FUNC_0(VAR_18);
  VAR_1 = VAR_0;
  return -1;
 }


 if (FUNC_5(VAR_4, (int) '<'))
  VAR_12 = 1;


 if (FUNC_5(VAR_4, (int) '(') && FUNC_5(VAR_4, (int) ')'))
  VAR_17 = 1;



 VAR_11 = FUNC_1(VAR_4);


 VAR_18[0] = '\0';
 VAR_10 = VAR_2.digits - 1;
 for (VAR_8 = VAR_6 - 1, VAR_9 = 0; VAR_8 >= 0; VAR_8--, VAR_9++)
 {

  if (VAR_10 < 0)
  {
   VAR_13 = 1;
   if (VAR_10 == -1)
    VAR_14 = 1;
   if (VAR_12)
   {

    if (VAR_14)
     if (VAR_16)
     {
      VAR_18[VAR_9] = '\0';
      break;
     }
   }
  }

  if (VAR_11 >= 0 && VAR_11 <= VAR_8)
  {
   if (VAR_11 < VAR_8)
   {
    if (VAR_4[VAR_8] == ')')
     VAR_19[0] = VAR_2.sign == '-' ? ')' : ' ';
    else
     VAR_19[0] = '0';
   }
   else
    VAR_19[0] = '.';
   FUNC_4(VAR_18, VAR_19);
   continue;
  }

  if (VAR_13 && VAR_4[VAR_8] == ',')
   VAR_21 = VAR_20;
  else
   VAR_21 = VAR_4[VAR_8];

  if (VAR_10 < 0 && VAR_12 && VAR_14 && !VAR_16 && VAR_21 != '+' && VAR_21 != '-')
   continue;

  switch (VAR_21)
  {
   case ',':
    VAR_19[0] = ',';
    VAR_10++;
    break;
   case '*':
    if (VAR_13)
     VAR_19[0] = '*';
    else
     VAR_19[0] = VAR_2.val_string[VAR_10];
    break;
   case '&':
    if (VAR_13)
     VAR_19[0] = '0';
    else
     VAR_19[0] = VAR_2.val_string[VAR_10];
    break;
   case '#':
    if (VAR_13)
     VAR_19[0] = ' ';
    else
     VAR_19[0] = VAR_2.val_string[VAR_10];
    break;
   case '-':
    if (VAR_14 && VAR_2.sign == '-' && !VAR_16)
    {
     VAR_19[0] = '-';
     VAR_16 = 1;
    }
    else if (VAR_13)
     VAR_19[0] = ' ';
    else
     VAR_19[0] = VAR_2.val_string[VAR_10];
    break;
   case '+':
    if (VAR_14 && !VAR_16)
    {
     VAR_19[0] = VAR_2.sign;
     VAR_16 = 1;
    }
    else if (VAR_13)
     VAR_19[0] = ' ';
    else
     VAR_19[0] = VAR_2.val_string[VAR_10];
    break;
   case '(':
    if (VAR_14 && VAR_17 && VAR_2.sign == '-')
     VAR_19[0] = '(';
    else if (VAR_13)
     VAR_19[0] = ' ';
    else
     VAR_19[0] = VAR_2.val_string[VAR_10];
    break;
   case ')':
    if (VAR_17 && VAR_2.sign == '-')
     VAR_19[0] = ')';
    else
     VAR_19[0] = ' ';
    break;
   case '$':
    if (VAR_13 && !VAR_15)
    {
     VAR_19[0] = '$';
     VAR_15 = 1;
    }
    else if (VAR_13)
     VAR_19[0] = ' ';
    else
     VAR_19[0] = VAR_2.val_string[VAR_10];
    break;
   case '<':
    VAR_19[0] = VAR_2.val_string[VAR_10];
    break;
   default:
    VAR_19[0] = VAR_4[VAR_8];
  }
  FUNC_4(VAR_18, VAR_19);
  VAR_20 = VAR_4[VAR_8];
  VAR_10--;
 }

 VAR_18[VAR_6] = '\0';


 VAR_7 = FUNC_6(VAR_18);
 VAR_5[0] = '\0';
 for (VAR_8 = VAR_7 - 1; VAR_8 >= 0; VAR_8--)
 {
  VAR_19[0] = VAR_18[VAR_8];
  FUNC_4(VAR_5, VAR_19);
 }
 VAR_5[VAR_7] = '\0';


 FUNC_0(VAR_18);
 FUNC_0(VAR_2.val_string);

 return 0;
}

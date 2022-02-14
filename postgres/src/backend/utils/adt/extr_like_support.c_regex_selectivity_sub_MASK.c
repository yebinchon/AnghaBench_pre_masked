
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double Selectivity ;


 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;

__attribute__((used)) static Selectivity
FUNC_0(const char *VAR_4, int VAR_5, bool VAR_6)
{
 Selectivity VAR_7 = 1.0;
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
 {
  if (VAR_4[VAR_10] == '(')
  {
   if (VAR_8 == 0)
    VAR_9 = VAR_10;
   VAR_8++;
  }
  else if (VAR_4[VAR_10] == ')' && VAR_8 > 0)
  {
   VAR_8--;
   if (VAR_8 == 0)
    VAR_7 *= FUNC_0(VAR_4 + (VAR_9 + 1),
            VAR_10 - (VAR_9 + 1),
            VAR_6);
  }
  else if (VAR_4[VAR_10] == '|' && VAR_8 == 0)
  {




   VAR_7 += FUNC_0(VAR_4 + (VAR_10 + 1),
           VAR_5 - (VAR_10 + 1),
           VAR_6);
   break;
  }
  else if (VAR_4[VAR_10] == '[')
  {
   bool VAR_11 = 0;

   if (VAR_4[++VAR_10] == '^')
   {
    VAR_11 = 1;
    VAR_10++;
   }
   if (VAR_4[VAR_10] == ']')
    VAR_10++;
   while (VAR_10 < VAR_5 && VAR_4[VAR_10] != ']')
    VAR_10++;
   if (VAR_8 == 0)
    VAR_7 *= (VAR_11 ? (1.0 - VAR_1) : VAR_1);
  }
  else if (VAR_4[VAR_10] == '.')
  {
   if (VAR_8 == 0)
    VAR_7 *= VAR_0;
  }
  else if (VAR_4[VAR_10] == '*' ||
     VAR_4[VAR_10] == '?' ||
     VAR_4[VAR_10] == '+')
  {

   if (VAR_8 == 0)
    VAR_7 *= VAR_3;
  }
  else if (VAR_4[VAR_10] == '{')
  {
   while (VAR_10 < VAR_5 && VAR_4[VAR_10] != '}')
    VAR_10++;
   if (VAR_8 == 0)
    VAR_7 *= VAR_3;
  }
  else if (VAR_4[VAR_10] == '\\')
  {

   VAR_10++;
   if (VAR_10 >= VAR_5)
    break;
   if (VAR_8 == 0)
    VAR_7 *= VAR_2;
  }
  else
  {
   if (VAR_8 == 0)
    VAR_7 *= VAR_2;
  }
 }

 if (VAR_7 > 1.0)
  VAR_7 = 1.0;
 return VAR_7;
}

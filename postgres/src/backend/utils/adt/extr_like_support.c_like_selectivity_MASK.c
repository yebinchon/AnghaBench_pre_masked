
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double Selectivity ;


 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;

__attribute__((used)) static Selectivity
FUNC_0(const char *VAR_3, int VAR_4, bool VAR_5)
{
 Selectivity VAR_6 = 1.0;
 int VAR_7;


 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
 {
  if (VAR_3[VAR_7] != '%' && VAR_3[VAR_7] != '_')
   break;
 }

 for (; VAR_7 < VAR_4; VAR_7++)
 {

  if (VAR_3[VAR_7] == '%')
   VAR_6 *= VAR_2;
  else if (VAR_3[VAR_7] == '_')
   VAR_6 *= VAR_0;
  else if (VAR_3[VAR_7] == '\\')
  {

   VAR_7++;
   if (VAR_7 >= VAR_4)
    break;
   VAR_6 *= VAR_1;
  }
  else
   VAR_6 *= VAR_1;
 }

 if (VAR_6 > 1.0)
  VAR_6 = 1.0;
 return VAR_6;
}

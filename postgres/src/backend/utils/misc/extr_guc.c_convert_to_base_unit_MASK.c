
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int base_unit; double multiplier; scalar_t__* unit; } ;
typedef TYPE_1__ unit_conversion ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 TYPE_1__* VAR_2 ;
 double FUNC_1 (double) ;
 scalar_t__ FUNC_2 (char*,scalar_t__*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static bool
FUNC_3(double VAR_4, const char *VAR_5,
      int VAR_6, double *VAR_7)
{
 char VAR_8[VAR_1 + 1];
 int VAR_9;
 const unit_conversion *VAR_10;
 int VAR_11;


 VAR_9 = 0;
 while (*VAR_5 != '\0' && !FUNC_0((unsigned char) *VAR_5) &&
     VAR_9 < VAR_1)
  VAR_8[VAR_9++] = *(VAR_5++);
 VAR_8[VAR_9] = '\0';

 while (FUNC_0((unsigned char) *VAR_5))
  VAR_5++;
 if (*VAR_5 != '\0')
  return 0;


 if (VAR_6 & VAR_0)
  VAR_10 = VAR_2;
 else
  VAR_10 = VAR_3;

 for (VAR_11 = 0; *VAR_10[VAR_11].unit; VAR_11++)
 {
  if (VAR_6 == VAR_10[VAR_11].base_unit &&
   FUNC_2(VAR_8, VAR_10[VAR_11].unit) == 0)
  {
   double VAR_12 = VAR_4 * VAR_10[VAR_11].multiplier;






   if (*VAR_10[VAR_11 + 1].unit &&
    VAR_6 == VAR_10[VAR_11 + 1].base_unit)
    VAR_12 = FUNC_1(VAR_12 / VAR_10[VAR_11 + 1].multiplier) *
     VAR_10[VAR_11 + 1].multiplier;

   *VAR_7 = VAR_12;
   return 1;
  }
 }
 return 0;
}

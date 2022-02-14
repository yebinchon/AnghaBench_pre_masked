
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* unit; int base_unit; double multiplier; } ;
typedef TYPE_1__ unit_conversion ;
typedef int int64 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_2(int64 VAR_3, int VAR_4,
         int64 *VAR_5, const char **VAR_6)
{
 const unit_conversion *VAR_7;
 int VAR_8;

 *VAR_6 = ((void*)0);

 if (VAR_4 & VAR_0)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_2;

 for (VAR_8 = 0; *VAR_7[VAR_8].unit; VAR_8++)
 {
  if (VAR_4 == VAR_7[VAR_8].base_unit)
  {





   if (VAR_7[VAR_8].multiplier <= 1.0 ||
    VAR_3 % (int64) VAR_7[VAR_8].multiplier == 0)
   {
    *VAR_5 = (int64) FUNC_1(VAR_3 / VAR_7[VAR_8].multiplier);
    *VAR_6 = VAR_7[VAR_8].unit;
    break;
   }
  }
 }

 FUNC_0(*VAR_6 != ((void*)0));
}

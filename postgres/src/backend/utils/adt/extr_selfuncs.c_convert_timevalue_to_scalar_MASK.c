
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double zone; int time; } ;
typedef TYPE_1__ TimeTzADT ;
struct TYPE_6__ {double day; double month; int time; } ;
typedef int Oid ;
typedef TYPE_2__ Interval ;
typedef int Datum ;



 double VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 double FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 double FUNC_4 (int ) ;
 double FUNC_5 (int ) ;

 scalar_t__ VAR_1 ;




 double VAR_2 ;
 double FUNC_6 (int ) ;

__attribute__((used)) static double
FUNC_7(Datum VAR_3, Oid VAR_4, bool *VAR_5)
{
 switch (VAR_4)
 {
  case 130:
   return FUNC_4(VAR_3);
  case 129:
   return FUNC_5(VAR_3);
  case 133:
   return FUNC_6(FUNC_0(VAR_3));
  case 132:
   {
    Interval *VAR_6 = FUNC_1(VAR_3);






    return VAR_6->time + VAR_6->day * (double) VAR_2 +
     VAR_6->month * ((VAR_0 / (double) VAR_1) * VAR_2);
   }
  case 131:
   return FUNC_2(VAR_3);
  case 128:
   {
    TimeTzADT *VAR_7 = FUNC_3(VAR_3);


    return (double) (VAR_7->time + (VAR_7->zone * 1000000.0));
   }
 }

 *VAR_5 = 1;
 return 0;
}

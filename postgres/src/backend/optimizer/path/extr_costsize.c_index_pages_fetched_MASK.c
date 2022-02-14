
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double total_table_pages; } ;
typedef TYPE_1__ PlannerInfo ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 double FUNC_1 (double,double) ;
 double FUNC_2 (double) ;
 scalar_t__ VAR_0 ;

double
FUNC_3(double VAR_1, BlockNumber VAR_2,
     double VAR_3, PlannerInfo *VAR_4)
{
 double VAR_5;
 double VAR_6;
 double VAR_7,
    VAR_8;


 VAR_7 = (VAR_2 > 1) ? (double) VAR_2 : 1.0;


 VAR_6 = VAR_4->total_table_pages + VAR_3;
 VAR_6 = FUNC_1(VAR_6, 1.0);
 FUNC_0(VAR_7 <= VAR_6);


 VAR_8 = (double) VAR_0 * VAR_7 / VAR_6;


 if (VAR_8 <= 1.0)
  VAR_8 = 1.0;
 else
  VAR_8 = FUNC_2(VAR_8);


 if (VAR_7 <= VAR_8)
 {
  VAR_5 =
   (2.0 * VAR_7 * VAR_1) / (2.0 * VAR_7 + VAR_1);
  if (VAR_5 >= VAR_7)
   VAR_5 = VAR_7;
  else
   VAR_5 = FUNC_2(VAR_5);
 }
 else
 {
  double VAR_9;

  VAR_9 = (2.0 * VAR_7 * VAR_8) / (2.0 * VAR_7 - VAR_8);
  if (VAR_1 <= VAR_9)
  {
   VAR_5 =
    (2.0 * VAR_7 * VAR_1) / (2.0 * VAR_7 + VAR_1);
  }
  else
  {
   VAR_5 =
    VAR_8 + (VAR_1 - VAR_9) * (VAR_7 - VAR_8) / VAR_7;
  }
  VAR_5 = FUNC_2(VAR_5);
 }
 return VAR_5;
}

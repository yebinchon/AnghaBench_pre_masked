
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int num_batches; } ;
struct TYPE_6__ {int pathtype; double total_cost; double startup_cost; double rows; TYPE_1__* pathtarget; } ;
struct TYPE_5__ {int width; } ;
typedef int PlannerInfo ;
typedef TYPE_2__ Path ;
typedef TYPE_3__ HashPath ;
typedef double Cost ;


 double VAR_0 ;






 double FUNC_0 (double) ;
 double VAR_1 ;
 double VAR_2 ;
 double FUNC_1 (double,int ) ;
 double VAR_3 ;
 long VAR_4 ;

__attribute__((used)) static void
FUNC_2(PlannerInfo *VAR_5, Path *VAR_6,
   Cost *VAR_7,
   Cost *VAR_8)
{
 switch (VAR_6->pathtype)
 {
  case 132:
   *VAR_7 = 0;
   *VAR_8 = VAR_6->total_cost - VAR_6->startup_cost;
   break;
  case 131:





   if (((HashPath *) VAR_6)->num_batches == 1)
   {

    *VAR_7 = 0;
    *VAR_8 = VAR_6->total_cost - VAR_6->startup_cost;
   }
   else
   {

    *VAR_7 = VAR_6->startup_cost;
    *VAR_8 = VAR_6->total_cost;
   }
   break;
  case 133:
  case 128:
   {






    Cost VAR_9 = VAR_2 * VAR_6->rows;
    double VAR_10 = FUNC_1(VAR_6->rows,
              VAR_6->pathtarget->width);
    long VAR_11 = VAR_4 * 1024L;

    if (VAR_10 > VAR_11)
    {

     double VAR_12 = FUNC_0(VAR_10 / VAR_0);

     VAR_9 += VAR_3 * VAR_12;
    }
    *VAR_7 = 0;
    *VAR_8 = VAR_9;
   }
   break;
  case 130:
  case 129:
   {
    Cost VAR_13 = VAR_1 * VAR_6->rows;
    double VAR_14 = FUNC_1(VAR_6->rows,
              VAR_6->pathtarget->width);
    long VAR_15 = VAR_4 * 1024L;

    if (VAR_14 > VAR_15)
    {

     double VAR_16 = FUNC_0(VAR_14 / VAR_0);

     VAR_13 += VAR_3 * VAR_16;
    }
    *VAR_7 = 0;
    *VAR_8 = VAR_13;
   }
   break;
  default:
   *VAR_7 = VAR_6->startup_cost;
   *VAR_8 = VAR_6->total_cost;
   break;
 }
}

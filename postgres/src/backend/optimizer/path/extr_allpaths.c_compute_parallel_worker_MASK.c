
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rel_parallel_workers; scalar_t__ reloptkind; } ;
typedef TYPE_1__ RelOptInfo ;
typedef double BlockNumber ;


 int VAR_0 ;
 int FUNC_0 (double,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;

int
FUNC_2(RelOptInfo *VAR_4, double VAR_5, double VAR_6,
      int VAR_7)
{
 int VAR_8 = 0;





 if (VAR_4->rel_parallel_workers != -1)
  VAR_8 = VAR_4->rel_parallel_workers;
 else
 {
  if (VAR_4->reloptkind == VAR_1 &&
   ((VAR_5 >= 0 && VAR_5 < VAR_3) ||
    (VAR_6 >= 0 && VAR_6 < VAR_2)))
   return 0;

  if (VAR_5 >= 0)
  {
   int VAR_9;
   int VAR_10 = 1;
   VAR_9 = FUNC_0(VAR_3, 1);
   while (VAR_5 >= (BlockNumber) (VAR_9 * 3))
   {
    VAR_10++;
    VAR_9 *= 3;
    if (VAR_9 > VAR_0 / 3)
     break;
   }

   VAR_8 = VAR_10;
  }

  if (VAR_6 >= 0)
  {
   int VAR_11 = 1;
   int VAR_12;


   VAR_12 = FUNC_0(VAR_2, 1);
   while (VAR_6 >= (BlockNumber) (VAR_12 * 3))
   {
    VAR_11++;
    VAR_12 *= 3;
    if (VAR_12 > VAR_0 / 3)
     break;
   }

   if (VAR_8 > 0)
    VAR_8 = FUNC_1(VAR_8, VAR_11);
   else
    VAR_8 = VAR_11;
  }
 }


 VAR_8 = FUNC_1(VAR_8, VAR_7);

 return VAR_8;
}

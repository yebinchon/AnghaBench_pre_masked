
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * blocker; int * waiter; } ;
typedef int PGPROC ;
typedef int EDGE ;


 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (int *,int *,int*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static int
FUNC_2(PGPROC *VAR_6)
{
 int VAR_7 = 0;
 EDGE *VAR_8 = VAR_5 + VAR_4;
 int VAR_9;
 int VAR_10;




 if (VAR_4 + VAR_0 > VAR_2)
  return -1;





 if (!FUNC_0(VAR_1, VAR_3))
  return -1;






 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
 {
  if (FUNC_1(VAR_1[VAR_10].waiter, VAR_8, &VAR_9))
  {
   if (VAR_9 == 0)
    return -1;
   VAR_7 = VAR_9;
  }
  if (FUNC_1(VAR_1[VAR_10].blocker, VAR_8, &VAR_9))
  {
   if (VAR_9 == 0)
    return -1;
   VAR_7 = VAR_9;
  }
 }
 if (FUNC_1(VAR_6, VAR_8, &VAR_9))
 {
  if (VAR_9 == 0)
   return -1;
  VAR_7 = VAR_9;
 }
 return VAR_7;
}

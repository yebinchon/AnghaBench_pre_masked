
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int count ;
struct TYPE_6__ {int size_; } ;
typedef TYPE_1__ HStore ;
typedef int HEntry ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_8(HStore *VAR_1)
{
 int VAR_2 = FUNC_6(VAR_1);
 HEntry *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = (VAR_2) ? FUNC_2(VAR_3[2 * (VAR_2) - 1]) : 0;
 int VAR_5 = FUNC_1(VAR_2, VAR_4);
 int VAR_6;

 if (VAR_1->size_ & VAR_0)
  return 2;

 if (VAR_2 == 0)
  return 2;

 if (!FUNC_3(VAR_3[0]))
  return 0;

 if (VAR_5 > FUNC_7(VAR_1))
  return 0;



 for (VAR_6 = 1; VAR_6 < 2 * VAR_2; ++VAR_6)
 {
  if (FUNC_3(VAR_3[VAR_6])
   || (FUNC_2(VAR_3[VAR_6]) < FUNC_2(VAR_3[VAR_6 - 1])))
   return 0;
 }



 for (VAR_6 = 1; VAR_6 < VAR_2; ++VAR_6)
 {
  if (FUNC_5(VAR_3, VAR_6) < FUNC_5(VAR_3, VAR_6 - 1))
   return 0;
  if (FUNC_4(VAR_3[2 * VAR_6]))
   return 0;
 }

 if (VAR_5 != FUNC_7(VAR_1))
  return 1;

 return 2;
}

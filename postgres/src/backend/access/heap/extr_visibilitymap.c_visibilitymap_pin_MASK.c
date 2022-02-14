
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,int) ;

void
FUNC_5(Relation VAR_0, BlockNumber VAR_1, Buffer *VAR_2)
{
 BlockNumber VAR_3 = FUNC_2(VAR_1);


 if (FUNC_1(*VAR_2))
 {
  if (FUNC_0(*VAR_2) == VAR_3)
   return;

  FUNC_3(*VAR_2);
 }
 *VAR_2 = FUNC_4(VAR_0, VAR_3, 1);
}

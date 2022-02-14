
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Timestamp ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(Timestamp VAR_0, int VAR_1, Timestamp VAR_2)
{




 FUNC_0(FUNC_1(VAR_2));





 if (VAR_1)
 {
  if (VAR_1 < 0)
  {
   if (FUNC_2(VAR_2))
    return 1;
   else
    return -1;
  }
  if (VAR_1 > 0)
  {
   if (FUNC_3(VAR_2))
    return -1;
   else
    return 1;
  }
 }

 return FUNC_4(VAR_0, VAR_2);
}

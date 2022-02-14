
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Numeric ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(Numeric VAR_0, Numeric VAR_1)
{
 int VAR_2;






 if (FUNC_1(VAR_0))
 {
  if (FUNC_1(VAR_1))
   VAR_2 = 0;
  else
   VAR_2 = 1;
 }
 else if (FUNC_1(VAR_1))
 {
  VAR_2 = -1;
 }
 else
 {
  VAR_2 = FUNC_5(FUNC_0(VAR_0), FUNC_2(VAR_0),
        FUNC_4(VAR_0), FUNC_3(VAR_0),
        FUNC_0(VAR_1), FUNC_2(VAR_1),
        FUNC_4(VAR_1), FUNC_3(VAR_1));
 }

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float8 ;


 scalar_t__ FUNC_0 (int ,double) ;
 scalar_t__ FUNC_1 (int ,double) ;
 scalar_t__ FUNC_2 (int ,double) ;
 scalar_t__ FUNC_3 (int ,double) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(float8 VAR_1, float8 VAR_2, float8 VAR_3, float8 VAR_4)
{
 float8 VAR_5;
 int VAR_6;

 if (FUNC_4(VAR_2))
 {
  if (FUNC_4(VAR_1))
   return VAR_0;
  else if (FUNC_1(VAR_1, 0))
  {
   if (FUNC_4(VAR_4))

    return FUNC_1(VAR_3, 0.0) ? 0 : VAR_0;
   return FUNC_3(VAR_4, 0.0) ? 1 : -1;
  }
  else
  {
   if (FUNC_4(VAR_4))

    return FUNC_3(VAR_3, 0.0) ? 0 : VAR_0;
   return 0;
  }
 }
 else
 {

  VAR_6 = FUNC_1(VAR_2, 0.0) ? 1 : -1;

  if (FUNC_4(VAR_4))

   return FUNC_3(VAR_3, 0.0) ? 0 : VAR_6;
  else if ((VAR_6 < 0 && FUNC_3(VAR_4, 0.0)) ||
     (VAR_6 > 0 && FUNC_1(VAR_4, 0.0)))

   return 0;
  else
  {
   if (FUNC_0(VAR_1, 0.0) && FUNC_1(VAR_3, 0.0))

    return 2 * VAR_6;
   if (FUNC_3(VAR_1, 0.0) && FUNC_2(VAR_3, 0.0))

    return 0;


   VAR_5 = FUNC_5(FUNC_6(FUNC_5(VAR_1, VAR_3), VAR_2),
        FUNC_6(FUNC_5(VAR_2, VAR_4), VAR_1));
   if (FUNC_4(VAR_5))
    return VAR_0;
   if ((VAR_6 < 0 && FUNC_3(VAR_5, 0.0)) ||
    (VAR_6 > 0 && FUNC_1(VAR_5, 0.0)))
    return 0;
   return 2 * VAR_6;
  }
 }
}

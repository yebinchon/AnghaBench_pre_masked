
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NDBOX ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int) ;

bool
FUNC_5(NDBOX *VAR_0, NDBOX *VAR_1)
{
 int VAR_2;

 if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)))
  return 0;


 if (FUNC_0(VAR_0) < FUNC_0(VAR_1))
 {
  NDBOX *VAR_3 = VAR_1;

  VAR_1 = VAR_0;
  VAR_0 = VAR_3;
 }


 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
 {
  if (FUNC_3(FUNC_1(VAR_0, VAR_2), FUNC_4(VAR_0, VAR_2)) > FUNC_2(FUNC_1(VAR_1, VAR_2), FUNC_4(VAR_1, VAR_2)))
   return 0;
  if (FUNC_2(FUNC_1(VAR_0, VAR_2), FUNC_4(VAR_0, VAR_2)) < FUNC_3(FUNC_1(VAR_1, VAR_2), FUNC_4(VAR_1, VAR_2)))
   return 0;
 }


 for (VAR_2 = FUNC_0(VAR_1); VAR_2 < FUNC_0(VAR_0); VAR_2++)
 {
  if (FUNC_3(FUNC_1(VAR_0, VAR_2), FUNC_4(VAR_0, VAR_2)) > 0)
   return 0;
  if (FUNC_2(FUNC_1(VAR_0, VAR_2), FUNC_4(VAR_0, VAR_2)) < 0)
   return 0;
 }

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int NDBOX ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int *,int) ;

int32
FUNC_5(NDBOX *VAR_0, NDBOX *VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_3 = FUNC_3(FUNC_0(VAR_0), FUNC_0(VAR_1));


 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
 {
  if (FUNC_3(FUNC_1(VAR_0, VAR_2), FUNC_4(VAR_0, VAR_2)) >
   FUNC_3(FUNC_1(VAR_1, VAR_2), FUNC_4(VAR_1, VAR_2)))
   return 1;
  if (FUNC_3(FUNC_1(VAR_0, VAR_2), FUNC_4(VAR_0, VAR_2)) <
   FUNC_3(FUNC_1(VAR_1, VAR_2), FUNC_4(VAR_1, VAR_2)))
   return -1;
 }
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
 {
  if (FUNC_2(FUNC_1(VAR_0, VAR_2), FUNC_4(VAR_0, VAR_2)) >
   FUNC_2(FUNC_1(VAR_1, VAR_2), FUNC_4(VAR_1, VAR_2)))
   return 1;
  if (FUNC_2(FUNC_1(VAR_0, VAR_2), FUNC_4(VAR_0, VAR_2)) <
   FUNC_2(FUNC_1(VAR_1, VAR_2), FUNC_4(VAR_1, VAR_2)))
   return -1;
 }


 if (FUNC_0(VAR_0) > FUNC_0(VAR_1))
 {
  for (VAR_2 = VAR_3; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  {
   if (FUNC_3(FUNC_1(VAR_0, VAR_2), FUNC_4(VAR_0, VAR_2)) > 0)
    return 1;
   if (FUNC_3(FUNC_1(VAR_0, VAR_2), FUNC_4(VAR_0, VAR_2)) < 0)
    return -1;
  }
  for (VAR_2 = VAR_3; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  {
   if (FUNC_2(FUNC_1(VAR_0, VAR_2), FUNC_4(VAR_0, VAR_2)) > 0)
    return 1;
   if (FUNC_2(FUNC_1(VAR_0, VAR_2), FUNC_4(VAR_0, VAR_2)) < 0)
    return -1;
  }





  return 1;
 }
 if (FUNC_0(VAR_0) < FUNC_0(VAR_1))
 {
  for (VAR_2 = VAR_3; VAR_2 < FUNC_0(VAR_1); VAR_2++)
  {
   if (FUNC_3(FUNC_1(VAR_1, VAR_2), FUNC_4(VAR_1, VAR_2)) > 0)
    return -1;
   if (FUNC_3(FUNC_1(VAR_1, VAR_2), FUNC_4(VAR_1, VAR_2)) < 0)
    return 1;
  }
  for (VAR_2 = VAR_3; VAR_2 < FUNC_0(VAR_1); VAR_2++)
  {
   if (FUNC_2(FUNC_1(VAR_1, VAR_2), FUNC_4(VAR_1, VAR_2)) > 0)
    return -1;
   if (FUNC_2(FUNC_1(VAR_1, VAR_2), FUNC_4(VAR_1, VAR_2)) < 0)
    return 1;
  }





  return -1;
 }


 return 0;
}

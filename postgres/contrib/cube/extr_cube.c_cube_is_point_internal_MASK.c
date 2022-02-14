
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NDBOX ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;

__attribute__((used)) static bool
FUNC_4(NDBOX *VAR_0)
{
 int VAR_1;

 if (FUNC_1(VAR_0))
  return 1;
 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++)
 {
  if (FUNC_2(VAR_0, VAR_1) != FUNC_3(VAR_0, VAR_1))
   return 0;
 }
 return 1;
}

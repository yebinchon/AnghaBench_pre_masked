
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PrintfTarget ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (char,int,int *) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, int VAR_1, int *VAR_2, PrintfTarget *VAR_3)
{
 int VAR_4;

 if (*VAR_2 > 0 && VAR_0)
 {
  if (VAR_1)
  {
   FUNC_0(VAR_1, VAR_3);
   --(*VAR_2);
   VAR_1 = 0;
  }
  if (*VAR_2 > 0)
  {
   FUNC_1(VAR_0, *VAR_2, VAR_3);
   *VAR_2 = 0;
  }
 }
 VAR_4 = (VAR_1 != 0);
 if (*VAR_2 > VAR_4)
 {
  FUNC_1(' ', *VAR_2 - VAR_4, VAR_3);
  *VAR_2 = VAR_4;
 }
 if (VAR_1)
 {
  FUNC_0(VAR_1, VAR_3);
  if (*VAR_2 > 0)
   --(*VAR_2);
  else if (*VAR_2 < 0)
   ++(*VAR_2);
 }
}

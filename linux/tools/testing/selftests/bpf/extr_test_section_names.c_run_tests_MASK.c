
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_1 = 0;
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); ++VAR_3) {
  if (FUNC_2(&VAR_0[VAR_3]))
   ++VAR_2;
  else
   ++VAR_1;
 }
 FUNC_1("Summary: %d PASSED, %d FAILED\n", VAR_1, VAR_2);
 return VAR_2 ? -1 : 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 long FUNC_1 (scalar_t__**,int *,int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__** VAR_3 ;

void *FUNC_5(void *VAR_4)
{
 int VAR_5, VAR_6;
 long VAR_7;
 FUNC_4(FUNC_2());
 for (VAR_5 = 0; VAR_5 < 12; VAR_5++)
  for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
   VAR_3[VAR_5][VAR_6] = FUNC_3();

   if (VAR_3[VAR_5][VAR_6] == 0)
    VAR_6--;
  }
 VAR_7 = FUNC_1(VAR_3, &VAR_2, &VAR_0);
 if (VAR_7 == 2)
  FUNC_0(VAR_1, "Caught zeros in VSX compares\n");
 return (void *)VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpu_set_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_4(int VAR_0, char *VAR_1, int VAR_2,
    cpu_set_t *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;

 if (!FUNC_0(VAR_2, VAR_3)) {
  FUNC_3(VAR_1, VAR_0, "none");
  return;
 }

 VAR_6 = 0;
 VAR_5 = 1;
 for (VAR_4 = 0; VAR_4 < FUNC_2(); ++VAR_4) {
  if (!FUNC_1(VAR_4, VAR_2, VAR_3))
   continue;
  if (!VAR_5) {
   VAR_7 = FUNC_3(&VAR_1[VAR_6],
      VAR_0 - VAR_6, ",");
   VAR_6 += VAR_7;
  }
  VAR_7 = FUNC_3(&VAR_1[VAR_6], VAR_0 - VAR_6, "%d",
     VAR_4);
  VAR_6 += VAR_7;
  VAR_5 = 0;
 }
}

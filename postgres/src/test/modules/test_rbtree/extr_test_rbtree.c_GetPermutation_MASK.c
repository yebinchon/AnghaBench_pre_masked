
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static int *
FUNC_2(int VAR_0)
{
 int *VAR_1;
 int VAR_2;

 VAR_1 = (int *) FUNC_0(VAR_0 * sizeof(int));

 VAR_1[0] = 0;
 for (VAR_2 = 1; VAR_2 < VAR_0; VAR_2++)
 {
  int VAR_3 = FUNC_1() % (VAR_2 + 1);

  if (VAR_3 < VAR_2)
   VAR_1[VAR_2] = VAR_1[VAR_3];
  VAR_1[VAR_3] = VAR_2;
 }

 return VAR_1;
}

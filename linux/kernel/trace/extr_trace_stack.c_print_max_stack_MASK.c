
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,long,...) ;
 scalar_t__* VAR_0 ;
 int* VAR_1 ;
 long VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
 long VAR_3;
 int VAR_4;

 FUNC_0("        Depth    Size   Location    (%d entries)\n"
      "        -----    ----   --------\n",
      VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_3 + 1 == VAR_2)
   VAR_4 = VAR_1[VAR_3];
  else
   VAR_4 = VAR_1[VAR_3] - VAR_1[VAR_3+1];

  FUNC_0("%3ld) %8d   %5d   %pS\n", VAR_3, VAR_1[VAR_3],
    VAR_4, (void *)VAR_0[VAR_3]);
 }
}

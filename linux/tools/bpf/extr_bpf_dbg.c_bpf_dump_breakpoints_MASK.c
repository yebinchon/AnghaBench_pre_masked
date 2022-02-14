
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__* VAR_0 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_1;

 FUNC_1("breakpoints: ");

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++) {
  if (VAR_0[VAR_1] < 0)
   continue;
  FUNC_1("%d ", VAR_0[VAR_1]);
 }

 FUNC_1("\n");
}

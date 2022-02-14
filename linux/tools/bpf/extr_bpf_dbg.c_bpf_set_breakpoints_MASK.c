
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*) ;
 int* VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_1)
{
 int VAR_2;
 bool VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2] == (int) VAR_1) {
   FUNC_1("breakpoint already set!\n");
   VAR_3 = 1;
   break;
  }

  if (VAR_0[VAR_2] == -1 && VAR_3 == 0) {
   VAR_0[VAR_2] = VAR_1;
   VAR_3 = 1;
  }
 }

 if (!VAR_3)
  FUNC_1("too many breakpoints set, reset first!\n");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ypos ;
typedef int xpos ;


 int FUNC_0 (char*) ;
 void* FUNC_1 () ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3() {
 char VAR_0[32];
 char VAR_1[32];
 (void)FUNC_1 ();
 int VAR_2 = FUNC_1 ();



 if (VAR_2 == ';') {
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < sizeof (VAR_0); VAR_3++) {
   char VAR_4 = FUNC_1 ();
   if (VAR_4 == ';' || VAR_4 == 'M') {
    break;
   }
   VAR_0[VAR_3] = VAR_4;
  }
  VAR_0[VAR_3] = 0;
  for (VAR_3 = 0; VAR_3 < sizeof (VAR_1); VAR_3++) {
   char VAR_5 = FUNC_1 ();
   if (VAR_5 == ';' || VAR_5 == 'M') {
    break;
   }
   VAR_1[VAR_3] = VAR_5;
  }
  VAR_1[VAR_3] = 0;
  FUNC_2 (FUNC_0 (VAR_0), FUNC_0 (VAR_1));
  (void) FUNC_1 ();

  int VAR_6 = FUNC_1 ();
  if (VAR_6 == 27) {
   VAR_6 = FUNC_1 ();
  }
  if (VAR_6 == '[') {
   do {
    VAR_6 = FUNC_1 ();
   } while (VAR_6 != 'M');
  }
 }
 return 0;
}

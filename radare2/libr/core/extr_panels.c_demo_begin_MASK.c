
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RCore ;
typedef int RConsCanvas ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int *,int *,int) ;
 char* FUNC_8 (char*,int,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10 (RCore *VAR_0, RConsCanvas *VAR_1) {
 char *VAR_2 = FUNC_1 (VAR_1);
 if (VAR_2) {

  FUNC_7 (VAR_2, ((void*)0), ((void*)0), -1);
  int VAR_3, VAR_4, VAR_5 = FUNC_4 (&VAR_4);
  for (VAR_3 = 0; VAR_3 < 40; VAR_3+= (1 + (VAR_3/30))) {
   int VAR_6 = VAR_3 * ((double)VAR_4 / 40);
   char *VAR_7 = FUNC_8 (VAR_2, VAR_5, VAR_6);
   FUNC_2 ();
   FUNC_5 (0, (VAR_4 / 2) - (VAR_6 / 2));
   FUNC_6 (VAR_7);
   FUNC_3 ();
   FUNC_0 (VAR_7);
   FUNC_9 (3000);
  }
  FUNC_0 (VAR_2);
 }
}

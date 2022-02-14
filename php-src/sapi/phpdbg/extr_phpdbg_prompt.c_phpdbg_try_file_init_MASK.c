
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_stat_t ;
typedef scalar_t__ zend_bool ;
struct phpdbg_init_state {char* init_file; char* code; int member_0; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,char*,char*) ;
 int FUNC_6 (char*,struct phpdbg_init_state*) ;

void FUNC_7(char *VAR_1, size_t VAR_2, zend_bool VAR_3)
{
 zend_stat_t VAR_4;

 if (VAR_1 && FUNC_0(VAR_1, &VAR_4) != -1) {
  FILE *VAR_5 = FUNC_3(VAR_1, "r");
  if (VAR_5) {
   char VAR_6[VAR_0];
   struct phpdbg_init_state VAR_7 = {0};

   VAR_7.init_file = VAR_1;

   while (FUNC_2(VAR_6, VAR_0, VAR_5) != ((void*)0)) {
    FUNC_6(VAR_6, &VAR_7);
   }

   if (VAR_7.code) {
    FUNC_4(VAR_7.code);
   }

   FUNC_1(VAR_5);
  } else {
   FUNC_5("initfailure", "type=\"openfile\" file=\"%s\"", "Failed to open %s for initialization", VAR_1);
  }

  if (VAR_3) {
   FUNC_4(VAR_1);
  }
 }
}

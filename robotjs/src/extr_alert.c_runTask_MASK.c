
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,char* const*) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3, char * const VAR_4[], int *VAR_5)
{
 pid_t VAR_6;
 int VAR_7;

 switch (VAR_6 = FUNC_4()) {
  case -1:
   FUNC_5("fork");
   return VAR_1;
  case 0:
   FUNC_2(VAR_3, VAR_4);
   FUNC_3(42);
  default:
   FUNC_6(&VAR_7);

   if (!FUNC_1(VAR_7) || (VAR_7 = FUNC_0(VAR_7)) == 42) {
    return VAR_0;
   }
   if (VAR_5 != ((void*)0)) *VAR_5 = VAR_7;
   return VAR_2;
 }
}

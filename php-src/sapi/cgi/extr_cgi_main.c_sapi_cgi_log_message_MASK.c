
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fcgi_request ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,char*,int) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(char *VAR_4, int VAR_5)
{
 if (FUNC_2() && FUNC_0(VAR_1)) {
  fcgi_request *VAR_6;

  VAR_6 = (fcgi_request*) FUNC_1(VAR_2);
  if (VAR_6) {
   int VAR_7, VAR_8 = (int)FUNC_9(VAR_4);
   char *VAR_9 = FUNC_6(VAR_8+2);

   FUNC_7(VAR_9, VAR_4, VAR_8);
   FUNC_7(VAR_9 + VAR_8, "\n", sizeof("\n"));
   VAR_7 = FUNC_3(VAR_6, VAR_0, VAR_9, (int)(VAR_8 + 1));
   FUNC_5(VAR_9);
   if (VAR_7 < 0) {
    FUNC_8();
   }
  } else {
   FUNC_4(VAR_3, "%s\n", VAR_4);
  }

 } else {
  FUNC_4(VAR_3, "%s\n", VAR_4);
 }
}

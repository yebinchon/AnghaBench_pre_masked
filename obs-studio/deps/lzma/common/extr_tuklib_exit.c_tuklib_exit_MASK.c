
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char*,char*,char*) ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_5 (int ) ;

extern void
FUNC_6(int VAR_4, int VAR_5, int VAR_6)
{
 if (VAR_4 != VAR_5) {


  const int VAR_7 = FUNC_3(VAR_3);
  const int VAR_8 = FUNC_2(VAR_3);
  if (VAR_7 || VAR_8) {
   VAR_4 = VAR_5;




   if (VAR_6)
    FUNC_4(VAR_2, "%s: %s: %s\n", VAR_1,
      FUNC_0("Writing to standard "
       "output failed"),
      VAR_8 ? FUNC_5(VAR_0)
       : FUNC_0("Unknown error"));
  }
 }

 if (VAR_4 != VAR_5) {



  const int VAR_9 = FUNC_3(VAR_2);
  const int VAR_10 = FUNC_2(VAR_2);
  if (VAR_10 || VAR_9)
   VAR_4 = VAR_5;
 }

 FUNC_1(VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int volume_name ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int) ;
 int VAR_5 ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char*,char,...) ;

BOOL FUNC_9(char* VAR_6)
{
 char VAR_7[51];


 FUNC_3(VAR_6[0]);
 if (FUNC_4(VAR_6, VAR_7, sizeof(VAR_7))) {
  if (FUNC_1(VAR_6)) {
   FUNC_6(200);
   if (FUNC_5(VAR_6, VAR_7)) {
    FUNC_8("Successfully remounted %s as %C:", VAR_7, VAR_6[0]);
   } else {
    FUNC_8("Failed to remount %s as %C:", VAR_7, VAR_6[0]);

    VAR_4 = VAR_1|FUNC_2(VAR_2)|FUNC_0(VAR_0);
    return VAR_3;
   }
  } else {
   FUNC_8("Could not remount %s as %C: %s", VAR_7, VAR_6[0], FUNC_7());

  }
 }
 return VAR_5;
}

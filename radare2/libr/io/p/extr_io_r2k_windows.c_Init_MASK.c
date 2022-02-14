
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (char const*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (char const*) ;

int FUNC_7 (const char * VAR_2) {
 BOOL VAR_3 = VAR_0;
 if (FUNC_0 () == VAR_0) {
  if (FUNC_6 (VAR_2)) {
   FUNC_3 (FUNC_4 ("r2k"),VAR_1);
   FUNC_2 (FUNC_4 ("r2k"));
   FUNC_5 ("Installing driver: %s\n", VAR_2);
   if (FUNC_1 (VAR_2, FUNC_4 ("r2k"), FUNC_4 ("r2k"))) {
    FUNC_3 (FUNC_4 ("r2k"),VAR_0);
    VAR_3 = FUNC_0 ();
   }
  } else {
   FUNC_5 ("Error initalizating driver, try r2k://pathtodriver\nEx: radare2.exe r2k://c:\\r2k.sys");
  }
 } else {
  FUNC_5 ("Driver present [OK]\n");
  VAR_3 = VAR_1;
 }
 return VAR_3;
}

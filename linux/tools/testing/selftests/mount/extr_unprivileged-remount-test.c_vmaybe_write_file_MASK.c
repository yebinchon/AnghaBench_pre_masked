
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int ssize_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int,char*,int ) ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static void FUNC_6(bool VAR_3, char *VAR_4, char *VAR_5, va_list VAR_6)
{
 char VAR_7[4096];
 int VAR_8;
 ssize_t VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_7, sizeof(VAR_7), VAR_5, VAR_6);
 if (VAR_10 < 0) {
  FUNC_1("vsnprintf failed: %s\n",
      FUNC_3(VAR_2));
 }
 if (VAR_10 >= sizeof(VAR_7)) {
  FUNC_1("vsnprintf output truncated\n");
 }

 VAR_8 = FUNC_2(VAR_4, VAR_1);
 if (VAR_8 < 0) {
  if ((VAR_2 == VAR_0) && VAR_3)
   return;
  FUNC_1("open of %s failed: %s\n",
      VAR_4, FUNC_3(VAR_2));
 }
 VAR_9 = FUNC_5(VAR_8, VAR_7, VAR_10);
 if (VAR_9 != VAR_10) {
  if (VAR_9 >= 0) {
   FUNC_1("short write to %s\n", VAR_4);
  } else {
   FUNC_1("write to %s failed: %s\n",
    VAR_4, FUNC_3(VAR_2));
  }
 }
 if (FUNC_0(VAR_8) != 0) {
  FUNC_1("close of %s failed: %s\n",
   VAR_4, FUNC_3(VAR_2));
 }
}

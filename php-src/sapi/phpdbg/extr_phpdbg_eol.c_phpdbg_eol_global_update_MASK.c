
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PHPDBG_G ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,char*) ;

int FUNC_1(char *VAR_5)
{

 if (0 == FUNC_0(VAR_5, "CRLF") || 0 == FUNC_0(VAR_5, "crlf") || 0 == FUNC_0(VAR_5, "DOS") || 0 == FUNC_0(VAR_5, "dos")) {
  PHPDBG_G(VAR_6) = VAR_2;
 } else if (0 == FUNC_0(VAR_5, "LF") || 0 == FUNC_0(VAR_5, "lf") || 0 == FUNC_0(VAR_5, "UNIX") || 0 == FUNC_0(VAR_5, "unix")) {
  PHPDBG_G(VAR_7) = VAR_3;
 } else if (0 == FUNC_0(VAR_5, "CR") || 0 == FUNC_0(VAR_5, "cr") || 0 == FUNC_0(VAR_5, "MAC") || 0 == FUNC_0(VAR_5, "mac")) {
  PHPDBG_G(VAR_8) = VAR_1;
 } else {
  return VAR_0;
 }

 return VAR_4;
}

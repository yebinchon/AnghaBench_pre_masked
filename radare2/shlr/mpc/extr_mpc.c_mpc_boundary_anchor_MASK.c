
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char) ;

__attribute__((used)) static int FUNC_1(char VAR_0, char VAR_1) {
  const char* VAR_2 = "abcdefghijklmnopqrstuvwxyz"
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                     "0123456789_";
  if ( FUNC_0(VAR_2, VAR_1) && VAR_0 == '\0') { return 1; }
  if ( FUNC_0(VAR_2, VAR_0) && VAR_1 == '\0') { return 1; }
  if ( FUNC_0(VAR_2, VAR_1) && !FUNC_0(VAR_2, VAR_0)) { return 1; }
  if (!FUNC_0(VAR_2, VAR_1) && FUNC_0(VAR_2, VAR_0)) { return 1; }
  return 0;
}

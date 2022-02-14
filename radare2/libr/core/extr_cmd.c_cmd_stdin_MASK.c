
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, const char *VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_0;
 if (VAR_1[0] == '?') {
  FUNC_0 ("Usage: '-' '.-' '. -' do the same\n");
  return 0;
 }
 return FUNC_1 (VAR_2, "-");
}

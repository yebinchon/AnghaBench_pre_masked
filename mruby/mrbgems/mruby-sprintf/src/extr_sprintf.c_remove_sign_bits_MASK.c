
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char*
FUNC_2(char *VAR_0, int VAR_1)
{
  char *VAR_2;

  VAR_2 = VAR_0;
  if (VAR_1 == 16) {
    while (*VAR_2 == 'f') {
      VAR_2++;
    }
  }
  else if (VAR_1 == 8) {
    *VAR_2 |= FUNC_0(3, FUNC_1(VAR_2));
    while (*VAR_2 == '7') {
      VAR_2++;
    }
  }
  else if (VAR_1 == 2) {
    while (*VAR_2 == '1') {
      VAR_2++;
    }
  }

  return VAR_2;
}

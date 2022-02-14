
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0)
{
 if (VAR_0[0] == '\0')
  return 1;

 if (VAR_0[0] == 'a' && VAR_0[1] == '\0')
  return 1;

 if (VAR_0[0] == 'c' &&
     (VAR_0[1] == 'c' || VAR_0[1] == 's') &&
     VAR_0[2] == '\0')
  return 1;

 if (VAR_0[0] == 'e' &&
     (VAR_0[1] == '\0' ||
      (VAR_0[1] == 'q' && VAR_0[2] == '\0')))
  return 1;

 if (VAR_0[0] == 'g' &&
     (VAR_0[1] == '\0' ||
      (VAR_0[1] == 't' && VAR_0[2] == '\0') ||
      (VAR_0[1] == 'e' && VAR_0[2] == '\0') ||
      (VAR_0[1] == 'e' && VAR_0[2] == 'u' && VAR_0[3] == '\0')))
  return 1;

 if (VAR_0[0] == 'l' &&
     (VAR_0[1] == '\0' ||
      (VAR_0[1] == 't' && VAR_0[2] == '\0') ||
      (VAR_0[1] == 'u' && VAR_0[2] == '\0') ||
      (VAR_0[1] == 'e' && VAR_0[2] == '\0') ||
      (VAR_0[1] == 'e' && VAR_0[2] == 'u' && VAR_0[3] == '\0')))
  return 1;

 if (VAR_0[0] == 'n' &&
     (VAR_0[1] == '\0' ||
      (VAR_0[1] == 'e' && VAR_0[2] == '\0') ||
      (VAR_0[1] == 'z' && VAR_0[2] == '\0') ||
      (VAR_0[1] == 'e' && VAR_0[2] == 'g' && VAR_0[3] == '\0')))
  return 1;

 if (VAR_0[0] == 'b' &&
     VAR_0[1] == 'p' &&
     VAR_0[2] == 'o' &&
     VAR_0[3] == 's' &&
     VAR_0[4] == '\0')
  return 1;

 if (VAR_0[0] == 'v' &&
     (VAR_0[1] == 'c' || VAR_0[1] == 's') &&
     VAR_0[2] == '\0')
  return 1;

 if (VAR_0[0] == 'b' &&
     VAR_0[1] == 'z' &&
     VAR_0[2] == '\0')
  return 1;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2 (char * VAR_0, const char * VAR_1, int VAR_2)



{
  register int VAR_3, VAR_4;
  register int VAR_5 = 0;

  while ((VAR_3 = *VAR_0++) != '\0') {
    if ((VAR_4 = *VAR_1++) == '\0')
      return 0;
    if (FUNC_0(VAR_3))
      VAR_3 = FUNC_1(VAR_3);
    if (VAR_3 != VAR_4)
      return 0;
    VAR_5++;
  }

  if (VAR_5 < VAR_2)
    return 0;
  return 1;
}

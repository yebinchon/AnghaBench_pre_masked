
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static void
FUNC_1()
{
  while ((VAR_1 < VAR_2) && (!FUNC_0(VAR_0[VAR_1])))
    {
      VAR_1++;
    }
  if ((VAR_1 < VAR_2) && (FUNC_0(VAR_0[VAR_1])))
    {
      VAR_1++;
      if ((VAR_1 < VAR_2) && (VAR_0[VAR_1] == '\n'))
        {
          VAR_1++;
        }
    }
}

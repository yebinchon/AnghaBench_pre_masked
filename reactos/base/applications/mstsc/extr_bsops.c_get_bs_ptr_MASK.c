
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static char *
FUNC_0(int VAR_4, int VAR_5)
{
  char * VAR_6;

  if (VAR_4 >= 0 && VAR_4 < VAR_3 && VAR_5 >= 0 && VAR_5 < VAR_2)
  {
    VAR_6 = VAR_1 + (VAR_5 * VAR_3 * VAR_0) + (VAR_4 * VAR_0);
    return VAR_6;
  }
  else
  {
    return 0;
  }
}

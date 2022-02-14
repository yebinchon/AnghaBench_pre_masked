
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 char** VAR_4 ;
 char** VAR_5 ;
 char** VAR_6 ;
 int FUNC_1 (char const*) ;
 scalar_t__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_2 (int VAR_10, int VAR_11)
{
  const char *VAR_12;

  *VAR_7++ = VAR_8;
  FUNC_0 (VAR_1);
  if (VAR_9 & VAR_1)
    {
      if (!(VAR_11 & VAR_0))
 VAR_12 = VAR_5[VAR_10 - VAR_3];
      else
 VAR_12 = VAR_6[VAR_10 - VAR_3];
    }
  else if (VAR_11 & VAR_0)
    VAR_12 = VAR_5[VAR_10 - VAR_3];
  else
    VAR_12 = VAR_4[VAR_10 - VAR_3];
  FUNC_1 (VAR_12);
  *VAR_7++ = VAR_2;
  *VAR_7 = 0;
}

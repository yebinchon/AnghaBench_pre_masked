
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned char const) ;
 scalar_t__ FUNC_1 (unsigned char const) ;

int FUNC_2( const unsigned char *VAR_4, size_t VAR_5 )
{
  int VAR_6 = 0;
  const unsigned char *VAR_7 = VAR_4 + VAR_5;




  while (VAR_4 < VAR_7)
  {
    if (!*VAR_4)
      return VAR_0;
    VAR_6 = !VAR_6 && FUNC_0(*VAR_4);
    VAR_4++;
  }

  if (VAR_6)
    if (FUNC_1(*VAR_4))
      return VAR_3;
    else
      return VAR_0;
  else
    if (FUNC_0(*VAR_4))
      return VAR_1;
    else
      return VAR_2;
}

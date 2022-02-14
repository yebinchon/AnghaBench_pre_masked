
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* fmt; } ;
typedef TYPE_1__ hexagon_operand ;


 char* FUNC_0 (scalar_t__) ;
 size_t VAR_0 ;
 TYPE_1__ const* VAR_1 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

const hexagon_operand *
FUNC_5
(const hexagon_operand *VAR_2, const char *VAR_3)
{
  size_t VAR_4;
  char *VAR_5;

  VAR_5 = FUNC_0 (FUNC_4 (VAR_2->fmt) + FUNC_4 (VAR_3) + 1);
  FUNC_3 (VAR_5, VAR_2->fmt);
  FUNC_1 (VAR_5, VAR_3);

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    if (!FUNC_2 (VAR_1 [VAR_4].fmt, VAR_5))
      return (VAR_1 + VAR_4);

  return ((void*)0);
}

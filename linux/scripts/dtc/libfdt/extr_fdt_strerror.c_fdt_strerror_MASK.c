
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* str; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

const char *FUNC_0(int VAR_2)
{
 if (VAR_2 > 0)
  return "<valid offset/length>";
 else if (VAR_2 == 0)
  return "<no error>";
 else if (VAR_2 > -VAR_0) {
  const char *VAR_3 = VAR_1[-VAR_2].str;

  if (VAR_3)
   return VAR_3;
 }

 return "<unknown error>";
}

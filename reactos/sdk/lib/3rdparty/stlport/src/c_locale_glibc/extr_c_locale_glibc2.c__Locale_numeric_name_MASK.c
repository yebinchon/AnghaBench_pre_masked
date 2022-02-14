
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _Locale_numeric {int dummy; } ;
typedef TYPE_1__* locale_t ;
struct TYPE_2__ {char const** __names; } ;


 size_t VAR_0 ;

char const*FUNC_0( const struct _Locale_numeric *VAR_1, char *VAR_2 )
{
  return ((locale_t)VAR_1)->__names[VAR_0];
}

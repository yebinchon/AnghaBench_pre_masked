
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _Locale_monetary {int dummy; } ;
typedef TYPE_1__* locale_t ;
struct TYPE_3__ {char** __names; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 char* FUNC_0 (int ,TYPE_1__*) ;

char FUNC_1(struct _Locale_monetary *VAR_2)
{


  const char* VAR_3 = ((locale_t)VAR_2)->__names[VAR_1];
  if (VAR_3[0] == 'C' && VAR_3[1] == 0)
    return 0;
  return *(FUNC_0(VAR_0, (locale_t)VAR_2));
}
